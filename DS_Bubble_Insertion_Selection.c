#include <stdio.h>
void bubble(int a[], int n);
void insert(int a[], int n);
void selection(int arr[], int n);
void printArr(int a[], int n);
int main()
{
    int i, j, temp;
    int a[] = {5,4,3,2,1};
    int n = sizeof(a) / sizeof(a[0]);
    bubble(a, n);
    printf("\n");
    insert(a, n);
    printf("\n");
    selection(a, n);
    return 0;
}
void bubble(int a[], int n) // function to implement bubble sort
{
    int i, j, temp, count = 0;
    int k; 
    for (i = 0; i < n; i++)
    { 
        for (j = i + 1; j < n; j++)
        {
            count++;
            k = 0;
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                k = 1;
            }

            if( k == 0){
                break;
            }
        }
    }
    printf("\nThe number of comparisons for Bubble sort is : %d \n", count);
    printf("The sorted array from bubble sort is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void selection(int arr[], int n)
{
    int i, j, small, comp = 0, swap = 0;

    for (i = 0; i < n - 1; i++) // One by one move boundary of unsorted subarray
    {
        small = i; // minimum element in unsorted array
        for (j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[small])
            {
                comp = comp + 1; 
                small = j;
            }
            comp++;
            // Swap the minimum element with the first element
            
            int temp = arr[small];
            arr[small] = arr[i];
            arr[i] = temp; 
        }
        swap++;
        
    }
    printf("The number of swaps for Selection sort is : %d \n", swap);
    printf("The number of comparisons for Selection sort is : %d \n", comp);
    printf("The sorted array from Selection sort is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insert( int arr[] , int n){
    int i , j ,k, temp , count = 0;
    for( i = 0 ; i< n;  i++){
        temp = arr[i];
        j = i-1; 
        while( j>= 0 && temp <= arr[j]){
            count = count+1;
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = temp ;
    }

    printf("The number of comparison in Insertion sort are: %d\n", count);
    printf("The sorted array is : \n");
    for( k = 0 ;k < n; k++){
        printf("%d ", arr[k]);
    }
}
