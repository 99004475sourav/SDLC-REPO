#include "config.h"

/**
 * @brief This function helps to update the existing database, by the customer.
 * 
 * @param fp 
 */
void update(FILE * fp)
{
    record user_data;
    int flag=0,siz=sizeof(user_data);
	char tempadhar[13];
    printf("\n\n\tEnter adhar card of customer to modify the Record : ");
    scanf("%s",tempadhar);
    rewind(fp);
	while((fread(&user_data,siz,1,fp))==1)
    {
        if(strcmp(user_data.adhar_number, tempadhar)==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        fseek(fp,-siz,SEEK_CUR);
        printf("\n\n\t\t\t\tRecord Found\n\t\t\t");
        printf("\n\n\t\t\t Name: %s",user_data.name);
        printf("\n\n\t\t\tAdhar number: %s\n\t\t\t",user_data.adhar_number);
         printf("\n\n\t\t\tLoan Amount:%ld",user_data.loan_amount);
        printf("\n\n\t\t\tEnter New Data for the customer");

        printf("\n\n\t\t\tEnter Full Name of customer: ");
        int count=0; 
        scanf("%s", user_data.name);
        printf("\n\n\t\t\tEnter Your occupation\n");
        scanf("%s", user_data.occupation);
        printf("\n\n\t\t\tEnter Your loan_amount:\n");
        scanf("%ld", &user_data.loan_amount);
        
        count = strlen(user_data.adhar_number);
        //printf("%ld\n", count);
        
        if(count != 12)
        {
            printf("Invalid Adhaar");
            return ;
        }
        
        rewind(fp);


        fwrite(&user_data,sizeof(record),1,fp);
    }

    else printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");

    printf("\n\n\t");
}
