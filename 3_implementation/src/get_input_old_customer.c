#include "config.h"

/**
 * @brief By using the adhar number the loan amount of the customer is returned.
 * 
 * @param fp 
 * @return long 
 */
long get_input_old_customer(FILE *fp)
{
    long  value;
    record user_data;
    char tempadhar[13];

    printf("\n\n\tEnter Adhar Number: ");
    scanf("%s",tempadhar);

    rewind(fp);
    while((fread(&user_data,sizeof(record),1,fp))==1)
    {
        if(strcmp(user_data.adhar_number, tempadhar)==0)
        {
            value = user_data.loan_amount;
            break;
        }
    }
    return value;
}