#ifndef CustomAssertion_H
#define CustomAssertion_H

#include "unity.h"
#include "Token.h"

#define TEST_ASSERT_EQUAL_ARRY
void customTestAssertEqualString(const char* ExpectedStr,char* actualStr,int lineNo ,char* msg,...);

#endif // CustomAssertion_H
