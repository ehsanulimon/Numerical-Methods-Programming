#include <iostream>     
#include<math.h>
#include<conio.h>

using namespace std;                    // In this example we are solving   
#define f1(x,y,z)  (5 - y -  z)/ 2     // 2x + y + z = 5      //x=(5-y-z)/2     //(5 - y -  z)/ 2   
#define f2(x,y,z)  (15 - 3*x - 2*z)/ 5 // 3x + 5y + 2z = 15   //y=(15-3x-2z)/5  //(15 - 3*x - 2*z)/ 5
#define f3(x,y,z)   (8 - 2*x - y)/ 4   // 2x + y + 4z=8       //z=(8-2x-y)/4    //(8 - 2*x - y)/ 4 
#define e 0.0001                                       

int main() {
  double x0=0, y0=0, z0=0, x1, y1, z1,xe,ye,ze;
  int i=0;
  
      
    do{
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  
  xe=fabs(x0-x1);  // If x1/y1/z1 is subtracted from x0/y0/z0 and  
  ye=fabs(y0-y1);  // if the subtraction result is greater than
  ze=fabs(z0-z1);   //  the error(e) then the loop(do while loop) will continue. 
// The loop(do while loop) stops when the value of the subtraction is smaller than the error.
       cout<<"\n Step-"<<i+1<<": x1 = "<<x1<<" , y1 ="<<y1<<" , z1 = "<<z1<<endl;
       cout<<"\n---------------------------------------------------------------- ";
       	  
  x0 = x1; 
  y0 = y1;
  z0 = z1;
	i++;
	}while( xe>e  && ye>e  && ze>e);
	
	cout<< endl<<"result: x = "<< x1<<", y = "<< y1<<" and z = "<< z1;
getch();

  return 0;
}
