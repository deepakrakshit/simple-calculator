#include <stdio.h>
#include <math.h>

/* ---------- Function Prototypes ---------- */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(double x, double y);
int modulus(int a, int b);
double power(double x, double y);
double squareRoot(double x);
long long factorial(int n);
void evenOdd(int n);

/* ---------- Basic Operations ---------- */
int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

double divide(double x, double y){
    return x / y;
}

int modulus(int a, int b){
    return a % b;
}

double power(double x, double y){
    return pow(x, y);
}

double squareRoot(double x){
    return sqrt(x);
}

long long factorial(int n){
    long long fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

void evenOdd(int n){
    if(n % 2 == 0)
        printf("%d is EVEN\n", n);
    else
        printf("%d is ODD\n", n);
}

/* ---------- Main Program ---------- */
int main(){

    int choice;

    while(1){

        printf("\n----- SIMPLE CALCULATOR v2 -----\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Factorial\n");
        printf("9. Even / Odd Check\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", add(a, b));
                break;
            }

            case 2: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", subtract(a, b));
                break;
            }

            case 3: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", multiply(a, b));
                break;
            }

            case 4: {
                double x, y;
                printf("Enter two numbers: ");
                scanf("%lf %lf", &x, &y);

                if(y == 0){
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2lf\n", divide(x, y));
                }
                break;
            }

            case 5: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                if(b == 0){
                    printf("Error! Modulus by zero not allowed.\n");
                } else {
                    printf("Result = %d\n", modulus(a, b));
                }
                break;
            }

            case 6: {
                double x, y;
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &x, &y);
                printf("Result = %.2lf\n", power(x, y));
                break;
            }

            case 7: {
                double x;
                printf("Enter a number: ");
                scanf("%lf", &x);

                if(x < 0){
                    printf("Error! Square root of negative number not possible.\n");
                } else {
                    printf("Result = %.2lf\n", squareRoot(x));
                }
                break;
            }

            case 8: {
                int n;
                printf("Enter a number: ");
                scanf("%d", &n);

                if(n < 0){
                    printf("Error! Factorial of negative number not defined.\n");
                } else {
                    printf("Result = %lld\n", factorial(n));
                }
                break;
            }

            case 9: {
                int n;
                printf("Enter a number: ");
                scanf("%d", &n);
                evenOdd(n);
                break;
            }

            case 10:
                printf("Exited Calculator v2. Goodbye! 👋\n");
                return 0;

            default:
                printf("Invalid choice! Please select 1–10.\n");
        }
    }

    return 0;
}
