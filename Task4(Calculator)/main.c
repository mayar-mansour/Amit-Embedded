#include <stdio.h>
#include <stdlib.h>

int main()
{
  char operation;
  double number_1,number_2,result;
   printf("Enter an operator (+, -, *, /): ");
   scanf("%c", &operation);
   if(!(operation == '*' || operation == '+' || operation == '/' || operation == '-')){
    printf("Please enter valid operator (+, -, *, /) ");
    return 0; // Terminate program
   }
   printf("Enter First Number :",number_1);
   scanf("%lf", &number_1);
   printf("Enter Second Number : ",number_2);
   scanf("%lf",&number_2);

   if(operation == '*'){
    result = number_1*number_2;
   }
    else if(operation == '+'){
    result = number_1+number_2;
   }
   else if(operation == '-'){
    result = number_1-number_2;
   }
    else if(operation == '/'){
    result = number_1/number_2;
   }
   /*
   else{
    printf("Please enter valid operator (+, -, *, /) ");
   }
   */
    // Print the result
    printf("%.2lf %c %.2lf = %.2lf", number_1, operation, number_2, result);
    return 0;

}
