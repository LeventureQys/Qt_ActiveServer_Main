#pragma once

#include <QObject>
//�ź����ģ�һ��ȫ�ֵ�������ת���ź�
class SignalCenter : public QObject
{
	Q_OBJECT

public:
	SignalCenter(QObject *parent=Q_NULLPTR);
	static SignalCenter& SignalCenter::Instance();
	~SignalCenter();

signals:
	void out_rec(int a);
};
