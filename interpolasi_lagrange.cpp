#include<stdio.h>
main(){
    int n,i,h,X,j,k;
    int x[100],y[100],L[100];
    printf("Mauskkan nilai n= ",n);
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        x[i]=i;
        y[i]=i;
        (x[i],y[i]);
        printf("(%d,%d) \n",x[i],y[i]);
    }

    printf("Masukkan nilai X = ",X);
    scanf("%d", &X);

    for (i = 1; i<=n; i++)
    {
        int Pembilang=1;
        for (j=1; j<=n; j++)
        {
            if (i==j) {
                continue;
            } else {
                Pembilang = Pembilang*(X-x[j]);
            }
            
        }
        int Penyebut=1;
        for (j=1; j<=n; j++)
        {
            if (i==j)
            {
                continue;
            } else
            {
                Penyebut = Penyebut*(x[i]-x[j]);
            }
        }
        L[i] = Pembilang / Penyebut;
    }
    int Y=0;
    for (i = 1; i <=n; i++)
    {
        Y=Y+y[i]*L[i];
        // continue;
    } printf("Y = %d",Y);
}