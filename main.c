#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,y;
    int m,a,s,p21,p22,p31,p32,sin1,sin2;
    float d,c1,c2,s1,s2,tan1,tan2;

    printf("\t calculator \n ");
    printf("Enter First number x  = ");
    scanf("%d",&x);
    printf("Enter Second number y  = ");
    scanf("%d",&y);

    d=x/y;                  //Division
    m=x*y;                  //Multiplication
    a=x+y;                  //Addition
    s=x-y;                  //Subtract

    p21=pow(x,2);           //Root x
    p22=pow(y,2);           //Root y

    p31=pow(x,3);           //Square root x
    p32=pow(y,3);           //Square root y

    s1=sqrt(x);            //sqrt x
    s2=sqrt(y);            //sqrt y

    c1=cos(x);             //cos x
    c2=cos(y);             //cos y

    s1= sin(x);            //sin x
    s2= sin(y);            //sin y

    tan1=tan(x);           //tan x
    tan2=tan(y);           //tan y

    printf("\n   Division   x/y  = %f \n",d);
    printf("Multiplication x*y = %d \n",m);
    printf("   Addition    x+y = %d \n",a);
    printf("   Subtract    x-y = %d \n",s);
    printf("    Root        x  = %d \n",p21);
    printf("    Root        y  = %d \n",p22);
    printf("    sqrt(x)        = %f \n",s1);
    printf("    sqrt(y)        = %f \n",s2);
    printf("  Square root   x  = %d \n",p31);
    printf("  Square root   y  = %d \n",p32);
    printf("    cos(x)         = %f \n",c1);
    printf("    cos(y)         = %f \n",c2);
    printf("    sin(x)         = %f \n",sin1);
    printf("    sin(y)         = %f \n",sin2);
    printf("    tan(x)         = %f \n",tan1);
    printf("    tan(y)         = %f \n",tan2);
}
