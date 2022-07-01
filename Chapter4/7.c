#include <stdio.h>
#include <float.h>
int main()
{
	float f = 1.0/3.0;
	double d = 1.0/3.0;
	printf("%.4f \n%.4f \n", f, d);
	printf("%.12f \n%.12f \n", f, d);
	printf("%.16f \n%.16f \n", f, d);
	printf("%f \n%f \n", FLT_DIG, DBL_DIG);

	return 0;
}
