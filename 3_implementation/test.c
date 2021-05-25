#include "config.h"
#include "New_customer.h"
#include "Old_customer.h"
#include "unity.h"
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


void test_cal(void);
void test_type(void);
int main()
{   UNITY_BEGIN();
    RUN_TEST(test_cal);
    RUN_TEST(test_type);
    return UNITY_END();
}
void test_type(void)
{
    TEST_ASSERT_EQUAL(0,types_loan(5));
    TEST_ASSERT_EQUAL(0,types_loan(12));
    TEST_ASSERT_EQUAL(5,types_loan(1));
    TEST_ASSERT_EQUAL(8,types_loan(2));
    TEST_ASSERT_EQUAL(7,types_loan(3));
}

void test_cal(void) {
TEST_ASSERT_EQUAL(0,calculation(100,10,10));
TEST_ASSERT_EQUAL(0,calculation(5000,2,10));
TEST_ASSERT_EQUAL(0,calculation(10000,10,5));
TEST_ASSERT_EQUAL(0,calculation(20000,6,5));

}
