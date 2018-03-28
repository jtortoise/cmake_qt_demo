//
// Created by jtortoise on 2018/3/24.
//

#ifndef CMAKE_QT_MOCCLASS_H
#define CMAKE_QT_MOCCLASS_H

#include "QObject"
#include "QTimer"
#include "QString"

class MocClass : public QObject
{
    Q_OBJECT
public:
    explicit MocClass(QObject *parent = 0);

signals:
    void mysignal(const QString &signalInfo);

public slots:
    void myslot();

private:
    QTimer *m_timer;

};


#endif //CMAKE_QT_MOCCLASS_H
