/* Printing Matrix in spiral   */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k=0,l=0,row,col;
    int last_row ;
    int last_col,a[100][100] ;
    printf("Enter number of rows");

    scanf("%d",&row);
    printf("Enter number of columns");
    scanf("%d",&col);

    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d \n", a[i][j]);
        }
    }

    last_row = row-1;
    last_col = col-1;

    while(k<=last_col && l<=last_col)
    {
        for(i=l;i<=last_col;i++)
            printf("%d ",a[k][i]);
        k++;
        for(i=k;i<=last_row;i++)
            printf("%d ",a[i][last_col]);
        last_col--;

        if(k<=last_row)
        {
            for(i=last_col;i>=l;i--)
                printf("%d ",a[last_row][i]);
            last_row--;

        }
        if(l<=last_col)
        {
            for(i=last_row;i>=k;i--)
                printf("%d ",a[i][l]);
            l++;
        }

    }
    return 0;
}
