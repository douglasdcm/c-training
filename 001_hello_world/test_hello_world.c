#include "hello_world.h"
#include "../unity.h"

void setUp(){}
void tearDown(){}

void test_FunctionUnderTest_should_ReturnFive(void) {
    TEST_ASSERT_EQUAL_INT( 5, print_hw() );
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_FunctionUnderTest_should_ReturnFive);
    return UNITY_END();
}