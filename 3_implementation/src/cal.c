#include"config.h"
/**
 * @brief calculation function calculates the interest which the customer has to pay after the certain period.
 * 
 * @param loan_amount 
 * @param rate :it is the late of interest
 * @param time :time limit
 * @return int :if loan amount is less than 0 it returns 0 else returns 1
 */

double calculation(double loan_amount, double rate, double time)
{
    double principal,interest,amount;
    double amt;
    
    principal = loan_amount;
    interest = (principal*rate*time)/100;
    amount = principal + interest;
    amt=(amount/(12*time));
    
    if(interest > 0 && time>0)
        return amt;
    else
        return 0;
}