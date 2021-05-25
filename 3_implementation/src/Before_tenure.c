#include "config.h"

int Before_tenure(double amount,double time,double month,char c)
{   
    double whole;
    if(c == 'y' || c== 'Y')
    {
        whole = (amount*(12*time - month))/(12*time) + amount/(12*time);
        printf("\n\n\t\tYou will have to pay Rs%lf in the %dth month to clear your loan.",ceil(whole),(int)month);
        return 1 ;
    }
    else{
        printf("Not selected");
        return 0 ;
    }
}