#include <stdio.h>
#include <math.h>
int main()
 {
    float a,b,c;
    float discriminant,rp,ip,r1,r2;
    printf("Enter coefficients a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if (discriminant>0)
     {
        r1 = (-b+sqrt(discriminant))/(2*a);
        r2 = (-b-sqrt(discriminant))/(2*a);
        printf("Real and different roots:\n");
        printf("Root 1= %.4f\n",r1);
        printf("Root 2= %.4f\n",r2);
    }
    else if(discriminant == 0)
    {
        r1 = -b/(2 * a);
        printf("Real and equal roots:\n");
        printf("Root = %.4f\n",r1);
    }
    else
    {
        rp =-b/(2 * a);
        ip =sqrt(-discriminant)/(2 * a);
        printf("Complex roots:\n");
        printf("Root 1 = %.2f + %.2fi\n",rp,ip);
        printf("Root 2 = %.2f - %.2fi\n",rp,ip);
    }
    return 0;
}
