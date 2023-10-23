#include <stdio.h>
#include "calc.h"

int main() {

	calc<int,int> a(1, 5);
	calc<float, float> b(1.0f, 5.0f);
	calc<double, double> c(1.0, 5.0);
	calc<int, float> d(1, 5.0f);
	calc<int, double> e(1, 5.0);
	calc<float, double> f(1.0f, 5.0);

	printf("%d\n", a.Min());
	printf("%f\n", b.Min());
	printf("%lf\n", c.Min());
	printf("%d\f", d.Min());
	printf("%d\n", e.Min());
	printf("%f\n", f.Min());

	return 0;
}