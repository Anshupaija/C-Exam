#include<stdio.h>
int main(){
    float c,f,temp;
    printf("\nEnter Temparature in Celsius:");
    scanf("%f",&c);
    f=c*1.8+32;
    printf("\nConverted Temparature in:%.2f",f);
    return 0;
}