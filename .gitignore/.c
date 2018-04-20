#include <stdio.h>
#include <math.h>
double fact(int n)
{
	int i=1;
	double m=1;
	for(i=1;i<=n;i++)
		m*=i;
	return m;

}
double cal(double e)
{
	int j=1;
	double s=0;

	while(abs(1.0/fact(j))>=e)
	{
		s+=(1/fact(j));
		j++;

	}
	return s;
}
void main()
{
	double x;
	double m;
	scanf("%lf",&x);
	m=cal(x);
	printf("%lf",&m);

}
