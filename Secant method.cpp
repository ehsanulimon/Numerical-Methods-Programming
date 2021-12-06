#include <iostream>
#include  <math.h>
#include<stdlib.h>
using namespace std;
#define e 0.000001
//#define f(x) x*x - 4*x - 10
#define f(x) a*(x*x) + b*x + c
//x1=4,x2=2
//x2-4x-10; a=1,b=4,c=10
int main() {
  double x1,x2,x3,f1,f2,f3,a,b,c;
  int i=0,n;
    up:
   printf(" f(x) ax^2-bx-c \n enter a b c values ");
     scanf("\t %lf \t %lf \t %lf",&a,&b,&c);
  cout<<"enter x1 x2 value : ";
  cin>>x1>>x2;

    do{
    	f1=f(x1);
       f2=f(x2);
        x3 = x2 - (f2*(x2-x1))/(f2-f1);
       f3=f(x3);
     cout<<"\n Step-"<<i+1<<":"<<x3<<"\tx1:"<<x1<<"\tx2:"<<x2;
      
	x1=x2;
	
    x2=x3;
    
    cout<<"\n------------------------------------------------------------ ";
		if(f1==f2){
			 cout<<"Mathematical Error!!!.\n try again >>";
			 goto up;
		}
    i++;
    	
	}while(fabs(f3)>e);

    cout<< endl<<"Root is: "<< x3;
    
    
  return 0;
}
