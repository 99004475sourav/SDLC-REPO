#include "Old_customer.h"
#include "config.h"

/**
 * @brief This function checks the eligibility of the customer for the loan using the parameters(loan amount and cibil score).
 * Return 1 if succeeded.
 * @param loan_amount 
 * @param cibil_score 
 * @return int 
 */
int old_customer(long loan_amount,int cibil_score)
{	
	
	if(cibil_score <= 300 && loan_amount > 50000)
		{
			printf("OOOPSSS!!!\n") ;
			printf("Sorry!!!, Your CIBIL score is too LOW for approval of Loan of Rs.%ld.\n",loan_amount);
			printf("Please try again with a lower amount.\n");	
			return 0;
		}
		
	if(cibil_score <= 300 && loan_amount <= 50000 )
		{
			printf("Yay!!!\n") ;
			printf("Hurray!!!, Your are eligible for the Loan of Rs.%ld.\n",loan_amount);	
			return loan_amount;
		}
		
	if(cibil_score > 300 && cibil_score <= 400 && loan_amount > 80000)
		{
			printf("OOOPSSS!!!\n") ;
			printf("Sorry!!!, Your CIBIL score is too LOW for approval of Loan of Rs.%ld.\n",loan_amount);
			printf("Please try again with a lower amount.\n");		
			return 0;
		}
		
	if(cibil_score > 300 && cibil_score <= 400 && loan_amount <= 80000)
		{
			printf("Yay!!!\n") ;
			printf("Hurray!!!, Your are eligible for the Loan of Rs.%ld.\n",loan_amount);	
			return loan_amount;
		}
		
	if(cibil_score > 400 && cibil_score <= 500 && loan_amount > 100000)
		{
			printf("OOOPSSS!!!\n") ;
			printf("Sorry!!!, Your CIBIL score is too LOW for approval of Loan of Rs.%ld.\n",loan_amount);
			printf("Please try again with a lower amount.\n");		
			return 0;
		}
		
	if(cibil_score > 400 && cibil_score <= 500 && loan_amount <= 100000)
		{
			printf("Yay!!!\n") ;
			printf("Hurray!!!, Your are eligible for the Loan of Rs.%ld.\n",loan_amount);	
			return loan_amount;
		}
		
	if(cibil_score > 500 && cibil_score <= 600 && loan_amount > 300000)
		{
			printf("OOOPSSS!!!\n") ;
			printf("Sorry!!!, Your CIBIL score is too LOW for approval of Loan of Rs.%ld.\n",loan_amount);
			printf("Please try again with a lower amount.\n");		
			return 0;
		}
		
	if(cibil_score > 500 && cibil_score <= 600 && loan_amount <= 300000)
		{
			printf("Yay!!!\n") ;
			printf("Hurray!!!, Your are eligible for the Loan of Rs.%ld.\n",loan_amount);	
			return loan_amount;
		}
		
	if(cibil_score > 600 && cibil_score <= 700 && loan_amount > 500000)
		{
			printf("OOOPSSS!!!\n") ;
			printf("Sorry!!!, Your CIBIL score is too LOW for approval of Loan of Rs.%ld.\n",loan_amount);
			printf("Please try again with a lower amount.\n");		
			return 0;
		}
		
	if(cibil_score > 600 && cibil_score <= 700 && loan_amount <= 500000)
		{
			printf("Yay!!!\n") ;
			printf("Hurray!!!, Your are eligible for the Loan of Rs.%ld.\n",loan_amount);	
			return loan_amount;
		}
		
	if(cibil_score > 700 && cibil_score <= 800 && loan_amount > 800000)
		{
			printf("OOOPSSS!!!\n") ;
			printf("Sorry!!!, Your CIBIL score is too LOW for approval of Loan of Rs.%ld.\n",loan_amount);
			printf("Please try again with a lower amount.\n");		
			return 0;
		}
		
	if(cibil_score > 700 && cibil_score <= 800 && loan_amount <= 800000)
		{
			printf("Yay!!!\n") ;
			printf("Hurray!!!, Your are eligible for the Loan of Rs.%ld.\n",loan_amount);	
			return loan_amount;
		}
		
	if(cibil_score > 800 && loan_amount <= 10000000)
		{
			printf("Yay!!!\n") ;
			printf("Hurray!!!, Your are eligible for the Loan of Rs.%ld.\n",loan_amount);	
			return loan_amount;
		}	
}


