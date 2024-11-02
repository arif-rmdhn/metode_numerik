#include<stdio.h>
#include<conio.h>
#include<math.h>
float function_val(float);

int main()
{
	float a,b,c,err,temp,fa,fb,fc;
	printf("\nMasukkan nilai error:\t");
	scanf("%f",&err);
	do{
		printf("\n\tbatas atas a=\t");
		scanf("%f",&a);
		printf("\n\tbatas bawah b=\t");
		scanf("%f",&b);
		fa=function_val(a);
		fb=function_val(b);
	}while((fa*fb)>0);
	c=0;
	do{
		temp=c;
		fa=function_val(a);
		fb=function_val(b);
		c=a-(fa*(b-a))/(fb-fa);
		fc=function_val(c);
		if((fa*fc)<0)
			b=c;
		else
			a=c;
	}while(fabs(temp-c)>err);
	printf("\n\nNilai akarnya adalah:\t%f",c);
	getch();
	return 0;
}
float function_val(float x)
{
	return x*x-5*x-6;
}