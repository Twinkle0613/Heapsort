#include "HeapSort.h"
#include "unity.h"




void setUp(void){}



void tearDown(void){}







void test_getParents(void){

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((getParents(9))), (((void *)0)), (_U_UINT)13, UNITY_DISPLAY_STYLE_INT);

  printf("No.1\n");

}



void test_getLeftchild(void){

   UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((getLeftchild(2))), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

  printf("No.2\n");

}





void test_getRightchild(void){

  UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((getRightchild(2))), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

  printf("No.3\n");

}



void test_swap(void){

  int a = 1;

  int b = 2;

  swap(&a,&b);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((b)), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((a)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);



  printf("No.4\n");

}



void xtest_countArrSize(void){

  UnityIgnore( ("Ignore: test_countArrSize"), (_U_UINT)39);;

  int arr[17];

  int size = countArrSize(arr);

  UnityAssertEqualNumber((_U_SINT)((17)), (_U_SINT)((size)), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_INT);

  printf("No.5\n");



}





void test_QueueArr(void){



  int Arr[] = {12,23,13,14,21,1};

  int expectArr[] = {1,14,12,23,21,13};

  int size = sizeof(Arr)/sizeof(0);







  makeHeap(Arr,0,size);





 UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(Arr), (_UU32)(size), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);



  printf("No.6\n");

}



void test_QueueArr_given_15_size_of_array(void){



  int Arr[] = {12,23,13,14,21,3,56,1,34,5,89,76,11,233,0};

  int expectArr[] = {0,3,1,14,5,12,11,23,34,21,89,76,13,233,56};

  int size = sizeof(Arr)/sizeof(0);







  makeHeap(Arr,0,size);





   UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(Arr), (_UU32)(size), (((void *)0)), (_U_UINT)75, UNITY_DISPLAY_STYLE_INT);

   printf("No.7\n");



}





void test_QueueArr_given_30_size_of_array(void){



  int Arr[] = {98,78,45,32,12,75,80,21,34,1444,566,23,22,11,55,66,77,88,99,16,24,33,43,233,17,27,38,2,1,0};

  int expectArr[] = {0,16,1,32,21,17,2,45,34,24,33,23,27,11,12,66,77,88,99,1444,78,566,43,233,75,98,38,22,80,55};

  int size = sizeof(Arr)/sizeof(0);

  makeHeap(Arr,0,size);

  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(Arr), (_UU32)(size), (((void *)0)), (_U_UINT)87, UNITY_DISPLAY_STYLE_INT);

   printf("No.9\n");



}





void test_swapTopChToLastCh(void){



  int Arr[] = {12,23,13,14,21,1};

  int expectArr[] = {13,23,1,14,21,12};

  int size = sizeof(Arr)/sizeof(0);





  swapTopChToLastCh(Arr,0,size);





  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(Arr), (_UU32)(size), (((void *)0)), (_U_UINT)103, UNITY_DISPLAY_STYLE_INT);

   printf("No.10\n");



}



void test_swapTopChToLastCh_given_15_size_of_array(void){



  int Arr[] = {12,23,13,14,21,3,56,1,4,02,89,76,11,233,0};

  int expectArr[] = {13,23,3,14,21,11,56,1,4,02,89,76,12,233,0};

  int size = sizeof(Arr)/sizeof(0);





  swapTopChToLastCh(Arr,0,size);





  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(Arr), (_UU32)(size), (((void *)0)), (_U_UINT)118, UNITY_DISPLAY_STYLE_INT);

   printf("No.11\n");



}



void test_swapHeap(void){



  int Arr[] = {12,23,13,14,21,1};

  int expectArr[] = {1,14,12,23,21,13};

  int expectArr1[] = {1,12,13,14,21,23};

  int size = sizeof(Arr)/sizeof(0);

  int newArr[size];



  makeHeap(Arr,0,size);

  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(Arr), (_UU32)(size), (((void *)0)), (_U_UINT)132, UNITY_DISPLAY_STYLE_INT);

  swapHeap(newArr,Arr,0,size);

  UnityAssertEqualIntArray(( const void*)(expectArr1), ( const void*)(newArr), (_UU32)(size), (((void *)0)), (_U_UINT)134, UNITY_DISPLAY_STYLE_INT);



   printf("No.12\n");

}





void test_swapHeap_given_15_size_of_array(void){



  int Arr[] = {12,23,13,14,21,3,56,1,34,5,89,76,11,233,0};

  int expectArr[] = {0,3,1,14,5,12,11,23,34,21,89,76,13,233,56};

  int expectArr1[] = {0,1,3,5,11,12,13,14,21,23,34,56,76,89,233};

  int size = sizeof(Arr)/sizeof(0);

  int newArr[size];



  makeHeap(Arr,0,size);

  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(Arr), (_UU32)(size), (((void *)0)), (_U_UINT)149, UNITY_DISPLAY_STYLE_INT);

  swapHeap(newArr,Arr,0,size);

  UnityAssertEqualIntArray(( const void*)(expectArr1), ( const void*)(newArr), (_UU32)(size), (((void *)0)), (_U_UINT)151, UNITY_DISPLAY_STYLE_INT);

  printf("No.13\n");

}



void test_swapHeap_given_30_size_of_array(void){



  int Arr[] = {98,78,45,32,12,75,80,21,34,1444,566,23,22,11,55,66,77,88,99,16,24,33,43,233,17,27,38,2,1,0};

  int expectArr[] = {0,16,1,32,21,17,2,45,34,24,33,23,27,11,12,66,77,88,99,1444,78,566,43,233,75,98,38,22,80,55};

  int expectArr1[] = {0,1,2,11,12,16,17,21,22,23,24,27,32,33,34,38,43,45,55,66,75,77,78,80,88,98,99,233,566,1444};



  int size = sizeof(Arr)/sizeof(0);

  int newArr[size];



  makeHeap(Arr,0,size);

  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(Arr), (_UU32)(size), (((void *)0)), (_U_UINT)165, UNITY_DISPLAY_STYLE_INT);



  swapHeap(newArr,Arr,0,size);

  UnityAssertEqualIntArray(( const void*)(expectArr1), ( const void*)(newArr), (_UU32)(size), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_INT);



   printf("No.14\n");

}







void test_heapSort(void){



  int Arr[] = {12,23,13,14,21,1};

  int expectArr[] = {1,12,13,14,21,23};

  int size = sizeof(Arr)/sizeof(0);

  int newArr[size];

  heapSort(Arr,newArr,size);

  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(newArr), (_UU32)(size), (((void *)0)), (_U_UINT)182, UNITY_DISPLAY_STYLE_INT);

  printf("No.15\n");

}





void test_heapSort_given_15_size_of_array(void){



  int Arr[] = {12,23,13,14,21,3,56,1,34,5,89,76,11,233,0};

  int expectArr[] = {0,1,3,5,11,12,13,14,21,23,34,56,76,89,233};

  int size = sizeof(Arr)/sizeof(0);

  int newArr[size];

  heapSort(Arr,newArr,size);

  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(newArr), (_UU32)(size), (((void *)0)), (_U_UINT)194, UNITY_DISPLAY_STYLE_INT);

  printf("No.16\n");

}



void test_heapSort_given_30_size_of_array(void){



  int Arr[] = {98,78,45,32,12,75,80,21,34,1444,566,23,22,11,55,66,77,88,99,16,24,33,43,233,17,27,38,2,1,0};

  int expectArr[] = {0,1,2,11,12,16,17,21,22,23,24,27,32,33,34,38,43,45,55,66,75,77,78,80,88,98,99,233,566,1444};

  int size = sizeof(Arr)/sizeof(0);

  int newArr[size];



  heapSort(Arr,newArr,size);

  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(newArr), (_UU32)(size), (((void *)0)), (_U_UINT)206, UNITY_DISPLAY_STYLE_INT);

  printf("No.17\n");



}





void test_heapSort_given_15_size_of_array_that_contain_negative_value(void){



  int Arr[] = {12,23,13,-1,-21,-3,56,1,34,5,89,76,11,233,0};

  int expectArr[] = {-21,-3,-1,0,1,5,11,12,13,23,34,56,76,89,233};

  int size = sizeof(Arr)/sizeof(0);

  int newArr[size];





  heapSort(Arr,newArr,size);

  UnityAssertEqualIntArray(( const void*)(expectArr), ( const void*)(newArr), (_UU32)(size), (((void *)0)), (_U_UINT)221, UNITY_DISPLAY_STYLE_INT);





  printf("No.18\n");

}
