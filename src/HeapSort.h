#ifndef HeapSort_H
#define HeapSort_H


int getParents(int value);
int getRightchild(int value);
int getLeftchild(int value);
int idx(int value);
int decByOne(int value);
void swap(int* value1, int* value2);
void swapIfParentIsLarger(int Arr[],int index);
void makeHeap(int Arr[], int index, int size);
void swapTopChToLastCh(int Arr[], int index, int size);
void swapHeap(int newArr[], int Arr[],int index,int size);
void heapSort(int Arr[],int newArr[],int arrSize);
#endif // HeapSort_H
