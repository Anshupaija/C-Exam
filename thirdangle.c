#include<stdio.h>
int main(){
    int first_angle,second_angle,third_angle;
    //input first angle
    printf("Enter First Angle:\n ");
    scanf("%d",&first_angle);
    //input second angle
    printf("Enter Second Angle:\n ");
    scanf("%d",&second_angle);
    //finding third angle
    third_angle = 180 - (first_angle+second_angle);
    printf("Third Angle is: %d",third_angle);

    return 0;

}