#include<stdio.h>

int creatMatrix(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter element at arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int printMatrix(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int rows, cols;
    printf("enter rows: ");
    scanf("%d", &rows);
    printf("enter cols: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    creatMatrix(rows, cols, arr);
    printMatrix(rows, cols, arr);
    return 0;
}