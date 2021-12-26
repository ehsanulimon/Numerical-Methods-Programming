///Curve fitting of a straight line of the form y = a + bx
#include<stdio.h>
#include<math.h>
int main(){
    int ax[20], ay[20], i, n;
    int sum_x = 0, sum_xy = 0, sum_x2 = 0, sum_y = 0 ;
    float a , b;
    printf("Enter no of records: ");
    scanf("%d", &n);
    printf("Enter Data:\nX\n ");
    for(i = 0; i < n; i++){
        scanf("%d", &ax[i]);
    }
     printf("\nY\n");
    for(i = 0; i < n; i++){
        scanf("%d", &ay[i]);
    }
    for(i = 0; i < n; i++){
        sum_x += ax[i];
        sum_y += ay[i];
        sum_xy += ax[i] * ay[i];
        sum_x2 += pow(ax[i], 2);
    }
    printf(" sum_x = %d \n",sum_x);
    printf(" sum_y = %d \n",sum_y);
    printf(" sum_xy = %d \n",sum_xy);
    printf(" sum_x2 = %d \n",sum_x2);
    //(sum)xy = a(sum)x + b(sum)x^2
    b = (n*sum_xy - sum_x*sum_y)/(n*sum_x2 - pow(sum_x,2));  
    //(sum)y = n*a + b(sum)x 
    a = (sum_y - b*sum_x)/n;
    printf("\na = %.2f    b = %.2f", a, b);
    printf("\nThe Equation is %.2f  +  %.2f X\n\n", a, b); //y = a + bx
    return 0;
}
