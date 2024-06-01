/*
    Create a program to find the largest element of an array using pointers.
    int arr[] = {34, 12, 21, 54, 48);
    • Assign the first element of the array to a largest variable using pointer
    int largest = *arr
    • Run a for loop to access each element of the array.
    • Compare largest with each array element using pointer
    largest < *(arr + i)
    • If the largest variable is smaller than a element, assign the array value to largest
    largest = *(arr + i)
    */

#include <stdio.h>
  int main(){
        int arr[5] = {34, 12, 21, 54, 48};
        int largest = *arr;
        int smallest = *arr;
        for(int i = 1; i < 5; i++){
            if(largest < *(arr + i)){
                largest = *(arr + i);
            }else if(smallest > *(arr + i)){
                smallest = *(arr + i);
            }
        }
        printf("The largest element is: %d\n", largest); // The largest element is: 54
        printf("The smallest element is: %d\n", smallest);// The smallest element is : 12

            return 0;

  } // to run =>  gcc Project_15.c -o Project_15 && Project_15.exe