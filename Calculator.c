#include <stdio.h>
#include <stdbool.h>

int main() {

   float num1,num2,result;
   char letter;
   bool again=true;

   printf("Input Number 1: ");
   scanf("%f", &num1);
   printf("Input Number 2: ");
   scanf("%f", &num2);
   printf("Choose a Operation");
   printf("\nTap + for Addition\nTap - for Subtraction");
   printf("\nTap * for Multiplication\nTap / for Division");
   printf("\nTap 0 for Closing the Application\n");
   scanf("%s", &letter);

   if(letter == '+')
   {
      result = num1+num2;
      printf("Result: %5.2f", result);
   }
   else if (letter == '-')
   {
      result = num1-num2;
      printf("Result: %5.2f", result);
   }
   else if (letter == '*')
   {
      result = num1*num2;
      printf("Result: %5.2f", result);
   }
   else if (letter == '/')
   {
      result = num1/num2;
      printf("Result: %5.2f", result);
   }
   else if (letter == '0')
   {
      return 0;
   } 
   else
   {
      printf("\nTapped false character");
   }
   
   return 0;
}


