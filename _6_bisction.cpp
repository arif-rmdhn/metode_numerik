#include<stdio.h>
#include<conio.h>
double f(double x)
{ 
    return x*x - 5*x - 6;
}
double calc(double a,double b)
{
   if(f(a)>0 && f(b)>0 || f(a)<0 && f(b)<0)
    {
        printf("Tidak ada akar");
        return 0.0;
    }
    if(f(a)==0)
    {
        printf("a adalah akar %f",a);
        return 0.0;
    }
    else if(f(b)==0)
    {
        printf("b adalah akar %f",b);
        return 0.0;
    }
    double c=a;
    while((b-a)>=0.01)
    {
        
        c=(a+b)/2.0;
        if(f(c)==0.0)
        {
            break;
        }
        else if(f(c)*f(a)<0)
        {
            b=c;
        }
        else{
            a=c;
        }
    }
    return c;
}
int main()
{   
    double a,b;
    printf("Masukkan nilai a: ");
    scanf("%lf",&a);
    printf("Masukkan nilai b: ");
    scanf("%lf",&b);
    double x =calc(a,b);
    printf("Nilai akar adalah:%lf", x);
    return 0;
}