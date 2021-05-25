#include "config.h"
#include "New_customer.h"
#include "Old_customer.h"

int main() 
{
    int user_status;
    double loan_amount;
    double time;
    double amt;
    int rate;

    FILE *fp;
   
    printf("\n\n\t\tWELCOME TO LOAN MANAGEMENT SYSTEM..!!");
	if((fp=fopen("customer_db.txt","rb+"))==NULL)
    {
        if((fp=fopen("customer_db.txt","wb+"))==NULL)
        {
            printf("Can't create ");
            return 0;
        }
    }

    user_status = input(fp);
    
    if(user_status == 0)
    {   
        char ch;
        printf("\n\n\t\t Do you want to update your records(y/n):");
	    scanf("%s",&ch);
        if(ch == 'Y' || ch == 'y')
        {
            update(fp);
        }
        
        int cibil_score=cibil_calculation(fp);
        if(cibil_score == 0)
        {
            printf("\n\n\t\tThank you.");
            return 0;
        }
        loan_amount = (double)old_customer(get_input_old_customer(fp),cibil_score);
        
        if(loan_amount != 0)
        {   
            int ch;
               
            printf("\n\n\t\t1: Home Loan with Rate of Interest 5 per\n");
            printf("\n\n\t\t2: Gold Loan with Rate of Interest 8 per \n");
            printf("\n\n\t\t3: Car Loan with Rate of Interest 7 per \n");
            printf("\n\n\t\tYour choice of loan:");
            scanf("%d", &ch);
            rate=types_loan(ch);
            
            printf("\n\n \t \t Please enter the time period:");
            scanf("%lf",&time);
            amt = calculation(loan_amount, rate, time);
            if(amt >= 1)
            { char c;
            double month;
                printf("\n\n\t\t Do you want to pay off your whole loan before your tenure(Y/N): ");
                scanf("%s",&c);
                if(c == 'y' || c== 'Y')
                {
                printf("\n\n\t\tIn which month do you want to pay off your whole loan ?: ");
                scanf("%lf",&month);
                
                if(Before_tenure(amt,time,month,c) == 1)
                    printf("\n\n\t\tThank you");
                else
                    printf("\n\n \t \t Amount you need to pay per month = Rs%lf",amt);
                printf("\n\n\t\t.......");
            }
            }
            else
            {
                printf("\n\n\t\tInterest amount is not valid.");
            }
        }
    }
    
    else if(user_status == 1)
    {
        loan_amount = (double)new_customer_validation(get_input_new_customer(fp));
        if( loan_amount > 0)
        {   
            int loan_choice;
               
            printf("\n\n\t\t1: Home Loan with Rate of Interest 5 per");

            printf("\n\n\t\t2: Gold Loan with Rate of Interest 8 per ");

            printf("\n\n\t\t3: Car Loan with Rate of Interest 7 per ");
            printf("\n\n\t\tEnter your choice:");
            scanf("%d", &loan_choice);
            
            rate=types_loan(loan_choice);
            
            printf("\n\n \t \t Please enter the time period:");
            scanf("%lf",&time);
            
            amt = calculation(loan_amount, rate, time);
            if(amt >= 1)
            { char c;
            double month;
                printf("\n\n\t\t Do you want to pay off your whole loan before your tenure(Y/N): ");
                scanf("%s",&c);
                if(c == 'y' || c== 'Y')
                {
                printf("\n\n\t\tIn which month do you want to pay off your whole loan ?: ");
                scanf("%lf",&month);
                
                if(Before_tenure(amt,time,month,c) == 1)
                    printf("\n\n\t\tThank you");
                else
                    printf("\n\n \t \t Amount you need to pay per month = Rs%lf",amt);
                printf("\n\n\t\t.......");
            }
            }
            else
            {
                printf("\n\n\t\tInterest amount is not valid.");
            }
        }

    }
    char select;
    
    printf("\n\n\t\tIf you are admin press Yes else No to see data:\n\n\t \tType(y/n)");
    scanf("%s",&select);
    if(select == 'Y' || select == 'y')
    {
        display(fp);
    }
    else
    {
        printf("\n\n\t\tyou are not valid user to access data");
    }
    char sel;
    printf("\n\n\t\tWant to see your data ,Type(y/n):");
    scanf("%s",&sel);
    if(sel == 'Y' || sel == 'y')
    {
        Individual(fp);
    }
    printf("\n \n \t \t Thank You.");
    fclose(fp);
    return 0; 
}
