#include<stdio.h>
#include"hellostatic.h"
#include"helloshared.h"

int main()
{
    printf("\nA simple Hello Program using AutoTools\n");
    hellostatic();
    helloshared();
    return 0;
}
