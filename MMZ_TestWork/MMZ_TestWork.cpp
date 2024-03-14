#include "MMZ_TestWork.h"

MMZ_TestWork::MMZ_TestWork(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	connect(ui.FibSequenceSpinBox, &QSpinBox::valueChanged, this, 
		&MMZ_TestWork::FibCalculationUpdate
	);
}

MMZ_TestWork::~MMZ_TestWork()
{
}

int1024_t MMZ_TestWork::FibNR(qint64 n)
{
	int1024_t first = 0;
	int1024_t second = 1;
	qint64 counter = 2;

	while (counter < n)
	{
		int1024_t temp = second;
		second += first;
		first = temp;
		++counter;
	}

	if (n == 0) return 0;

	return first + second;
}

void MMZ_TestWork::FibCalculationUpdate()
{
	qint64 n = ui.FibSequenceSpinBox->value();

	ui.FibResultLabel->setText("Fib(" + QString::number(n) + "):");
	ui.FibTextBrowser->setText(QString::fromStdString(FibNR(n).str()));
}

