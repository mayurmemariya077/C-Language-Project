


#include<stdio.h>

int main()
{

float baseSalary , grossSalary , HRA , DA , TA ;



baseSalary = 200;

HRA = 10;

DA = 8; 

TA = 5;

float HRApercentage = 200 * HRA / 100;
float DApercentage = 200 * HRA / 100;
float TApercentage = 200 * HRA / 100;




grossSalary = baseSalary + HRApercentage + DApercentage + TApercentage;


printf("\ngrossSalary %.2f" , grossSalary);



    return 0;
}