#include <stdio.h>
#include <math.h>

int main(void){

    printf("Welcome to the C calculator!\n");

    double x, y;
    while(1){
        printf("Enter any two numbers:");
        scanf("%lf %lf", &x, &y);

        printf("Choose your operation: +, -, *, /, %%,power(^),sqrt(s)");

        char operation;

        scanf(" %c", &operation);

        if (operation == '+'){
            printf("Addition: %.2lf + %.2lf = %.2lf\n", x, y, x + y);
        } 
        else if (operation == '-'){
            printf("Subtraction: %.2lf - %.2lf = %.2lf\n", x, y, x - y);
        }
        else if (operation == '*'){
            printf("Multiplication:%.2lf * %.2lf = %.2lf\n", x, y, x * y);
        }
        else if (operation == '/'){
            if (y != 0){
                printf("Division: %.2lf / %.2lf = %.2lf\n", x, y, x / y);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        }
        else if (operation == '%'){
            if ((int)y != 0){
                printf("Modulus: %d %% %d = %d\n", (int)x, (int)y, (int)x % (int)y);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
        }
        else if (operation == '^'){
            char power_choice;
            printf("Do you want to calculate x^y or y^x? (Enter 'x' for x^y or 'y' for y^x): ");
            scanf(" %c", &power_choice);

            if (power_choice == 'x') {
                printf("Power: %.2lf ^ %.2lf = %.2lf\n", x, y, pow(x,y));
            } else if (power_choice == 'y') {
                printf("Power: %.2lf ^ %.2lf = %.2lf\n", y, x, pow(y,x));
            } else {
                printf("Invalid choice, Please try again.\n");
            }
        }
        else if (operation == 's'){
            if (x >= 0 && y >= 0){
                char sqrt_choice;

                printf("Do you want to calculate sqrt(x),sqrt(y),sqrt(x+y),sqrt(x-y),sqrt(y-x),sqrt(x*y),sqrt(x/y),sqrt(y/x)? (Enter 'x' for sqrt(x), 'y' for sqrt(y), '+' for sqrt(x+y), '-' for sqrt(x-y), 'z' for sqrt(y-x), '*' for sqrt(x*y), '/' for sqrt(x/y)): ");

                scanf(" %c", &sqrt_choice);

                if (sqrt_choice == 'x') {
                    printf("Square root of x : sqrt(x) = %.2lf\n", sqrt(x));
                } 
                else if (sqrt_choice == 'y') {
                    printf("Square root of y :sqrt(y) = %.2lf\n", sqrt(y));
                } 
                else if (sqrt_choice == '+') {
                    printf("Square root of x+y: sqrt(x+y) = %.2lf\n", sqrt(x+y));
                } 
                else if (sqrt_choice == '-') {
                    if (x-y >= 0) {
                        printf("Square root of x-y: sqrt(x-y) = %.2lf\n", sqrt(x-y));
                    } else {
                        printf("Error: Cannot calculate square root of a negative number.\n");
                    }
                } 
                else if (sqrt_choice == 'z') {
                    if (y-x >= 0) {
                        printf("Square root of y-x: sqrt(y-x) = %.2lf\n", sqrt(y-x));
                    } else {
                        printf("Error: Cannot calculate square root of a negative number.\n");
                    }
                } 
                else if (sqrt_choice == '*') {
                    if (x*y >= 0) {
                        printf("Square root of x*y: sqrt(x*y) = %.2lf\n", sqrt(x*y));
                    } else {
                        printf("Error: Cannot calculate square root of a negative number.\n");
                    }
                } 
                else if (sqrt_choice == '/') {
                    if (y != 0 && x/y >= 0) {
                        printf("Square root of x/y: sqrt(x/y) = %.2lf\n", sqrt(x/y));
                    } else {
                        printf("Error: Cannot calculate square root of a negative number or division by zero.\n");
                    }
                } 
                else {
                    printf("Invalid choice, Please try again.\n");
                }
            }
        }
        else {
            printf("Invalid operation. Please try again.\n");
        }

        char choice;

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y') {
            break;
        }
        else {
            printf("\n");
        }
    }

    return 0;
}
