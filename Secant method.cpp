#include <iostream>
using namespace std;

#define f(x) x*x - 4*x - 10

int main() {
  double x1,x2,x3,f1,f2;
  int i=0;
  cout<<"enter x1 x2 value : ";
  cin>>x1>>x2;
 
   
    while(i<=10){
       f1=f(x1);
       f2=f(x2);	
        x3 = x2 - (f2*(x2-x1))/(f2-f1);
    
    cout<<"\n Step-"<<i+1<<":"<<x3<<"\tx1:"<<x1<<"\tx2:"<<x2;
    x1=x2;
    x2=x3;
    cout<<"\n---------------------------------------------- ";
		
    i++;
    	
	}
 
    
    
  return 0;
}
