#include "New_customer.h"
#include "config.h"

long values_new[3];

/**
 * @brief Get the inputs such as age and income from new customer.
 * Using the adhar number of the new customer, the loan amount is returned.
 * 
 * @param fp 
 * @return long* 
 */
long * get_input_new_customer(FILE *fp)
{
    
    record user_data;
    char tempadhar[13];

    printf("\n\n\t\tPlease enter your age :");
    scanf("%ld",&values_new[0]);
    
    printf("\n\n\t\tPlease enter your annual income:");
    scanf("%ld",&values_new[1]);

    printf("\n\n\t\tEnter Adhar Number: ");
    scanf("%s",tempadhar);
    
    rewind(fp);
    
    while((fread(&user_data,sizeof(record),1,fp))==1)
    {
        if(strcmp(user_data.adhar_number, tempadhar)==0)
        {
            values_new[2] = user_data.loan_amount;
            break;
        }
    }
    
    return values_new;
}