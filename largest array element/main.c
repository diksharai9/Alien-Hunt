#include <stdio.h>

int largest(int arr[], int n);

int main() {
    int n,i,large;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for (i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }

    large =  largest(arr,  n);
    printf("%d is the largest element in the array ",large);
}
// } Driver Code Ends


// C function to find maximum in arr[] of size n
int largest(int arr[], int n) {
    int i;

    // Initialize maximum element
    int max = arr[0];

    // Traverse array elements from second and
    // compare every element with current max
    for (i = 1; i < n; i++){
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
