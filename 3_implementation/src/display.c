#include "config.h"
/**
 * @brief display function reads the value from the file and displays the content
 * 
 * @param fp file pointer 
 */
void display(FILE * fp)
{
    record user_data;
	int siz=sizeof(record);
    rewind(fp);
    while((fread(&user_data,siz,1,fp))==1)
    {
        printf("\n\n\t\tNAME : %s",user_data.name);
        printf("\n\n\t\tOccupation : %s",user_data.occupation);
        printf("\n\n\t\tAdhar Number : %s",user_data.adhar_number);
        printf("\n\n\t\tPAN number:%s",user_data.PAN_number);
        printf("\n\n\t\tLoan Amount:%ld",user_data.loan_amount);
        printf("\n\n\t\tCibil Score:%d",user_data.cibil_score);
    }
    getc(stdin);
    return ;
}
