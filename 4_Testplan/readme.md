# TEST PLAN:

##  High level test plan

| **Test ID** | **Description**                                              | **Exp Input** | **Exp Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| H_01 | Checking the doucments validation | 1.Adhar number  2. PAN | Success | Success | Scenario Based |
| H_02 | Checking if the loan amount required is acceptable or not | Loan amount | Success | Success | Scenario Based | 
| H_03 | Checking if the new customer is valid for loan or not | 1.Age 2.Income 3.Loan amount | Success| Success | Scenario Based |
| H_04 | Checking if the old customer is eligible for the loan or not | 1. Cibil Score 2. Loan amount | Success | Success | Scenario Based |
| H_05 | Checking if the loan type is valid | Choice | Success | Success | Option Based |
| H_06 | Checking if the total amount calculated is valid | 1.Principal 2.Rate 3.Time | Success| Success | Scenario Based |
| H_07 | Check if the tenure function is working. | 1.Amount 2.Rate 3.Time 4.Choice| Success | Success | Technical Based |


##  Low level test plan

| **L_ID** | **H_ID** | **Description**                                              | **Exp Input** | **Exp Output** | **Actual Output** |**Type Of Test**  |    
|--------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| L_01 | H_01 | Check if the Adhar number entered by user is corect or not  | 1.Adhar number  2. PAN | Success | Success | Scenario Based |
| L_02 | H_01 | Check if the PAN number entered by user is corect or not  | 1.Adhar number  2. PAN | Success | Success | Scenario Based |
| L_03 | H_02 | Check if the loan amount entered by user is valid | Loan amount | Success | Success | Scenario Based |
| L_04 | H_03 | Check if the New customer age is valid | 1.Age 2.Income 3.Loan amount | Success | Success | Scenario Based |
| L_05 | H_03 | Check if the new cutomer income is valid. | 1.Age 2.Income 3.Loan amount | Success | Success | Scenario Based |
| L_06 | H_05 | Check if the loan type is valid | Choice | Success | Success | Option Based |
| L_07 | H_06 | Check if the total amount calculated is valid | 1.Principal 2.Rate 3.Time | Success | Success | Scenario Based |
| L_08 | H_07 | Check if the tenure function is working. | 1.Amount 2.Rate 3.Time 4.Choice | Success | Success | Technical Based |
| L_09 | H_04 | Check if the old customer is eligible for the loan or not | 1. Cibil Score 2. Loan amount | Success | Success | Scenario Based |
