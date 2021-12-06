#include <iostream>
#include<math.h>
using namespace std;
#define f(x)  a *(x*x)  + b*x + c  //a=1,b=3,c=2
#define df(x) a*2*x + b
#define e 0.0000001
int main() {
  double x1,x2,f1,f2,f0;
  int i=1,a,b,c;

   cout<<"\n enter a b c ";
   cin>>a>>b>>c;
  cout<<"\nenter x1 initial value : ";
  cin>>x1;   //x1=0
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
