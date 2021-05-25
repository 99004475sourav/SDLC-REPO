
#ifndef New_customer_H
#define New_customer_H

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct
    {
        long age;
        long annual_income;
        long loan_amount;
    }info;
    /**
     * @brief This function validates the new customer and return 1 if succeeded.
     * 
     * @return int 
     */
    int new_customer_validation(long * values);

#endif