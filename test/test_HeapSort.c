#include "unity.h"
#include "HeapSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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
  printArr(Arr, size);
  manageArr(Arr,0,size);
  printArr(Arr, size);
   printf("No.6\n");
}

void xtest_QueueArr_given_15_size_of_array(void){
 
  int Arr[] = {12,23,13,14,21,3,56,1,34,5,89,76,11,233,0};
  int size = sizeof(Arr)/sizeof(0);
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  manageArr(Arr,0,size);
  printArr(Arr, size);
   printf("No.7\n");
  
}

void xtest_QueueArr_given_15_size_of_array_contair_same_value(void){
 
  int Arr[] = {12,23,13,14,21,3,56,1,4,02,89,76,11,233,0};
  int size = sizeof(Arr)/sizeof(0);
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  manageArr(Arr,0,size);
  printArr(Arr, size);
   printf("No.8\n");
  
}

void xtest_QueueArr_given_30_size_of_array_contair_same_value(void){
 
  int Arr[] = {98,78,45,32,12,75,80,21,34,1444,566,23,22,11,55,66,77,88,99,16,24,33,43,233,17,27,38,2,1,0};
  int size = sizeof(Arr)/sizeof(0);
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  manageArr(Arr,0,size);
  printArr(Arr, size);
  
   printf("No.9\n");
  
}


void xtest_swapSelfandChild(void){
  
  int Arr[] = {12,23,13,14,21,1};
  int size = sizeof(Arr)/sizeof(0);
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  swapSelfandChild(Arr,0,size);
  printArr(Arr, size);
   printf("No.10\n");
  
}


void xtest_swapSelfandChild_given_15_size_of_array(void){
  
  int Arr[] = {12,23,13,14,21,3,56,1,4,02,89,76,11,233,0};
  int size = sizeof(Arr)/sizeof(0);
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  swapSelfandChild(Arr,0,size);
  printArr(Arr, size);
   printf("No.11\n");
  
}

void xtest_sortArr(void){
  
  int Arr[] = {12,23,13,14,21,1};
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  manageArr(Arr,0,size);
  printArr(Arr, size);
  sortArr(newArr,Arr,0,size);
  printArr(Arr, size);
  printArr(newArr, size);
   printf("No.12\n");
}


void xtest_sortArr_given_15_size_of_array(void){
  
  int Arr[] = {12,23,13,14,21,3,56,1,4,02,89,76,11,233,0};
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  manageArr(Arr,0,size);
  printArr(Arr, size);
  sortArr(newArr,Arr,0,size);
  printArr(Arr, size);
  printArr(newArr, size);
   printf("No.12\n");
}

void xtest_sortArr_given_30_size_of_array(void){
  
  int Arr[] = {98,78,45,32,12,75,80,21,34,1444,566,23,22,11,55,66,77,88,99,16,24,33,43,233,17,27,38,2,1,0};
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];
  printf("size = %d\n",size);
  int i;
  printArr(Arr, size);
  manageArr(Arr,0,size);
  printArr(Arr, size);
  sortArr(newArr,Arr,0,size);
  printArr(Arr, size);
  printArr(newArr, size);
   printf("No.12\n");
}



void test_heapSort(void){
  
  int Arr[] = {12,23,13,14,21,1};
  int size = sizeof(Arr)/sizeof(0);
  int newArr[6];
  heapSort(Arr,newArr,size);
  printArr(newArr, 6);
  
}