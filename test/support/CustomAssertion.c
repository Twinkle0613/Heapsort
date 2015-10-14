#include "CustomAssertion.h"
#include "Token.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>      
#include <stdlib.h>     
#include "OperatorChecker.h"
#include "unity.h"


 
void testAsserEqualOperatorToken(const char* str,OperatorToken* actual,int lineNo){
    UNITY_TEST_ASSERT_NOT_NULL(actual,lineNo,"The token should not be NULL!");
    if( TOKEN_OPERATOR_TYPE != actual->type){
      CUSTOM_TEST_FAIL(lineNo,"Expected %s was %s. The token type is not the same.",        \
                        getTokenTypeName(TOKEN_OPERATOR_TYPE),getTokenTypeName(actual->type)); 
    }
    UNITY_TEST_ASSERT_EQUAL_INT(strlen(str),actual->length,lineNo,"The length is not the same.");
    UNITY_TEST_ASSERT_EQUAL_STRING(str,actual->symbol,lineNo,"The operator is not the same");
 }

 
void testAssertEqualArray
    

    
    
    
    
    
    
    
    
    
    
    
    