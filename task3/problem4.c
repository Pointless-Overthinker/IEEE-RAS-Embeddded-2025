#include <stdio.h>
int main() {
    int rows, cols; //defining the rows and coloumns for the input matrices (dimensions من الاخر)
    printf("please enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) { //check whether or not the dimensions are correct and abort if given invalid ones
        printf("Invalid dimensions.\n");
        return 1;
    }

   
    int mat1[rows][cols]; 
    int mat2[rows][cols]; //defining the matrices for both input and the output of the sum 
    int sum[rows][cols];

    printf("please enter elements of the first matrix:\n"); // asking for the first matrix and assigning it in its corresponding array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("please enter elements of the second matrix:\n"); //same thing for the second matrix 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nSum of the two matrices:\n");  //calculating the sum and assigning it then printing it 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
