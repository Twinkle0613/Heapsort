#include "unity.h"
#include "HeapSort.h"
#include <stdio.h>
#include <stdlib.h>

void setUp(void){}

void tearDown(void){}

void xtest_getParents(void){
  printf("getParents = %d\n",getParents(9));
  printf("No.1\n");
}

void xtest_getLeftchild(void){
  printf("getLeftchild = %d\n",getLeftchild(2));
  printf("No.2\n");
}


void xtest_getRightchild(void){
  printf("getRightchild = %d\n",getRightchild(2));
  printf("No.3\n");
}

void xtest_swap(void){
  int a = 1;
  int b = 2;
  printf("a = %d , b = %d\n",a,b);
  swap(&a,&b);
  printf("a = %d , b = %d\n",a,b);
  printf("No.4\n");
}

void xtest_countArrSize(void){
  
  int arr[17];
  printf("Array Size = %d\n",countArrSize(arr));
  printf("No.5\n");
  
}


void xtest_QueueArr(void){
 
  int Arr[] = {12,23,13,14,21,1};
  int size = sizeof(Arr)/sizeof(0);
  printf("size = %d\n",size);
  int i;
  for( i = 0 ; i < size ; i ++){
    printf("[%d] ",Arr[i]);
  }
    printf("\n");
  QueueArr(Arr,0,size);
  for( i = 0 ; i < size ; i ++){
    printf("[%d] ",Arr[i]);
  }
   printf("No.6\n");
}

void xtest_QueueArr_given_15_size_of_array(void){
 
  int Arr[] = {12,23,13,14,21,3,56,1,34,5,89,76,11,233,0};
  int size = sizeof(Arr)/sizeof(0);
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  QueueArr(Arr,0,size);
  printArr(Arr, size);
   printf("No.7\n");
  
}

void test_QueueArr_given_15_size_of_array_contair_same_value(void){
 
  int Arr[] = {12,23,13,14,21,3,56,1,03,02,89,76,11,233,0};
  int size = sizeof(Arr)/sizeof(0);
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  QueueArr(Arr,0,size);
  printArr(Arr, size);
   printf("No.8\n");
  
}