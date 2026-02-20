// Headers or importing inbuilt libraries
#include <stdio.h>

int sum()
{
    // Declaring variables
    int a, b, sum;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Performing addition
    sum = a + b;

    // Displaying the result
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}

int main()
{
    sum();
    return 0;
}