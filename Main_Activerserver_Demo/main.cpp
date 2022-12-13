#include "qaxfactory.h"
#include "qobject.h"
#include "qapplication.h"
#include "Main_Activerserver_Demo.h"
//初始化导出类和object列表
#include "OutPut_Class.h"
QList<OutPut_Class*> OutPut_Class::list_object;

QAXFACTORY_BEGIN("{192D0B25-653C-49FB-BD8D-98DBD1E8B60D}", "{D6792566-9741-48BB-82B7-6D7F9BFFD82F}")
QAXCLASS(OutPut_Class)
QAXFACTORY_END()
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//不准外部进程通过setControl启动一个主进程，我就是我
	if (QAxFactory::isServer()) {
		return a.exec();
	}
	//启动服务
	qDebug() << QAxFactory::startServer();
	qDebug() << QAxFactory::isServer();
	Main_Activerserver_Demo Instance;
	Instance.show();

	OutPut_Class test;
	//有的话注册至少一个实例一个防止内存崩溃？我也不知道为什么，反正不这么做会崩溃，我也不知道为什么
	QAxFactory::registerActiveObject(&test);
	return a.exec();
}