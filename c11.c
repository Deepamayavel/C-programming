#include <stdio.h>
int main()
{
    double x, a, b, f;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    a = (x * x * x) - (2 * x * x) + x - 6.3;
    b = (x * x) + (0.05 * x) + 3.14;
    f = a / b;
    printf("f(x) = %.5lf\n", f);
    return 0;
}
