#include<stdio.h>

int main(){
    int array[5] = {1,2,3,4,5};
    int m = 3;
    int i,j;

    //find the index of the element m
    int index = -1;
    for(i=0;i<5;i++){
        if(array[i] == m){
            index = i;
            break;
        }
    }

    //if the element is found,shift the elements to the left
    if(index != -1){
        for(j=index;j<4;j++){
            array[j] = array[j+1];
        }
    }

    //print the updated array
    for(i=0;i<4;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}