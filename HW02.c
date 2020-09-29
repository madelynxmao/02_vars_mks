/*
Madelyn Mao
Systems Level Programming
HW02 -- Variables are the Spice of Life
2020-09-28
*/

//the bits may vary

#include <stdio.h>

int main(){

    //char --> 8 bits
    char a1 = '3';
    printf("char number: %c\n",a1);

    char b1 = 'L';
    printf("char letter: %c\n",b1);

    //short --> 16 bits
    short a2 = 2309;
    printf("short: %hi\n",a2);

    //int --> 16 bits
    int a3 = -3;
    printf("int: %i\n",a3);

    //unsigned int --> 16 bits
    unsigned int a4 = -5;
    printf("unsigned int: %d\n",a4);
    
    //signed long --> 32 bits
    signed long a5 = -435;
    printf("signed long: %li\n",a5);

    //long long --> 64
    long long a6 = -12345;
    printf("long long: %lli\n",a6);

    //float --> 32 bits
    float a7 = 23435;  //23435.000000
    printf("float: %f\n",a7);

    //double --> 64 bits
    double a8 = 23456.3;
    printf("double: %la\n", a8);

    return 0;

}
