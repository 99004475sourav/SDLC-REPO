#include"Old_customer.h"
#include "config.h"

/**
 * @brief this function takes cibil score from the individual function and asks the user whether any of the loans is pending for updating the 
 * cibil score
 * 
 * @return int returns the updated cibil score.
 */
int cibil_calculation(FILE *fp)
{   
    int cibil_s;
    int choice;
    printf("\n\n\t\tPlease mention the no of Pending Loans");
    printf("\n\t\tPress 1 for no pending Loans");
    printf("\n\t\tPress 2 for 1 pending Loans");
    printf("\n\t\tPress 3 for 2 pending Loans");
    printf("\n\t\tPress 4 for 3 pending Loans\n");
    scanf("%d",&choice);
    cibil_s=Individual(fp);
    if(cibil_s == 0)
        return 0;
    switch (choice)
    {
        case 1:
        cibil_s=cibil_s-0;
        break;

        case 2:
        cibil_s=cibil_s-200;
        break;

        case 3:
        cibil_s=cibil_s-400;
        break;

        case 4:
        cibil_s=cibil_s-600;
        break;

        default:printf("\n\n\t\tInvalid choice\n");
        break;

    }

    return cibil_s;
}