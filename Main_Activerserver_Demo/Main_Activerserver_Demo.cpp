#include "Main_Activerserver_Demo.h"

#include <ActiveQt/QAxFactory>

Main_Activerserver_Demo::Main_Activerserver_Demo(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
	//注册中转站的信号
	connect(&SignalCenter::Instance(), SIGNAL(out_rec(int)), this, SLOT(rec_slot(int)));
}

Main_Activerserver_Demo::~Main_Activerserver_Demo()
{
	qDebug() << "Release Instance!";
}

void Main_Activerserver_Demo::rec_slot(int a)
{
	this->ui.plainTextEdit->appendPlainText(QString::number(a));
}

void Main_Activerserver_Demo::on_pushButton_clicked()
{
	for each (OutPut_Class *object in OutPut_Class::list_object)
	{
		emit object->send_to_progress(123456);
	}
}


