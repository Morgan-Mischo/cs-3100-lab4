#include<stdio.h>   
#include<stdlib.h>

int main () {
    int *ptr = malloc(sizeof(int)*100); 
    ptr[100] = 0; 
}