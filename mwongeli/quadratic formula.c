/*Quadratic formula
 created by Lucy mwongeli
 on 17 july 2022
 C99 compiler*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    float root1,root2;
    float root_part,denom;
    printf("enter values of a,b and c!\n");
    scanf("%f%f%f",&a,&b,&c);
    root_part = sqrt(b*b-4*a*c);
    denom   =2*a;
    root1 =(-b+root_part)/denom;
    root2 =(-b-root_part)/denom;
    printf("root1 = %\nroot2 =%f",root1,root2);

    return 0;
}
