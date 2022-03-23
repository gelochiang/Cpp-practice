#include "Time.h"

int main()
{
	Time t1;
	Time t2(1);
	Time t3(1, 2);
	Time t4(1, 2, 3);

	t1.print();
	t2.print();
	t3.print();
	t4.print();

	return 0;
}