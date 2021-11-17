#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

#define E 0.001
#define f(x) a*x*x-b*x+c

int main()
{
    int i=1,a,b,c;
    float x0,x1,x2,f0,f1,f2,e=1;
    cout<< "enter the initial x1 and x2:";
    cin>>x1>>x2;
    cout<< "enter the initial a b c:";
    cin>>a>>b>>c;
  
    do
    {
        f1=f(x1);
        f2=f(x2);
        if(f1*f2>0)
        {
            cout<< "x1 and x2 doesnot bracket the root";
            exit(0);
        }
        else
        {
            x0=(x1-(f1*(x2-x1))/(f2-f1)); //working formula
            f0=f(x0);
            e=fabs((x2-x1)/x2);
            if(f1*f0<0)
            {
                x2=x0;
            }
            else
            {
                x1=x0;
            }
            i++;
        }
   
    printf("\nIteration %d %f %f",i,x1,x2);
    }while(e>=E && f1!=0 && i!=100);  
    cout<< "\nthe root of the equation="<<x0;
    return 0;
}
