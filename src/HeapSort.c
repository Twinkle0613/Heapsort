#include "HeapSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *In this project, The algorithm of heapSort that used to design the function of heapSort in C language.
 
 *                                                heapSort(...)
 *  Arr[] = {12,23,13,14,21,1,23};
 *  
 *                  12                               1
 *                 /  \       makeHeap(...)        /  \    swapHeap(...)     ----------------------------------
 *               23   13           =>            14   12        =>          | 1 | 12 | 13 | 14 | 21 | 23 | 24 |
 *              / \   / \                       / \   / \                   ----------------------------------
 *            14  21 1  24                    23  21 13  24
 *
 * Main Function
 *  void heapSort(int Arr[],int newArr[],int arrSize);
 *      - to sort the data of array that typed by user.
 * Sub-Function:
 *
 *  int getParents(int value);  
 *      - to get the position of parent.
 *  int getRightchild(int value);
 *      - to get the postion of right child.
 *  int getLeftchild(int value);
 *      - to get the postion of left child.
 *  int idx(int value);
 *      - to add the value by one.
 *  int decByOne(int value);
 *      - to reduce the value by one.
 *  void swap(int* value1, int* value2);
 *      - to swap the value of value1 to the value of value2.
 *  void swapIfParentIsLarger(int Arr[],int index);
 *      - if the value of parent of current position is larger than value of current position, 
 *        value of parent will swap to value of current position.
 *  void makeHeap(int Arr[], int index, int size);
 *      - to arrange the data in tree by following the alogorithm of heapSort.
 *  void swapTopChToLastCh(int Arr[], int index, int size);
 *      - to swap the value from bottom position to top position.
 *  void swapHeap(int newArr[], int Arr[],int index,int size);
 *      - after makeHeap(...) in heapSort(...), the data of current array will swap to new array for sort the data.
 *
 *
 * Input:
 *  void heapSort(int Arr[],int newArr[],int arrSize);
 *  Arr - store the a group of data that typed by user.
 *  newArr - store the data that set by function.
 *  size - store the size of array.
 *
 *  getParents(int value):
 *  getRightchild(int value):
 *  getLeftchild(int value):
 *  idx(int value):
 *  decByOne(int value):
 *  value - store the value was set by the sub-function.
 *
 *  swap(int* value1, int* value2):
 *  value1 - store the first value that used for swap to second value.
 *  value2 - store the second value that used for swap to first value.
 *
 *  void swapIfParentIsLarger(int Arr[],int index):
 *  Arr - store the a group of data that typed by user.
 *  index - record the current postion in function.
 *
 *  void makeHeap(int Arr[], int index, int size):
 *  Arr - store the a group of data that typed by user.
 *  index - record the current postion in function.
 *  size - store the size of array.
 *
 *  void swapTopChToLastCh(int Arr[], int index, int size);
 *  Arr - store the a group of data that typed by user.
 *  index - record the current postion in function.
 *  size - store the size of array.
 *  
 *  void swapHeap(int newArr[], int Arr[],int index,int size);
 *  newArr - store the data that set by function.
 *  Arr - store the a group of data that typed by user.
 *  index - record the current postion in function.
 * 
 */

#define getArraySize(Arr)  (sizeof(Arr)/sizeof(Arr[0]))
#define self               (idex(index))
#define rightChild         (getRightchild(idx(index)))
#define leftChild          (getLeftchild(idx(index)))
#define Top 0
 
#define rchIsSmallerThanLch(Arr,index) (Arr[getRightchild(index+1)-1] < Arr[getLeftchild(index+1)-1])
#define swapIfRchIsSmaller(Arr,index,size) {                                                 \
 if( Arr[decByOne(rightChild)] < Arr[index] && decByOne(rightChild) < size)                  \
 {                                                                                           \
  swap(&Arr[decByOne(rightChild)],&Arr[index]);                                              \
 }                                                                                           \
}                                                  
#define swapIfLchIsSmaller(Arr,index,size) {                                                 \
 if( Arr[decByOne(leftChild)] < Arr[index] && decByOne(leftChild) < size)                    \
 {                                                                                           \
  swap(&Arr[decByOne(leftChild)],&Arr[index]);                                               \
 }                                                                                           \
}
                      
int getParents(int value){
  return value/2;
}

int getRightchild(int value){
  return (value*2)+1;
}

int getLeftchild(int value){
  return value*2;
}

int idx(int value){
  return value+1;
}

int decByOne(int value){
  return value-1;
}
 
void swap(int* value1, int* value2){
  int temp;
  temp = *value1;
  *value1 = *value2;
  *value2 = temp; 
}

int countArrSize(int* Arr[]){
  return (sizeof(Arr)/sizeof(Arr[0]));
}

void swapIfParentIsLarger(int Arr[],int index){
  int parent;
  int storeIndex = index;
   for( parent = getParents(idx(storeIndex)) ; parent > 0 && Arr[decByOne(parent)] > Arr[storeIndex] ; parent = getParents(parent) ){
        swap(&Arr[decByOne(parent)],&Arr[storeIndex]);
        storeIndex = decByOne(parent);
      }
}

void printArr(int Arr[], int size){
  int i;
  for(i = 0 ; i < size ; i ++){
    printf("(%d) ",Arr[i]);
  }
  printf("\n");
}

void makeHeap(int Arr[], int index, int size){
  if( idx(index) > size ){
   return ;
  }
  rchIsSmallerThanLch(Arr,index)?  \
  (swapIfRchIsSmaller(Arr,index,size)):(swapIfLchIsSmaller(Arr,index,size));
  swapIfParentIsLarger(Arr,index);
  makeHeap(Arr,++index,size);
}

 
void swapTopChToLastCh(int Arr[], int index, int size){
  if( (leftChild > size) && (rightChild > size)){
   return ;
  }
  if(rchIsSmallerThanLch(Arr,index) && rightChild <= size){
    swap(&Arr[decByOne(rightChild)],&Arr[index]);
    index = decByOne(rightChild);
  }else{
    swap(&Arr[decByOne(leftChild)],&Arr[index]);
    index = decByOne(leftChild);
  }
  swapTopChToLastCh(Arr,index,size);
}
  

void swapHeap(int newArr[], int Arr[],int index,int size){

  if( idx(index) > size ){
   return ;
  }
    swap(&Arr[Top],&newArr[index]);
    Arr[Top] = INT_MAX;
    swapTopChToLastCh(Arr,Top,size);
    swapHeap(newArr,Arr,++index,size);
}


void heapSort(int Arr[],int newArr[],int arrSize){
  makeHeap(Arr,Top,arrSize);
  swapHeap(newArr,Arr,Top,arrSize);
}