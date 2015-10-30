/*LAB 1 Q4 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 19th September 2014

Purpose: An array having 10 elements of type int called lab1_array. Populate the array elements individually prompting the user each time for an integer value. Output the values to the user after all 10 are inputted.

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lab1_array[10];
    int i, sum;

    for(i=0; i<10;i++){
    printf("Enter value:");
    scanf("%d",&lab1_array[i]);

   }

    for(i=0; i<10;i++){

    printf("lab1_array[%d] = %d \n",i,lab1_array[i]);

    }
    return 0;
}

