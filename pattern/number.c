#include<stdio.h>
int main(){
    int rows,i,j;
    char ch = 'A';
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }

    return 0;        
}