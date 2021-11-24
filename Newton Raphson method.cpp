#include <iostream>
using namespace std;

#define f(x)  x*x - 3*x + 2
#define df(x) 2*x - 3
#define e 0.001
int main() {
  double x1,x2,f1,f2;
  int i=0;
  cout<<"enter x1 value : ";
  cin>>x1;

    while(i<=100){
       f1=f(x1);
       f2=df(x1);	
       x2 = x1 - (f1/f2);
    
    cout<<"\n Step-"<<i+1<<": "<<x2<<"\tx1:"<<x1;
    x1=x2;
   
    cout<<"\n---------------------------------------------- ";
    //int intx1;
	//	if(intx1% 2 ==0){
	if (x1==1){
			break;
	}
		
		
    i++;
    	
	}
 
   
    
  return 0;
}
