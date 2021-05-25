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

void new_customer_age(void);
void new_customer_annual_income(void);
void test_type(void);
void PAN_validation(void);
void Adhar_validation(void);
void loan_amt_check(void);
void before_tenure_test(void);
void test_cal(void);
void old_customer_test(void);

int main()
{   
    UNITY_BEGIN();
    
    RUN_TEST(new_customer_age);
    RUN_TEST(new_customer_annual_income);
    RUN_TEST(test_type);
    RUN_TEST(PAN_validation);
    RUN_TEST(Adhar_validation);
    RUN_TEST(loan_amt_check);
    RUN_TEST(before_tenure_test);
    RUN_TEST(test_cal);
    RUN_TEST(old_customer_test);
    
    return UNITY_END();
}

void test_type(void)
{
    TEST_ASSERT_EQUAL(0,types_loan(5));
    TEST_ASSERT_EQUAL(0,types_loan(12));
    TEST_ASSERT_EQUAL(5,types_loan(1));
    TEST_ASSERT_EQUAL(8,types_loan(2));
    TEST_ASSERT_EQUAL(7,types_loan(3));
    TEST_ASSERT_EQUAL(0,types_loan(0));
    TEST_ASSERT_EQUAL(0,types_loan(87));
}

void new_customer_age(void)
{
    long values[3];

    //sample pass case
    values[0] = 25;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_GREATER_THAN(0,new_customer_validation(values));
    
    values[0] = 19;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_EQUAL(0,new_customer_validation(values));

    values[0] = 20;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_EQUAL(0,new_customer_validation(values));

    values[0] = 21;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_GREATER_THAN(0,new_customer_validation(values));

    values[0] = 64;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_GREATER_THAN(0,new_customer_validation(values));

    values[0] = 65;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_EQUAL(0,new_customer_validation(values));

    values[0] = 66;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_EQUAL(0,new_customer_validation(values));

    values[0] = 34;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_GREATER_THAN(0,new_customer_validation(values));

    values[0] = 59;
    values[1] = 600000;
    values[2] = 50000;
    TEST_ASSERT_GREATER_THAN(0,new_customer_validation(values));

}

void new_customer_annual_income(void)
{
    long values[3];

    values[0] = 23;
    values[1] = 299999;
    values[2] = 50000;
    TEST_ASSERT_EQUAL(0,new_customer_validation(values));

    values[0] = 62;
    values[1] = 300000;
    values[2] = 50000;
    TEST_ASSERT_EQUAL(0,new_customer_validation(values));

    values[0] = 52;
    values[1] = 300001;
    values[2] = 50000;
    TEST_ASSERT_GREATER_THAN(0,new_customer_validation(values));

    values[0] = 44;
    values[1] = 9546854;
    values[2] = 50000;
    TEST_ASSERT_GREATER_THAN(0,new_customer_validation(values));

}

void PAN_validation(void)
{
    char adhar[13] = "123456789987";

    //Fail cases:
    char PAN[15] = "1234567890";
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"asdfghjklm");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"ASDFGHJKLM");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"12345asfd1");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"12345ASDF0");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"1A1daffz68Sgd");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"123ASc");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"1ASDF1234F");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"BHGFD54785");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"ASDaD1237F");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));
    
    strcpy(PAN,"ASDEW8457f");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,adhar));

    //Pass Case:
    
    strcpy(PAN,"ASDDF9876J");
    TEST_ASSERT_EQUAL(1,PAN_and_Adhar_validation(PAN,adhar));

    strcpy(PAN,"MJGFS1248L");
    TEST_ASSERT_EQUAL(1,PAN_and_Adhar_validation(PAN,adhar));
    
    strcpy(PAN,"MEQPL8520T");
    TEST_ASSERT_EQUAL(1,PAN_and_Adhar_validation(PAN,adhar));
}

void Adhar_validation(void)
{
    char PAN[15] = "ERTYU7654G";
    char Adhar[15] = "ASDFGHJKLOIU";
    
    //Fail Cases:

    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"asdfghjkloiu");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"ASVTaVkjhafs");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"766JDAMadoj1");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"a74156842325");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"98794561325L");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"4576s54786s2");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"14578");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"78945612378942");
    TEST_ASSERT_EQUAL(0,PAN_and_Adhar_validation(PAN,Adhar));

    //Pass Cases:
    strcpy(Adhar,"789456123852");
    TEST_ASSERT_EQUAL(1,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"112255778866");
    TEST_ASSERT_EQUAL(1,PAN_and_Adhar_validation(PAN,Adhar));

    strcpy(Adhar,"995468211445");
    TEST_ASSERT_EQUAL(1,PAN_and_Adhar_validation(PAN,Adhar));
}

void loan_amt_check(void)
{
    TEST_ASSERT_EQUAL(0,loan_amount_validation(0));
    TEST_ASSERT_EQUAL(1,loan_amount_validation(25000));
    TEST_ASSERT_EQUAL(1,loan_amount_validation(150000));
    TEST_ASSERT_EQUAL(0,loan_amount_validation('a'));
    TEST_ASSERT_EQUAL(0,loan_amount_validation(1500));
    TEST_ASSERT_EQUAL(0,loan_amount_validation(24999));

}

void before_tenure_test(void)
{
    TEST_ASSERT_EQUAL(1,Before_tenure(15000,3,2,'y'));
    TEST_ASSERT_EQUAL(1,Before_tenure(15000,3,2,'Y'));

    TEST_ASSERT_EQUAL(0,Before_tenure(1500560,3,2,'n'));
    TEST_ASSERT_EQUAL(0,Before_tenure(15000,3,2,'N'));
    TEST_ASSERT_EQUAL(0,Before_tenure(15000,3,2,'#'));
    TEST_ASSERT_EQUAL(0,Before_tenure(15000,3,2,'a'));
    TEST_ASSERT_EQUAL(0,Before_tenure(15000,3,2,'9'));
}

void test_cal(void)
{
    TEST_ASSERT_EQUAL(68.75,calculation(1500, 5,2));
    TEST_ASSERT_GREATER_THAN(0,calculation(25014, 6, 7));
    TEST_ASSERT_EQUAL(0,calculation(15000, 0,2));
    TEST_ASSERT_EQUAL(0,calculation(15006, 12,0));
    TEST_ASSERT_EQUAL(0,calculation(1500, 1,0));
    TEST_ASSERT_EQUAL(0,calculation(1500, 0,0));
}

void old_customer_test(void)
{
    TEST_ASSERT_EQUAL(23516, old_customer(23516,200));

    TEST_ASSERT_EQUAL(0, old_customer(0,0));

    TEST_ASSERT_EQUAL(0, old_customer(50001,299));

    TEST_ASSERT_EQUAL(0, old_customer(64000,154));

    TEST_ASSERT_EQUAL(0, old_customer(6400000,19));
    
    TEST_ASSERT_EQUAL(50000, old_customer(50000,300));

    TEST_ASSERT_EQUAL(0, old_customer(55000,300));

    TEST_ASSERT_EQUAL(80000, old_customer(80000,301));

    TEST_ASSERT_EQUAL(10000, old_customer(10000,400));

    TEST_ASSERT_EQUAL(0, old_customer(85000,354));

    TEST_ASSERT_EQUAL(0, old_customer(80001,369));

    TEST_ASSERT_EQUAL(100000, old_customer(100000,401));

    TEST_ASSERT_EQUAL(35000, old_customer(35000,500));

    TEST_ASSERT_EQUAL(0, old_customer(146287,486));

    TEST_ASSERT_EQUAL(0, old_customer(100001,432));

    TEST_ASSERT_EQUAL(300000, old_customer(300000,501));

    TEST_ASSERT_EQUAL(250000, old_customer(250000,600));

    TEST_ASSERT_EQUAL(0, old_customer(400000,511));

    TEST_ASSERT_EQUAL(0, old_customer(300001,520));

    TEST_ASSERT_EQUAL(500000, old_customer(500000,601));

    TEST_ASSERT_EQUAL(412257, old_customer(412257,700));

    TEST_ASSERT_EQUAL(0, old_customer(800000,664));

    TEST_ASSERT_EQUAL(0, old_customer(500001,678));

    TEST_ASSERT_EQUAL(800000, old_customer(800000,701));

    TEST_ASSERT_EQUAL(256500, old_customer(256500,800));

    TEST_ASSERT_EQUAL(0, old_customer(1000000,799));

    TEST_ASSERT_EQUAL(0, old_customer(800001,799));

    TEST_ASSERT_EQUAL(1462875, old_customer(1462875,801));

    TEST_ASSERT_EQUAL(185000, old_customer(185000,864));

    TEST_ASSERT_EQUAL(60000, old_customer(60000,864));

    TEST_ASSERT_EQUAL(10000000, old_customer(10000000,812));
}
