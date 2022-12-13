#include "SignalCenter.h"

SignalCenter::SignalCenter(QObject *parent)
	: QObject(parent)
{
}

SignalCenter & SignalCenter::Instance()
{
	static SignalCenter theApp;
	return theApp;
}

SignalCenter::~SignalCenter()
{
}
