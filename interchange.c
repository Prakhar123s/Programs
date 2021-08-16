#include <stdio.h>

void Array_Swap(int *array , int n)
{ 
    int i=0,temp=0;

    for(i=0 ; i<n/2 ; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
}

int main()
{
    int array[30] = {0};
    
    int i=0 ,n=0;
    
    printf("\nEnter the number of elements for the array : ");
    scanf("%d",&n);
   
    printf("\nEnter the elements for array_1..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("array[%d] : ",i);
        scanf("%d",&array[i]);
    }
    
    Array_Swap(array , n);

    printf("\nThe array after swap is..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\narray[%d] : %d",i,array[i]);
    }
    
    return 0;
}