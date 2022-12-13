#include "OutPut_Class.h"

OutPut_Class::OutPut_Class(QObject *parent)
	: QObject(parent)
{
	//初始化的时候将被初始化的类添加到静态数组中去
	OutPut_Class::list_object.append(this);
	//由于不知道什么时候会有新的类添加，也不可能每次都添加一个新的连接，所以这里我们统一通过一个信号中转站单例来转发信号
	connect(this, SIGNAL(sig_receive_from_progress(int)), &SignalCenter::Instance(), SIGNAL(out_rec(int)));
}

void OutPut_Class::receive_from_progress(int value)
{
	//外部调用函数
	qDebug() << "Receive from out progress:" << value;
	emit sig_receive_from_progress(value);
}

OutPut_Class::~OutPut_Class()
{
	//析构的时候移除当前这个对象就可以了
	OutPut_Class::list_object.removeOne(this);
}
