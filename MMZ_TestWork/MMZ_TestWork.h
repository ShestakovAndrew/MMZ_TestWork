#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MMZ_TestWork.h"

#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

class MMZ_TestWork : public QMainWindow
{
    Q_OBJECT

public:
    MMZ_TestWork(QWidget *parent = nullptr);
    ~MMZ_TestWork();

    int1024_t FibNR(qint64 n);

    void FibCalculationUpdate();
private:
    Ui::MMZ_TestWorkClass ui;
};
