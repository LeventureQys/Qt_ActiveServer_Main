#pragma once

#include <QObject>
#include "qlist.h"
#include "qaxbindable.h"
#include "qdebug.h"
#include "SignalCenter.h"
//�����࣬�������
class OutPut_Class : public QObject,public QAxBindable
{
	Q_OBJECT
		Q_CLASSINFO("ClassID", "{D2FC96B4-1957-4909-AA2F-DA173971639F}")
		Q_CLASSINFO("InterfaceID", "{FB298DC5-6AE0-4E86-92C8-DF06105797B4}")
		Q_CLASSINFO("EventsID", "{37FB2D8B-F98F-4352-8E69-251FBB87AA4F}")
		Q_CLASSINFO("RegisterObject", "yes")

public:
	OutPut_Class(QObject *parent=Q_NULLPTR);

	QString str_value = "Welcome to OutPut Class!";

	qint32 int_value = 114514;

	static QList<OutPut_Class*> list_object;
	~OutPut_Class();

	public slots:
	//���ⲿ���ú���
	void receive_from_progress(int value);


signals:
	//���͸��ⲿ����
	void send_to_progress(int value);
signals:
	//���ⲿ���̽��յ����źţ����͸���תվ
	void sig_receive_from_progress(int value);
};
