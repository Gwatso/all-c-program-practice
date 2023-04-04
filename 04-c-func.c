#include <stdio.h>
/**
 * 4th classification
 * No args; with return value
 */
 double func (void)
{
	return 3.142;
}
int main()
{
	double x = func();
	printf("%lf\n",x);
	return 0;
}

