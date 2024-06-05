#include <stdio.h>
#include <stdlib.h>


int main(){
    // int val = 32;
    // int* ptr = &val;
    // printf("%d", *ptr);

    int n = 4;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Memory cannot be allocated");
        return 0;
    }
    printf("Enter input values:\n");
    for (int i = 0; i < n; ++i){
        scanf("%d", ptr + i);
    }
    printf("Input values:\n");
    for (int i = 0; i < n; ++i){
        scanf("%d\n", *(ptr + i));
    }
    free(ptr);

     n = 6;

  ptr = realloc (ptr, n * sizeof(int));

  printf("Newly Allocated Memory\n");
  for(int i = 0; i < n; ++i) {
      printf("%p\n", ptr + i);
  }
    return 0;

} // to run =>  gcc Memory.c -o Memory && Memory.exe