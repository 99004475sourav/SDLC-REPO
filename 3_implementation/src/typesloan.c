#include "config.h"
/**
 * @brief displays the types of loan and display the content
 * 
 * @param ch takes the choice of loan the user wants
 * @return int returns the rate of interest
 */
int types_loan(int choice)
{
    switch(choice)
    {
        case 1:printf("\n\n\t\tYour choice of loan is Home Loan\n");
            return 5;
        
        case 2:printf("\n\n\t\tYour choice of loan is Gold loan\n");
            return 8;

        case 3:printf("\n\n\t\tYour choice of loan is Car loan\n");
            return 7;

        default:printf("\n\n\t\tInvalid choice");
            return 0;
    }
}
