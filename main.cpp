#include <stdio.h>
#include <math.h>
#include "functions.h"
int main()
{
print_hello();
printf("\n");
double a, b, c;
scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
double D = (b*b) - 4*a*c;
if(D >= 0)
{
 double x1 = (-b+sqrt(D))/(2*a);
 double x2 = (-b-sqrt(D))/(2*a);
 if(x1 == x2) {printf("%lf \n", x1);}
 else {printf("%lf \n", x1); printf("%lf \n", x2);}
}
else
{
	printf("No roots\n");
}
return 0;
}
