#include <stdio.h>
#include <stdlib.h>

int main(){
  int x1 = 0; 
  double mod = 0;
  double average = 0;
  int flag;
  int i;
  int arr[10]; 
  for (i = 0; i<10; i++) {
    printf("Enter value = ", i);
    scanf("%d", &arr[i]); 
  }
  printf("Array: ");
  for ( i = 0; i < 10; i++){
    printf("%d  ", arr[i]);
    }
  
  for ( i = 0; i < 10; i++){
    average += arr[i];
  }
  average = average/10;
  printf("\nAverage: %lf\n", average);
  for ( i = 0; i < 10; i++){
    if (arr[i] > average) 
    x1++;
  }
  printf("Number of elements which are more then average: %d\n", x1);
  for ( i = 0; i < 10; i++){
    if (arr[i] < 0) {
      flag = i;
      break;
    }
  }
    for ( i = flag + 1; i < 10; i++) 
    mod += abs(arr[i]);
    printf("Sum of moduls: %lf\n", mod);
    return 0;
}