#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MMZ_TestWork.h"

class MMZ_TestWork : public QMainWindow
{
    Q_OBJECT

public:
    MMZ_TestWork(QWidget *parent = nullptr);
    ~MMZ_TestWork();

    uint64_t Fib(size_t n) noexcept;

private:
    Ui::MMZ_TestWorkClass ui;

    std::string m_fibResultLabelText;
    std::vector<uint64_t> m_fibMemorized;
};
