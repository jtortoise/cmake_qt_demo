//
// Created by jtortoise on 2018/3/24.
//

#include "MainWindow.h"
#include "ui_cmake_test_form.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), m_ui(new Ui::Form)
{
    m_ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::showInfo(const QString &info)
{
    m_ui->textBrowser->append(info);
}