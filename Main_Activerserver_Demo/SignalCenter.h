#pragma once

#include <QObject>
//信号中心，一个全局单例用来转发信号
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
