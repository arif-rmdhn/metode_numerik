#include <stdio.h>
#include <math.h>

float f(float x){
    return x*x - 5*x - 6;
}

int main()
{
float h,x,sigma = 0,a,b,I;
int r,n;

printf("Input a: ");
scanf("%f",&a);
printf("Input b: ");
scanf("%f",&b);
printf("Input n: ");
scanf("%d",&n);

h = (b-a)/n;
x=a;
I=f(a) + f(b);

for (r = 1; r <=n-1; r++)
{
    x=x+h;
    if (r%3==0)
    {
        sigma = sigma+2*f(x);
    } else{
        sigma=sigma+3*f(x);
    }
}
I=(I+sigma)*3*h/8;

printf("Hasil dari integrasi numerik: %f",I);

}


