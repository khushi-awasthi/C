// Max and min number in array----------
// #include<stdio.h>
// int main(){
//     int a[50],i,max,min,size;
//     printf("Enter the size of array");
//     scanf("%d",&size);
//     printf("Enter elements");
//     for(i=0;i<size;i++)
//     scanf("%d",&a[i]);
//     max=a[0];
//     for(i=0;i<size;i++)
//     if(a[i]>=max)
//     max=a[i];
//     printf("\nmaximum number= %d",max); 
//     min=a[0];
//     for(i=0;i<size;i++)
//     if(a[i]<=min)
//     min=a[i];
//     printf("\nminimum number=%d",min);
// }
#include <stdio.h>

void reverseArrayInPlace(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArrayInPlace(arr, size);

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
