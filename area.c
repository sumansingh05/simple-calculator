#include<stdio.h>
#define PI 3.14

float area(float r){
    return PI*r*r;
}

int main(){
    printf("%f",area(3.5));

    return 0;
}
