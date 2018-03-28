//
// Created by jtortoise on 2018/3/24.
//

#include "MocClass.h"


MocClass::MocClass(QObject *parent)
    :QObject(parent)
{
    m_timer = new QTimer(this);
    m_timer->setInterval(1000);

    connect(m_timer, SIGNAL(timeout()), this, SLOT(myslot()));
    m_timer->start();
}

void MocClass::myslot()
{
    emit mysignal("Moc Class Info");
}