#pragma once

#include <QtWidgets/QWidget>
#include <ActiveQt/QAxBindable>
#include "OutPut_Class.h"
#include "SignalCenter.h"
#include "ui_Main_Activerserver_Demo.h"

class Main_Activerserver_Demo : public QWidget, public QAxBindable
{
    Q_OBJECT

public:
    Main_Activerserver_Demo(QWidget *parent = Q_NULLPTR);

	//这里可以写个单例，用作整个COM组件的中控
	~Main_Activerserver_Demo();
private:
    Ui::Main_Activerserver_DemoClass ui;

	private slots:

	void on_pushButton_clicked();
	//接收中转站的signal
	void rec_slot(int a);
};
