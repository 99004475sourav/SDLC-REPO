# SDLC TEAM -17

# INTRODUCTION

Loan management systems helps to automate the entire loan lifecycle. Depending on requirements, these programs can assist our life. The software can help with processing customer information, create new loans, and more. They can also provide lenders with accurate statements and reports. Moreover, they can manage interest rates and provide the tools for collection automation.
## Features of a loan management system:
### Loan Origination:
Loan origination is the process where a borrower applies for a loan, and the lender processes it. 
#### Loan Servicing:
The loan servicing feature helps to manage loans. Every loan is different: they have different interest rates, payment dates, and more. One can track all these loans and ensure to receive payments on time. It allows to calculate interests, fees, and more.
###  Debt collection:
Collecting back the payment is essential for lending businesses. A digital lending platform can notify you when accounts become delinquent. One can also get notified when the borrower pays back or when a repayment is due. The collection system can even calculate late fees for you.
## Benefits of a loan management system:
### Make lending easier:

Borrowers may need to borrow money for once. It is particularly true in the case of mortgages – where we have only one chance to make a good impression. Therefore, we have to provide our customer with a good lending experience. One can impart a good borrowing experience by making the application procedure online. On the operations front, we can automate credibility checks, automate the offer generation system, and make disbursal faster. 
### Better Customer Experience
Customers with better experiences are more likely to recommend your business to others. Recommendations like these will create new opportunities. Digital lending platforms are customer-centric systems. With self-serve portals, you can simplify the borrower journey and impress customers, especially the newer generation. 
### Paperless processes:

As loan processing becomes more digital, document management has also become automated. Lenders no longer need to store files in large cabinets as everything is now centrally and digitally managed. We can view any file with a few clicks, and nothing ever gets lost.

----
## State of art:
### Ageing - Time:
In traditional lending system , the process of lending loan is chaotic. It takes a large amount of time and resource for a person who wants to avail the loan facilitie.
In this loan management system one can easily be provided with loan. Client should check his eligibilty whether he mets the criterai to get loan and then  is approved or denied loan.

### Ageing - cost/feature evolution:

The system provides feature where user can get an information of what is the amount to be paid as an interest for the amount taken.
He can also get information regarding in how many installments and within which period all the debts to be covered and much more.

----
## Identify Requirements

### Software Requirements:

1. User shall be able to enter his customer details.
2. User shall be able to view the different types of loans and can opt accordingly.
3. User shall be able to upload his necessary documents for the approval of laon.
4. User shall be able to view the cash details that he needs to pay etc.

### User Requirements:
1. able to enter his/her data into the system.
2. view the payable interest.
3. view loan EMI.
4. view the total payable amount for the kind of loan he opted for (i.e, interest+principal)
5. view the necessary documents required for applying to the loan.
6. view the different types of loan provided by the system.

### Non-Functional requirement:

1. Reliable.
2. Usable.
3. Accuracy.
4. Efficiency.

## 4 W’s and 1 H’s:

### Why:
This application is used to find if the person has taken any loan previously or not.
It is used to check the cibil score of the person.
It is used to show if the person is eligible for the loan or not.
It is used to calculate the total amount the person has to pay.

### What:
This application will check if the person has taken any loan previously or not.
It will add new customers to the database.
It will check the cibil score of the person.
It will check if the person is eligible for the loan or not.
It will check if the person is entering the correct data or not.

### When:
If an individual can't meet certain finacial condition, he/she could use this application to get a loan.Some examples are:
1.For educational purposes
2.For starting a new business
3.For improving personal life(house/car/agriculture).

### Where:
This application is deployed by the banks.
It can be accessed by users from anywhere, provided that they could meet certain criteria.

### How:
If the customer is old, it is done with the help of their cibil score.
If the customer is new, it is done with the help of their age and annual income.

## SWOT analysis:

![image](swot.jpg)


## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | New user shall be able to add his records. | Techincal | IMPLEMENTED | 
| HR02 | User shall be able to read his respective record. | Techincal |  IMPLEMENTED  |
| HR03 | User shall be able to choose between different types of loan. | Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to add the different documnets based upon the type of loan. | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to update his customer record | Techincal |  IMPLEMENTED  |
| HR06 | User shall be able to choose between loans pending . | Techincal |  IMPLEMENTED  |
| HR07 | User shall be able to view the total amount to be paid. | Techincal |  IMPLEMENTED  |
| HR08 | Admin shall be able to read the entire file. | Techincal |  IMPLEMENTED  |
| HR09 | Data should not be lost in case of faliure. | Scenario |  FUTURE  |
| HR10 | Data should always be stored when closing the system. | Scenario |  IMPLEMENTED |


##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | (1). New record shall be added by providing all the asked information (2). Adhar number and PAN should be unique and validated from persistant file or else customer record should not be accepted. | HR01 | IMPLEMENTED | 
| LR02 | Reading customer data should be possible in 2 ways (1). first being by searching by adhar number of a customer (2). By printing all the records available (only by the admin)| HR02,HR08 |  IMPLEMENTED  |
| LR03 | Customer is able to choose between different types of loan based upon the selection of loan the system itself takes the rate of interest. | HR03 |  IMPLEMENTED  |
| LR04 | Once the customer selects between different types of loan , based on the loan type he is asked to add the records.Records to be added varies depending on the type of loan | HR04 |  IMPLEMENTED  |
| LR05 | If user searches for an invalid adhar number "Record  Not Found" message should be displayed | HR02 |  IMPLEMENTED  |
| LR06 | If user selects for an invalid loan type "Invalid choice" message should be displayed | HR03 |  IMPLEMENTED  |
| LR07 | User need to search by adhar number for the customer record to be updated, if no such record is available then "Record  Not Found" Message should be displayed | HR05 |  IMPLEMENTED  |
| LR08| If he is an old user he shall be given a choice to select between if any loans are pending ,the maximum loan pending can be three . this is used for updating his respective cibil score | HR06 |  IMPLEMENTED  |
| LR09 | Based upon the loan amount ,the rate if inetrest for his respective loan user shall be able to see the amount he need to pay after the certain period | HR07 |  IMPLEMENTED  |
| LR10 | Until unless user deletes the file by himself data will not to erased | HR10 |  IMPLEMENTED  |
                                                                                            
