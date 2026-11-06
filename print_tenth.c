/**
* @file print_tenth.c
*
* @brief Main source code for Print Tenth progrm.
*
* This file contains the main entry point and the implementation
* of the Print_Tenth function that iterates from 10 to 51 and 
* prints a message every 10th iteration (10, 20, 30, 40, 50)
* and a different message following the 10th iteration (11, 21, 31, 41, 51).
*
* @author  Abraham santiago
*/

#include <stdio.h>

void Print_Tenth();

int main()
{
    Print_Tenth();
    return 0;
}

void Print_Tenth()
{
    int x = 0;
    int y = 0;
    int tenth = 0;
    for(int i=1; i<=5; i++)
    {
        tenth = x + 10;
        x = tenth;
        y = tenth + 1;
        printf("Index %d: Every 10th iteration.\n", x);
        printf("Index %d: Following the 10th iteration.\n", y);
    }
}