#include<stdio.h>

int main(){
    int rows,col;
    printf("Enter number of rows and column of matrix:");
    scanf("%d %d",&rows,&col);
    int matrix[rows][col] , transpose[col][rows];

    printf("Enter element of matrix:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Element of matrix are: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    //for transpose of matrix
    for(int i=0;i<col;i++){
        for(int j=0;j<rows;j++){
            transpose[i][j]=matrix[j][i];
        }        
    }

    printf("Transpose of matrix are: \n");
    for(int i=0;i<col;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;

}