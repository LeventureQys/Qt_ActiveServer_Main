#include "qaxfactory.h"
#include "qobject.h"
#include "qapplication.h"
#include "Main_Activerserver_Demo.h"
//��ʼ���������object�б�
#include "OutPut_Class.h"
QList<OutPut_Class*> OutPut_Class::list_object;

QAXFACTORY_BEGIN("{192D0B25-653C-49FB-BD8D-98DBD1E8B60D}", "{D6792566-9741-48BB-82B7-6D7F9BFFD82F}")
QAXCLASS(OutPut_Class)
QAXFACTORY_END()
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//��׼�ⲿ����ͨ��setControl����һ�������̣��Ҿ�����
	if (QAxFactory::isServer()) {
		return a.exec();
	}
	//��������
	qDebug() << QAxFactory::startServer();
	qDebug() << QAxFactory::isServer();
	Main_Activerserver_Demo Instance;
	Instance.show();

	OutPut_Class test;
	//�еĻ�ע������һ��ʵ��һ����ֹ�ڴ��������Ҳ��֪��Ϊʲô����������ô�����������Ҳ��֪��Ϊʲô
	QAxFactory::registerActiveObject(&test);
	return a.exec();
}