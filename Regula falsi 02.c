
#include<stdio.h>
#include<conio.h>
#include<math.h>
//2x = ex – 3

#define f(x)  -2*x + pow(E,x) - 3   //x=1 ; f(x) -0.2817 //x=2 f(x) 0.389
#define E 0.0001
//Enter two initial guesses: 2 3

int main()
{	
	 float x0, x1, x2, f0, f1, f2;
	 int step = 1;
	 up:
	 printf("\nEnter two limits ::\n");
	 scanf("%f%f", &x0, &x1);	 
	 f0 = f(x0);
	 f1 = f(x1);
	 printf("%f  %f \n", &f0,&f1);
	 if( f0*f1 > 0.0)	 
	 { printf("X1 & x2 do not bracket any root.\n");
		  goto up;
	 }
	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 do
	 {
		  x2 = x0 - (x0-x1) * f0/(f0-f1);
		  f2 = f(x2);
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);
		
		  if(f0*f2 < 0)
		  {
			   x1 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   x0 = x2;
			   f0 = f2;
		  }
		  step = step + 1;	
	 }while(fabs(f2)>E);
	 printf("\nRoot is: %f", x2);
	 goto up;
	 getch();
	 return 0;
}
