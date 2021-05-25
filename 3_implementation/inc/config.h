
#ifndef Config_H
#define Config_H
    #include<stdio.h>
    #include<malloc.h>
    #include<string.h>
    #include<stdlib.h>
    #include <math.h>
    /**
     * @brief structi=ure to store the record of the customer
     * 
     */

    typedef struct Record{
        char user_type[5];
        char name[20];
        char occupation[20];
        char loan_type[20];
        char adhar_number[15];
        char PAN_number[15];
        int cibil_score;
        long loan_amount;
    }record;


    int input(FILE *fp);
    int types_loan(int);
    int add(FILE *fp);
    void update(FILE * fp);
    int Individual(FILE *fp);
    void display(FILE * fp);
    double calculation(double loan_amount, double rate, double time);
    long get_input_old_customer(FILE *fp);
    long * get_input_new_customer(FILE *fp);
    int PAN_and_Adhar_validation(char * PAN, char * Adhar);
    int loan_amount_validation(long int loan_amount);
    int Before_tenure(double amount,double time,double month,char c);

#endif
