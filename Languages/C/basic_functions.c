// Headers or importing inbuilt libraries
#include <stdio.h>


// a fully self-functioning function
int sum()
{
    // Declaring variables
    int a, b, sum;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // logic
    sum = a + b;

    // Displaying the result
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}

// a dependent function
int subtract(int a, int b)
{
    // Decraling variables
    int diff;

    //logic
    diff = a - b;

    // display the result
    printf("The diffrence of %d and %d is: %d\n", a, b, diff);

    return 0;
}

int multiply(int a, int b)
{
    return a*b;
}



int main()
{   // creating the varibales
    int n, a, b, ans, quotient;

    // a menu style system for the accessing the functions
    printf("Enter the Number 1 - Add, 2 - Diffrence, 3 - Multiply, 4 - Divison, 5 - Modulus\n>");
    scanf("%d", &n);

    switch(n){
        case 1: sum();
                break;
        
        case 2: printf("Enter the numbers a & b: ");
                scanf("%d %d", &a, &b);
                subtract(a,b);
                break;

        case 3: printf("Enter the numbers a & b: ");
                scanf("%d %d", &a, &b);
                ans = multiply(a,b);
                printf("%d\n", ans);
                break;
        
        case 4: printf("Enter the numbers a & b: ");
                scanf("%d %d", &a, &b);
                quotient = a/b;
                printf("%d\n", quotient);
                break; 

        case 5: printf("Enter the numbers a & b: ");
                scanf("%d %d", &a, &b);
                printf("%d\n",a % b);
                break;

        default:printf("U have given the wrong number \n Try Again \n");
                break;
    
            }
    

    return 0;
}