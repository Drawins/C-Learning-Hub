
/*
Author:Darwins Omondi
Date:6/13/2024
ReNo:BSE-01-0054/2024
*/
#include<stdio.h>
int main(){

float principle,rate,time,SimpleInterest;

printf("Enter the Principle:\t");
scanf("%f",&principle);

printf("Enter the rate:\t");
scanf("%f",&rate);

printf("Enter the time:\t");
scanf("%f",&time);

SimpleInterest = principle*rate*time;
printf("Your Simple Interest is:%f",SimpleInterest);
    return 0;
}