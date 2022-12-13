#include "OutPut_Class.h"

OutPut_Class::OutPut_Class(QObject *parent)
	: QObject(parent)
{
	//��ʼ����ʱ�򽫱���ʼ��������ӵ���̬������ȥ
	OutPut_Class::list_object.append(this);
	//���ڲ�֪��ʲôʱ������µ�����ӣ�Ҳ������ÿ�ζ����һ���µ����ӣ�������������ͳһͨ��һ���ź���תվ������ת���ź�
	connect(this, SIGNAL(sig_receive_from_progress(int)), &SignalCenter::Instance(), SIGNAL(out_rec(int)));
}

void OutPut_Class::receive_from_progress(int value)
{
	//�ⲿ���ú���
	qDebug() << "Receive from out progress:" << value;
	emit sig_receive_from_progress(value);
}

OutPut_Class::~OutPut_Class()
{
	//������ʱ���Ƴ���ǰ�������Ϳ�����
	OutPut_Class::list_object.removeOne(this);
}
