#include<stdio.h>
int main(){
    int rows,col;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of column: ");
    scanf("%d",&col);

    int mat1[rows][col],mat2[rows][col],result[rows][col];

    printf("Enter element of first matrix:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter element of second matrix:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("First matrix is:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ",mat1[i][j]);            
        }
        printf("\n");
    } 

    printf("Second matrix is:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ",mat2[i][j]);            
        }
        printf("\n");
    } 

    //performing matrix addition
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The resultant matrix is:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ",result[i][j]);            
        }
        printf("\n");
    } 



    return 0;
}