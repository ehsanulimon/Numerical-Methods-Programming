#include <iostream>     
#include<math.h>        // In this example are solving   
#include<conio.h>       // 2x + y + z = 5     => x=(5-y-z)/2    =>(5 - y -  z)/ 2
                        // 3x + 5y + 2z = 15  => y=(15-3x-2z)/5  =>(15 - 3*x - 2*z)/ 5
using namespace std;    // 2x + y + 4z=8      => z=(8-2x-y)/4   => (8 - 2*x - y)/ 4 
                  
#define f1(x,y,z)   (d1 - (b1*y)-(c1*z))/a1   // a1x + b1y + c1z = d1        
#define f2(x,y,z)   (d2 - (a2*x) - (c2*z))/b2   // a2x + b2y + c2z = d2     
#define f3(x,y,z)   (d3 - (a3*x) - (b3*y))/c3  // a3x + b3y + c3z = d3 
#define e 0.0001                                       

int main() {                                         
  double x0=0, y0=0, z0=0, x1, y1, z1,xe,ye,ze;       
  double a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3;
  int i=0;
       cout<<"a1x + b1y + c1z = d1 eq. "<<"\ninput a1 , b1 ,c1 , d1 : ";
       scanf("%lf %lf %lf %lf",&a1,&b1,&c1,&d1);
       cout<<"\n a2x + b2y + c2z = d2  eq. "<<"\ninput a2 , b2 ,c2 , d2 : ";
       scanf("%lf %lf %lf %lf",&a2,&b2,&c2,&d2);
       cout<<"\n a3x + b3y + c3z = d3  eq. "<<"\ninput a3 , b3 ,c3 , d3 : ";
       scanf("%lf %lf %lf %lf",&a3,&b3,&c3,&d3);
      
    do{
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);
  
  xe=fabs(x0-x1);  // If x1/y1/z1 is subtracted from x0/y0/z0 and  
  ye=fabs(y0-y1);  // if the subtraction result is greater than
  ze=fabs(z0-z1);   //  the error(e) then the loop(do while loop) will continue. 
// The loop(do while loop) stops when the value of the subtraction is smaller than the error.
       cout<<"\n Step-"<<i+1<<": x1 = "<<x1<<" , y1 ="<<y1<<" , z1 = "<<z1<<endl;
       cout<<"\n---------------------------------------------------------------";
       	  
  x0 = x1; 
  y0 = y1;
  z0 = z1;
	i++;
	}while( xe>e  && ye>e  && ze>e);
	
	cout<< endl<<"result: x = "<< x1<<", y = "<< y1<<" and z = "<< z1;
getch();

  return 0;
}
