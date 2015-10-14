#include "unity.h"
#include "HeapSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void setUp(void){}

void tearDown(void){}



void test_getParents(void){
  TEST_ASSERT_EQUAL(4,getParents(9));
  printf("No.1\n");
}

void test_getLeftchild(void){
   TEST_ASSERT_EQUAL(4,getLeftchild(2));
  printf("No.2\n");
}


void test_getRightchild(void){
  TEST_ASSERT_EQUAL(5,getRightchild(2));
  printf("No.3\n");
}

void test_swap(void){
  int a = 1;
  int b = 2;
  swap(&a,&b);
  TEST_ASSERT_EQUAL(1,b);
  TEST_ASSERT_EQUAL(2,a);

  printf("No.4\n");
}

void xtest_countArrSize(void){
  TEST_IGNORE_MESSAGE("Ignore: test_countArrSize");
  int arr[17];
  int size =  countArrSize(arr);
  TEST_ASSERT_EQUAL(17,size);
  printf("No.5\n");
  
}


void test_QueueArr(void){
  
  int Arr[] = {12,23,13,14,21,1};
  int expectArr[] = {1,14,12,23,21,13}; 
  int size = sizeof(Arr)/sizeof(0);

  // printf("Actual = ");
  // printArr(Arr,size);
  makeHeap(Arr,0,size);
  // printf("Expected = ");
  // printArr(Arr,size);
 TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,Arr,size);
  
  printf("No.6\n");
}

void test_QueueArr_given_15_size_of_array(void){
 
  int Arr[] = {12,23,13,14,21,3,56,1,34,5,89,76,11,233,0};
  int expectArr[] = {0,3,1,14,5,12,11,23,34,21,89,76,13,233,56}; 
  int size = sizeof(Arr)/sizeof(0);

  //printf("Actual = ");
  //printArr(Arr,size);
  makeHeap(Arr,0,size);
  //printf("Expected = ");
  //printArr(Arr,size);
   TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,Arr,size);
   printf("No.7\n");
  
}


void test_QueueArr_given_30_size_of_array(void){
 
  int Arr[] = {98,78,45,32,12,75,80,21,34,1444,566,23,22,11,55,66,77,88,99,16,24,33,43,233,17,27,38,2,1,0};
  int expectArr[] = {0,16,1,32,21,17,2,45,34,24,33,23,27,11,12,66,77,88,99,1444,78,566,43,233,75,98,38,22,80,55}; 
  int size = sizeof(Arr)/sizeof(0);
  makeHeap(Arr,0,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,Arr,size);
   printf("No.9\n");
  
}


void test_swapTopChToLastCh(void){
  
  int Arr[] = {12,23,13,14,21,1};
  int expectArr[] = {13,23,1,14,21,12}; 
  int size = sizeof(Arr)/sizeof(0);
  // printf("Actual = ");
  // printArr(Arr,size);
  swapTopChToLastCh(Arr,0,size);
  // printf("Expected = ");
  // printArr(Arr,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,Arr,size);
   printf("No.10\n");
  
}

void test_swapTopChToLastCh_given_15_size_of_array(void){
  
  int Arr[] = {12,23,13,14,21,3,56,1,4,02,89,76,11,233,0};
  int expectArr[] =  {13,23,3,14,21,11,56,1,4,02,89,76,12,233,0};
  int size = sizeof(Arr)/sizeof(0);
  // printf("Actual = ");
  // printArr(Arr, size);
  swapTopChToLastCh(Arr,0,size);
  // printf("Expected = ");
  // printArr(Arr, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,Arr,size);
   printf("No.11\n");
  
}

void  test_swapHeap(void){
  
  int Arr[] = {12,23,13,14,21,1};
  int expectArr[] = {1,14,12,23,21,13}; 
  int expectArr1[] = {1,12,13,14,21,23};
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];

  makeHeap(Arr,0,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,Arr,size);
  swapHeap(newArr,Arr,0,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr1,newArr,size);
  
   printf("No.12\n");
}


void test_swapHeap_given_15_size_of_array(void){
  
  int Arr[] = {12,23,13,14,21,3,56,1,34,5,89,76,11,233,0};
  int expectArr[] = {0,3,1,14,5,12,11,23,34,21,89,76,13,233,56}; 
  int expectArr1[] = {0,1,3,5,11,12,13,14,21,23,34,56,76,89,233}; 
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];

  makeHeap(Arr,0,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,Arr,size);
  swapHeap(newArr,Arr,0,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr1,newArr,size);
  printf("No.13\n");
}

void test_swapHeap_given_30_size_of_array(void){
  
  int Arr[] = {98,78,45,32,12,75,80,21,34,1444,566,23,22,11,55,66,77,88,99,16,24,33,43,233,17,27,38,2,1,0};
  int expectArr[] = {0,16,1,32,21,17,2,45,34,24,33,23,27,11,12,66,77,88,99,1444,78,566,43,233,75,98,38,22,80,55}; 
  int expectArr1[] = {0,1,2,11,12,16,17,21,22,23,24,27,32,33,34,38,43,45,55,66,75,77,78,80,88,98,99,233,566,1444}; 

  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];

  makeHeap(Arr,0,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,Arr,size);

  swapHeap(newArr,Arr,0,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr1,newArr,size);

   printf("No.14\n");
}



void test_heapSort(void){
  
  int Arr[] = {12,23,13,14,21,1};
  int expectArr[] = {1,12,13,14,21,23};
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];
  heapSort(Arr,newArr,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,newArr,size);
  printf("No.15\n");
}


void test_heapSort_given_15_size_of_array(void){
  
  int Arr[] = {12,23,13,14,21,3,56,1,34,5,89,76,11,233,0};
  int expectArr[] = {0,1,3,5,11,12,13,14,21,23,34,56,76,89,233}; 
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];
  heapSort(Arr,newArr,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,newArr,size);
  printf("No.16\n");
}

void test_heapSort_given_30_size_of_array(void){
  
  int Arr[] = {98,78,45,32,12,75,80,21,34,1444,566,23,22,11,55,66,77,88,99,16,24,33,43,233,17,27,38,2,1,0};
  int expectArr[] = {0,1,2,11,12,16,17,21,22,23,24,27,32,33,34,38,43,45,55,66,75,77,78,80,88,98,99,233,566,1444}; 
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];

  heapSort(Arr,newArr,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,newArr,size);
  printf("No.17\n");
  
}


void test_heapSort_given_15_size_of_array_that_contain_negative_value(void){
  
  int Arr[] = {12,23,13,-1,-21,-3,56,1,34,5,89,76,11,233,0};
  int expectArr[] = {-21,-3,-1,0,1,5,11,12,13,23,34,56,76,89,233}; 
  int size = sizeof(Arr)/sizeof(0);
  int newArr[size];
  //printf("Actual = ");
  //printArr(Arr, size);
  heapSort(Arr,newArr,size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expectArr,newArr,size);
  //printf("Expected = ");
  //printArr(newArr, size);
  printf("No.18\n");
}