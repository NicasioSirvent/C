#include <stdlib.h>
#include <stdio.h>

typedef struct Employee_Template CUSTOMER_RELATIONS;
struct Employee_Template {
  char FullName[30];
  char EmployeeID[11];
  double Salary;
};

void main(){
  CUSTOMER_RELATIONS NewHire;
  char szTemporaryBuffer[128];

  printf("\nEnter Full Name: ");
  gets(NewHire.FullName);
  printf("\nEnter ID: ");
  gets(NewHire.EmployeeID);
  printf("\nEnter Salary: ");
  //scanf("%f", NewHire.Salary);
  gets(szTemporaryBuffer);
  NewHire.Salary = atof(szTemporaryBuffer);

  printf("\nName is: %s, Employee ID is: %s, and Salary is: %.2f\n",
    NewHire.FullName, NewHire.EmployeeID, NewHire.Salary);
}
