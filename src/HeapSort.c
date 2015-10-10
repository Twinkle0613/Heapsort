#include "HeapSort.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * In this project, the Finite State Machine(FSM) that used to design the logic for getToken(...) function
 * the Switch case that is a important method to bulid this project.
 *
 * Using the getToken(...) function to identify type of string, and create a new token. 
 * Using the peepToken(...) function to store a token that create by getToken function.
 * Using the createStringObject(...) functions to create a string object element. 
 * Using the stateTransition(...) functions to identify the type of first character then change the current state to next state.
 *
 *
 * Eg.
 *     getToken(...):
 *                   str = " Name     =    "Herry"    1993   "
 *                            |       |       |        |
 *                           |       |       |        |
 *                        idenTk   opTk    strTk   inTk
 *
 *    idenTk = Identifier Token
 *    opTk = Operator Token
 *    strTk = String Token
 *    inTk = Integer Token
 *
 *    createStringObject(...):
 *
 *                        -----------------------
 *   StringObject ------>|str = "1234"|Index = 0|
 *                       -----------------------
 *
 *
 *    stateTransition(...):
 *      
 *    strO->str = "123 1234"                  strO->str = "ASDSAS"
 *                 ^                                       ^
 *      currentState ---> integerState;            currentState ---> IdentifierState;
 *
 * Function:
 *
 *  Token *peepToken(StringObject *strO);
 *  Token *getToken(StringObject *strO);
 *  StringObject *createStringObject(char *ch);
 *  void stateTransition( StringObject* strO , TokenState *currentState, int* startColumn);
 *
 *  The all of TransitionForXXXXX function that used in the getToken(...) function.
 *  This function that will analyse the current character (strO->str[strO->index]) and then 
 *  change the currentState or define strO->type.
 *  
 *  void TransitionForInt(Token**newToken, TokenState* currentState , StringObject* strO );
 *  void TransitionForIni(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForOp(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForTwinAssign(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForStr(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForIden(Token** StrTk, TokenState* currentState , StringObject* strO);
 *  void TransitionForDecPointState(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForFloat(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForExpon(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForNegPosExpon(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForHex(Token** newToken, TokenState* currentState , StringObject* strO);
 *  void TransitionForOct(Token** newToken, TokenState* currentState , StringObject* strO);
 *
 * Input:
 *
 *  TransitionForXXXXX(...):
 *    newToken -  store the token that create by creatXXXXXToken function
 *    currentState - record the the current state in state machine. 
 *    strO - store the string was typed by user in strO->str
 *         - record the transiton times in strO->index 
 *  
 *  peepToken(...):
 *    strO - store the string was typed by user in strO->str
 *         - record the transiton times in strO->index 
 *
 *  getToken(...):
 *    strO - store the string was typed by user in strO->str
 *         - record the transiton times in strO->index 
 *
 *  createStringObject(...):
 *      ch - store the string from user key in.
 * 
 *  stateTransition(...):
 *    strO - store the string was typed by user in strO->str.
 *         - record the position of character in strO->index.
 *         - record the start point in strO->startIndex.
 *         - store the type of newToken when a newToken was created.
 *         - store a token when a newToken was created.
 *
 *  currentState - record the the current state in getToken(...) function. 
 *   startColumn - record the start point for counter in getToken(...) function.
 *
 *
 * Return:
 *    peepToken(...):
 *    Return a token that is storage for getToken(...)
 *    getToken(...):
 *    Return a new token that has identify the type of token.
 *    createStringObject(...):
 *       return string object element that has contain the string that typed by user. 
 *    stateTransition(...):
 *        currentState that will be update and change to other state or remain.
 */

// int countArr(int Arr[]){
   // return (int)sizeof(Arr);
// }

// void printSizeOf(int intArray[]){
  // printf("intArray[0] = %d\n",intArray[0]);
  // printf("intArray[1] = %d\n",intArray[1]);
  // printf("sizeof of parameter: %d\n", (int) sizeof(intArray));

// }
#define isNULL(x)                  (x == '\0')
#define rightSmallerleft(y,x)       (y[getRightchild(x+1)-1] < y[getLeftchild(x+1)-1])
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

void swap(int* value1, int* value2){
  int temp;
  temp = *value1;
  *value1 = *value2;
  *value2 = temp;
}

void HeapSort(int Arr[]){   
  
  
}
int countArrSize(int* Arr[]){
  
  return (sizeof(Arr)/sizeof(Arr[0]));
  
}

void printArr(int Arr[], int size){
  int i;
  // for(i = 0 ; i < size ; i ++){
    // printf("[%d] ",i+1);
  // }
       // printf("\n");

  for(i = 0 ; i < size ; i ++){
    printf("(%d) ",Arr[i]);
  }
      printf("\n");
}
void QueueArr(int Arr[], int index, int size){
  int storeIndex;
  int Parent;
  printf("----------------------\n");
  printArr(Arr, size);
  
  if( index+1 > size ){
   return ;
  }
  printf("Arr[%d],RealPosition = %d\n",index,index+1);
  if(Arr[getRightchild(index+1)-1] < Arr[getLeftchild(index+1)-1] ){
    if( Arr[getRightchild(index+1)-1] < Arr[index] && getLeftchild(index+1)-1 < size){
       printf("self(%d) change to childR[%d](%d)\n",Arr[index],getRightchild(index+1),Arr[getRightchild(index+1)-1]);
      swap(&Arr[getRightchild(index+1)-1],&Arr[index]);
      //storeIndex = index;
       swapForParentLargerChild(Arr,index);
      // for( Parent = getParents(storeIndex+1) ; Parent > 0 && Arr[Parent-1] > Arr[storeIndex] ; Parent = getParents(Parent)){
        // printf("self(%d) change to Parent[%d](%d)\n",Arr[storeIndex],Parent,Arr[Parent-1]);
        // swap(&Arr[Parent-1],&Arr[storeIndex]);
        // storeIndex = Parent-1;
      // }
    }   
    
  }else {
    if( Arr[getLeftchild(index+1) - 1] < Arr[index] && getLeftchild(index+1)-1 < size){
       printf("self[%d](%d) change to childL[%d](%d)\n",index+1,Arr[index],getLeftchild(index+1),Arr[getLeftchild(index+1)-1]);
      swap(&Arr[getLeftchild(index+1) - 1],&Arr[index]);
     // storeIndex = index;
      swapForParentLargerChild(Arr,index);
      // for( Parent = getParents(storeIndex+1) ; Parent > 0 && Arr[Parent-1] > Arr[storeIndex] ; Parent = getParents(Parent) ){
        // printf("self[%d](%d) change to Parent[%d](%d)\n",storeIndex,Arr[storeIndex],Parent,Arr[Parent-1]);
        // swap(&Arr[Parent-1],&Arr[storeIndex]);
        // storeIndex = Parent-1;
      // }
    
    }
  }

  QueueArr(Arr,++index,size);
}

void swapForParentLargerChild(int Arr[],int index){
  int parent;
  int storeIndex = index;
   for( parent = getParents(storeIndex+1) ; parent > 0 && Arr[parent-1] > Arr[storeIndex] ; parent = getParents(parent) ){
        printf("self[%d](%d) change to Parent[%d](%d)\n",storeIndex,Arr[storeIndex],parent,Arr[parent-1]);
        swap(&Arr[parent-1],&Arr[storeIndex]);
        storeIndex = parent-1;
      }
}
