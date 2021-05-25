#include "config.h"
/**
 * @brief function which takes adhar number from the user and compares it in the file
 * if found it displays those content 
 * 
 * @param fp file pointer
 * @return int this function returns cibil-score value
 */
int Individual(FILE *fp)
{
    int siz;
    record user_data;
    siz=sizeof(record);
    {
        int flag=0;
        char tempadhar[13];
        printf("\n\n\t\tEnter Adhar Number: ");
        scanf("%s",tempadhar);

        

        rewind(fp);
        
        
        while((fread(&user_data,sizeof(record),1,fp))==1)
        {
            if(strcmp(user_data.adhar_number, tempadhar)==0)
            {  
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        {
            printf("\n\n\t\tNAME : %s",user_data.name);
            printf("\n\t\tAdhar Number : %s",user_data.adhar_number);
            return user_data.cibil_score;
            
        }
        else 
        {
            printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND !!!!");
            return 0;
        }
    }
    
}