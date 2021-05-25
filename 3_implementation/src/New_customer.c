#include "New_customer.h"
#include "config.h"

int new_customer_validation(long * values)
{
    info structure_variable;
    structure_variable.age = values[0];
    structure_variable.annual_income = values[1];
    structure_variable.loan_amount = values[2];

    if(structure_variable.age > 20 && structure_variable.age < 65)
    {
        if(structure_variable.annual_income > 300000)
        {
            printf("\n\n\t\tYay!!!\n") ;
		    printf("\t\tHurray!!!, Your are eligible for the Loan.\n");
            getc(stdin);
            return structure_variable.loan_amount;
        }
        else
        {
            printf("\n\n\t\tOOOPSSS!!!\n") ;
		    printf("\t\tSorry!!!, Your are not eligible for the loan.\n");
            getc(stdin);
            return 0;
        }
    }
    printf("\n\n\t\tOOOPSSS!!!\n") ;
	printf("\t\tSorry!!!, Loan is not provided for minors and senior citizens.\n");
    getc(stdin);
    return 0;
}
