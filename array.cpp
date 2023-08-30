#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[20], arr2[30], size1, size2, i, k, merge[200];
    printf("Enter   1 array Size: ");
    scanf("%d", &size1);
    printf("Enter Array  Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter  2 array Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\n the merge array");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
    getch();
    return 0;
}
