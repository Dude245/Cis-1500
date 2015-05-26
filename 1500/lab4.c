#include <stdio.h>
#include <math.h>
int main(void)
{
    int year;
    int a,b,c,d,e,k,p,q,m,n;
    scanf("%d",&year);
    a=(year % 19);
    b=(year % 4);
    c=(year % 7);
    k=(floor(year/100));
    p=(floor((13+(8*k))/25));
    q=(floor(k/4));
    m=((15-p+k-q)%30);
    n=((4+k-q)%7);
    d=(((19*a)+m)%30);
    e=(((2*b)+(4*c)+(6*d)+n)%7);
    if(d+e<10)
    {
	printf("March %d \n",d+e+22);
    }
    else if (d==29 & e==6)
    {
	printf("April 19th \n");
    }
    else if (d==28 & e==6 & a>10)
    {
	printf("April 18th \n");
    }
    else 
    {
	printf("April %d \n",d+e-9);
    }
    return 0;
}