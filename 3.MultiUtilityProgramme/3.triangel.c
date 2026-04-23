

#include<stdio.h>

int main(){



    float firstAngel, secondAngel, thirdAngel;


    printf("\n enter first angel\n");
    scanf("%f", &firstAngel);



    
 printf("\n enter second angel\n");
    scanf("%f", &secondAngel);






    thirdAngel = 180 - (firstAngel + secondAngel);


    printf("the third angel value is %.2f", thirdAngel);
    return 0;
}