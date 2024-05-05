#include "main.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_FunctionUnderTest_should_ReturnZero(void) {
    TEST_ASSERT_EQUAL_INT( 0, function() );
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_FunctionUnderTest_should_ReturnZero);
    return UNITY_END();
}