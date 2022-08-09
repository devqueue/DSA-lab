#include <stdio.h>


int main(){
    int var = 20;
    int *ip = &var;
    printf("Address of var varianle: %x\n", &var)
    printf("Address stored im the ip variable: %x\n", *ip);
    printf("value of ipvariable %d\n",*ip)
}