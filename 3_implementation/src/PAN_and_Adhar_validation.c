#include "config.h"

/**
 * @brief It validates the user given PAN and Adhar number and returns 1 is succeeded. 
 * 
 * @param PAN_number 
 * @param Adhar 
 * @return int 
 */
int PAN_and_Adhar_validation(char * PAN_number, char * Adhar)
{
    int PAN_length = 0;
    int Adhar_length = 0;
    int it_variable = 0;
    PAN_length = strlen(PAN_number);
    
        if(PAN_length == 10)
        {
            int check = 0;
            while(check < 4)
            {
                if((int)PAN_number[check] >= 65 && (int)PAN_number[check] <= 90)
                {
                    if((int)PAN_number[check+5] >= 48 && (int)PAN_number[check+5] <= 57)
                    {
                        check++;
                        continue;
                    }
                    else
                    {
                        printf("\n\n\t\tInvalid Pan Number");
                        return 0;
                    }      
                }
                else
                {
                    printf("\n\n\t\tInvalid Pan Number");
                    return 0;
                }
            }
            if((int)PAN_number[check] >= 65 && (int)PAN_number[check] <= 90)
            {
                if((int)PAN_number[check+5] >= 65 && (int)PAN_number[check+5] <= 90)
                {
                    printf("\n\n\t\tPan Number is Valid.");
                }
                else
                {
                    printf("\n\n\t\tInvalid Pan Number");
                    return 0;
                }
            }
            else
            {
                printf("\n\n\t\tInvalid Pan Number");
                return 0;
            }
        }
        else
        {
            printf("\n\n\t\tInvalid Pan Number");
            return 0;
        }
       
        Adhar_length = strlen(Adhar);
                
        if(Adhar_length != 12)
        {
            printf("\n\n\t\tInvalid Adhaar");
            return 0;
        }
        else
        {
            for(;it_variable < 12;it_variable++)
            {
                if( Adhar[it_variable] >= 48 && Adhar[it_variable] <= 57 )
                    ;
                else
                {
                    printf("\n\n\t\tInvalid Adhaar");
                    return 0;
                }
            }
        }
        printf("\n\n\t\tAdhar is Valid.");
        return 1;
}