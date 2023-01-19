#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, first_term=0, second_term=1, next_term, i;
    //line 6 defines the variables to be used in the code below
    //Ask user to input number of terms
    printf("Enter the number of terms:\n");
    scanf("%d",&count);

    printf("First %d terms of Fibonacci series:\n",count);
    for(i = 0 ; i < count ; i++)
    {
        if(i <= 1)
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }
        //the lines of code above allow our code to perfom the seuence
        //when the term is less than or equal to 1 then we repeat the term
        //otherwise we perform the necessary calculations to continue with the sequence
        printf("%d\n",next_term);
    }
    return 0;
}
