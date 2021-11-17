#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x) - x- 2  //example 6.5

#define E 0.001
main()
{
    float x1,x2,f0,f1,f2,x0,root;
    
    int i=1;

    printf("Enter two limits x1 & x2 : ");
    scanf("%f%f",&x1,&x2);
    f1=f(x1);
    f2=f(x2);
    if(f1*f2>0)
    {
        printf("\nX1 & x2 do not bracket any root");
        goto stop;
    }
    do
    {
         //false position formula
        // x0= x1-(f1*(x2-x1))/(f2-f1);
         x0 = x1- (f1*x2 -f1*x1)/(f2-f1);
      
        f0=f(x0);
   
        
        if(f1*f0<0){
            x2=x0;
            f2=x0;	
		}
        
        else
        {
            x1=x0;
            f1=f0;
        }
         i++;
     printf("\nIteration %d %f %f",i,x1,x2);
    }while(fabs((x2-x1)/x2)<E);
	
	 root = (x1+x2)/2;
     printf("\nFinal iteration=    Root = %f",root);
 
    stop:
    getch();
}
