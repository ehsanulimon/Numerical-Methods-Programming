//Gauss Elimination Method C++ code
#include<stdio.h>>
#include<iostream>


	using namespace std;
int main()
{      int N;
       cin>>N;
	float Matrix[100][100],x[100];	// Matrix = Augumented Matrix [A:d]
	float temp,s;
	int i,j,k;	//variables for loops
   cout<<"Enter Elements of "<<N<<" Rows & "<<N+1<<" Columns\n";
   for(i=0; i<N; i++)  //input Matrix for loop.
	{
		cout<<"\tEnter Row  "<<i+1<<" & Press Enter\n";
		for(j=0; j<N+1; j++)
		cin>>Matrix[i][j];   	//input values of Matrix.
	}
	
	
    for(j=1; j<=N; j++) /* loop for the generation of upper triangular matrix*/
    {
        for(i=1; i<=N; i++)
        {
        	 if(i>j)
		         {  temp=Matrix[i][j]/Matrix[j][j]; 
                    for(k=1; k<=N+1; k++)
                     {
				     Matrix[i][k]=Matrix[i][k]-temp*Matrix[j][k];
                     }
                } 
        }
    }
    
    x[N]=Matrix[N][N+1]/Matrix[N][N];  //x3 = a[3][4]/a[3][3] //z= 9/2 
    cout<<"\n x3 "<<x[N]<<endl;
    
    
    /* this loop is for backward substitution*/
    for(i=N-1; i>=1; i--)
    {
         s=0;
        for(j=i+1; j<=N; j++)
        {
            s=s+Matrix[i][j]*x[j]; // sum=a[2][3] x3
        }
        x[i]=(Matrix[i][N+1]-s)/Matrix[i][i];  //x1 =(a[1][4] - ( a[1][2]x2 + a[1][3]x3))/a[1][1]
    }
    
    printf("\nThe solution is: \n");
    for(i=1; i<=N; i++)
    {
        printf("\nx%d=%f\t",i,x[i]); /* x1, x2, x3 are the required solutions*/
    }
	
	}
