// #include <stdio.h>
// int RecursiveLS(int arr[], int value, int index, int n)
// {
//     int pos = 0;
 
//     if(index >= n)
//     {
//         return 0;
//     }
 
//     else if (arr[index] == value)
//     {
//         pos = index + 1;
//         return pos;
//     }
 
//     else
//     {
//         return RecursiveLS(arr, value, index+1, n);
//     }
//     return pos;
// }
 
// int main()
// {
//     int n, value, pos, m = 0, arr[100];
//     printf("Enter the total elements in the array  ");
//     scanf("%d", &n);
 
//     printf("Enter the array elements\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
 
//     printf("Enter the element to search  ");
//     scanf("%d", &value);
 
//     pos =  RecursiveLS(arr, value, 0, n);
//     if (pos != 0)
//     {
//         printf("Element found at pos %d ", pos);
//     }
//     else
//     {
//         printf("Element not found");
//     }
//     return 0;
// }

#include <stdio.h>
int recursiveBinarySearch(int array[], int start_index, int end_index, int element){
   if (end_index >= start_index){
      int middle = (start_index + end_index)/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] > element)
         return recursiveBinarySearch(array, start_index, middle-1, element);
      return recursiveBinarySearch(array, middle+1, end_index, element);
   }
//    return -1;
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 9;
   int found_index = recursiveBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}