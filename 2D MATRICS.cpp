#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[2][2], i, j, max;
    printf("Enter any 2*2 matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat[i][j]);
    }
    max = mat[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max<mat[i][j])
                max = mat[i][j];
        }
    }
    printf("\nLargest Element = %d", max);
    getch();
    return 0;
}
