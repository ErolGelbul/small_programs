#include <stdio.h>
#include <stdlib.h>

int getChoice()
{
    int input = getchar();
    putchar (input);
    return input;
}
void printResult(int ans)
{
    printf("\nThe result is %.2f", ans);
}
int convertMtoCm(int num)
{
   int centimetres = num*100;
   return centimetres;
}
int convertCmtoM(int num)
{
   int metres = num/100;
   return metres;
}

int convertWeekstoDays(int num)
{
   int weeks = num*7;
   return weeks;
}

int main()
{
    int option;
    float value, result;
    printf("\n Welcome to the converter") ;
    printf("\n Menu");
    printf("\n1. metres to centimetres");
    printf("\n2. centimetres to metres");
    printf("\n3. weeks to days");
    printf("\nEnter the number of your choice:");
    scanf("%d",&option );
  
  value = getChoice();
  printResult(result);
  //putting getInput and printResult before the if statement to make it more efficient

    if (option == 1)
    {
        printf("\n Enter metres");
        value = getChoice();
        result = convertMtoCm(value);
        printResult(result);
    }
    else if (option ==2)
    {
        printf("\n Enter centimetres:");
        value = getChoice();
        result = convertCmtoM(value);
        printResult(result);
    }
  //TASK 1 COMPLETE: inserting weekstodays
    else if (option ==3)
    {
        printf("\n Enter weeks:");
        value = getChoice();
        result = convertWeekstoDays(value);
        printResult(result);
    }
    else
    {
        printf("\n Invalid choice");
    }
    return 0;
}