#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x) - (4*x) - 10
#define E 0.000001
main()
{
    float x1,x2,f0,f1,f2,x0,root;
    int i=1;

    printf("Enter two limits : ");
    scanf("%f%f",&x1,&x2);
    f1=f(x1);
    f2=f(x2);
    if(f1*f2>0)
    {
        printf("\nX1 & x2 do not bracket any root");
        goto stop;
    }
    while(i<100)
    {
        x0=(x1+x2)/2;
        f0=f(x0);
        if(f1*f0<0)
            x2=x0;
        else
        {
            x1=x0;
            f1=f0;
        }
        printf("\nIteration %d %f %f",i,x1,x2);
        if(fabs((x2-x1)/x2)<E)
        {
            root = (x1+x2)/2;
            printf("\nFinal iteration=%d    Root = %f",i+1,root);
            goto stop;
        }
        else
            i++;

    }
    stop:
    getch();
}
