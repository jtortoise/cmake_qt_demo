//
// Created by jtortoise on 2018/3/24.
//

#ifndef CMAKE_QT_MAINWINDOW_H
#define CMAKE_QT_MAINWINDOW_H

#include "QMainWindow"

namespace Ui
{
    class Form;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent=NULL);
    ~MainWindow();

public slots:
    void showInfo(const QString &info);

private:
    Ui::Form *m_ui;

};


#endif //CMAKE_QT_MAINWINDOW_H
