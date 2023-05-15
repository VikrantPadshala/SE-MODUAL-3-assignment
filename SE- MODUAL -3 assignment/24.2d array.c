#include <stdio.h>

int main() 
{
    int m, n, p, q, i, j, k;
    int a[10][10], b[10][10], sum[10][10], diff[10][10], prod[10][10];
    
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of first matrix: \n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &p, &q);
    
    if(n != p) 
	{
        printf("Error: Matrices cannot be multiplied!\n");
        return 0;
    }
    
    printf("Enter the elements of second matrix: \n");
    for(i = 0; i < p; i++) 
	{
        for(j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Addition of two matrices
    printf("Addition of two matrices: \n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    // Subtraction of two matrices
    printf("Subtraction of two matrices: \n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    
    // Multiplication of two matrices
    printf("Multiplication of two matrices: \n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < q; j++) 
		{
            prod[i][j] = 0;
            for(k = 0; k < n; k++) 
			{
                prod[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

