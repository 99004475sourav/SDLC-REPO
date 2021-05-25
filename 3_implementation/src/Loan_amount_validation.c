#include "config.h"

int loan_amount_validation(long int loan_amount)
{
    if(loan_amount < 25000)
    {
        printf("The loan amount is too Low");
        return 0;
    }
    else
        return 1;
}