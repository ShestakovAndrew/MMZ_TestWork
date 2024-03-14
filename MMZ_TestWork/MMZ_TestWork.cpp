#include "MMZ_TestWork.h"

MMZ_TestWork::MMZ_TestWork(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	m_fibMemorized.push_back(0);
	m_fibMemorized.push_back(1);

	connect(ui.FibSequenceSpinBox, &QSpinBox::valueChanged, this, 
		&MMZ_TestWork::FibCalculationUpdate
	);
}

MMZ_TestWork::~MMZ_TestWork()
{
}

int1024_t MMZ_TestWork::Fib(qint64 n)
{
	if ((n < 2) || (m_fibMemorized[n] != 0))
	{
		return m_fibMemorized[n];
	}
	else
	{
		m_fibMemorized[n] = Fib(n - 1) + Fib(n - 2);
		return m_fibMemorized[n];
	}
}

void MMZ_TestWork::FibCalculationUpdate() noexcept
{
	qint64 n = ui.FibSequenceSpinBox->value();

	while (m_fibMemorized.size() < n + 1)
	{
		m_fibMemorized.push_back(0);
	}

	ui.FibResultLabel->setText("Fib(" + QString::number(n) + "):");
	ui.FibTextBrowser->setText(QString::fromStdString(Fib(n).str()));
}

