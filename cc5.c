#include <stdio.h>
int main() {
    int num1,num2, max_num;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    max_num = (num1 > num2) ? num1:num2;
    printf("The biggest number is: %d\n", max_num);
    return 0;
}
