/*
Program: Digit Identifier (Using if–else Statement)
Author: Aasher
Description: Takes a character input and checks whether it is a digit (0–9) or not using if–else.
*/
#include <stdio.h>

int main() 
{
    
char input;
printf("Enter any character:");
scanf("%c", &input);

if(input>='0' && input<='9')
printf("This character is a digit\n");

else
printf("This character is not a digit\n");

    return 0;
}