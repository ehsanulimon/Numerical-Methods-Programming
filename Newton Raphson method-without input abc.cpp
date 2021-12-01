#include <iostream>
#include<math.h>
using namespace std;

#define f(x)  x*x - 3*x + 2
#define df(x) 2*x - 3
#define e 0.001
int main() {
  double x1,x2,f1,f2,f0;
  int i=0;
  
  cout<<"enter x1 value : ";
  cin>>x1;
    do{
       f1=f(x1);
       f2=df(x1);	
       x2 = x1 - (f1/f2);
       f0 =f(x2);
    cout<<"\n Step-"<<i+1<<": "<<x2<<"\tx1:"<<x1;
    x1=x2;
    cout<<"\n---------------------------------------------- ";
		  i++;
	}while( fabs(f0)>e);
	  cout<<"root : "<<x2;

  return 0;
}
