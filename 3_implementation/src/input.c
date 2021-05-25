#include "config.h"

int input(FILE *fp)
{
        
    record user_data;
    char str[] = "new";
    char str1[] = "New";
    char Pan[15];

    printf("\n\n\t\tEnter the type of user - 'New' or 'old': ");
    scanf("%s", user_data.user_type);
    
    if(strcmp(user_data.user_type, str) == 0 || strcmp(user_data.user_type, str1) == 0)
    {
        if(add(fp))
            return 1;
        else
            return 2;
    }
    else if(strcmp(user_data.user_type, "old") == 0 || strcmp(user_data.user_type, "Old") == 0)
    {
        return 0;
    }
    else
    {
        printf("\n\n\t\tInvalid data.");
        return 2;
    } 
}
/**
 * @brief this function takes user data and writes into the file
 * 
 * @param fp file pointer 
 */
int add(FILE * fp)
{
    printf("\n\n\t\tEnter Details");
    
    record user_data, data_base;
    
    fseek(fp,0,SEEK_END);
    
    { 
        printf("\n\n\t\tEnter Your name:");
        scanf("%s", user_data.name);
        printf("\n\n\t\tEnter Your occupation:");
        scanf("%s", user_data.occupation);
        printf("\n\n\t\tEnter Your Adhar number:");
        scanf("%s", user_data.adhar_number);
        printf("\n\n\t\tEnter Your loan amount:");
        scanf("%ld", &user_data.loan_amount);
        
        if(loan_amount_validation(user_data.loan_amount) == 0)
            return 0;
        
	    printf("\n\n\t\tEnter Your PAN_number(ex: XXXXX8888A):");
	    scanf("%s", user_data.PAN_number);

        if(PAN_and_Adhar_validation( user_data.PAN_number, user_data.adhar_number) == 0)
            return 0;
        
        rewind(fp);
        
        while(fread(&data_base, sizeof(record), 1, fp))
        {
            if(user_data.adhar_number == data_base.adhar_number)
            {
                printf("\n\n\t\tDetails already present!");
                return 0;
            }
        }
        user_data.cibil_score=900;
        
        fwrite(&user_data,sizeof(record),1,fp);   
		return 1;
        
    }
}
