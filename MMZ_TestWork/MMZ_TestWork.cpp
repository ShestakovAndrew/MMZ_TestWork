#include "MMZ_TestWork.h"

MMZ_TestWork::MMZ_TestWork(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    ui.FibSequenceSpinBox->setValue(0);
}

MMZ_TestWork::~MMZ_TestWork()
{
}

uint64_t MMZ_TestWork::Fib(uint64_t n) noexcept
{
	if (n == 1 || n == 2)
	{
		m_fibMemorized[n] = -2;
		return m_fibMemorized[n];
	}

	if ((m_fibMemorized[n] != 0) || (n == 0))
	{
		return m_fibMemorized[n];
	}
	else
	{
		m_fibMemorized[n] = Fib(n - 1) + Fib(n - 2);
		return m_fibMemorized[n];
	}
}

