#include <stdio.h>
#include <math.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(double x, double y);

int add(int a, int b){
        return a+b;
    }

    int subtract(int a, int b){
        return a-b;
    }

    int multiply(int a, int b){
        return a*b;
    }

    double divide(double x, double y){
        return x/y;
    }

int main(){

    int cal;
    int n=1;

    while(n == 1){
        printf("\n----- SIMPLE CALCULATOR -----\n");
        printf("Choose an option (1-5):\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Your Choice: ");
        scanf("%d", &cal);
        printf("\n");


        switch(cal){
            case 1: {
                int a,b;
                printf("ENTER YOUR FIRST NUMBER: ");
                scanf("%d", &a);
                printf("ENTER YOUR SECOND NUMBER: ");
                scanf("%d", &b);
                printf("\n");
                printf("THE SUM OF %d AND %d IS %d\n", a, b, add(a,b));
                printf("---------------------------\n");
                break;
            }

            case 2: {
                int a,b;
                printf("ENTER YOUR FIRST NUMBER: ");
                scanf("%d", &a);
                printf("ENTER YOUR SECOND NUMBER: ");
                scanf("%d", &b);
                printf("\n");
                printf("THE SUBTRACTION OF %d AND %d IS %d\n", a, b, subtract(a,b));
                printf("---------------------------\n");
                break;
            }

            case 3: {
                int a,b;
                printf("ENTER YOUR FIRST NUMBER: ");
                scanf("%d", &a);
                printf("ENTER YOUR SECOND NUMBER: ");
                scanf("%d", &b);
                printf("\n");
                printf("THE MULTIPLICATION OF %d AND %d IS %d\n", a, b, multiply(a,b));
                printf("---------------------------\n");
                break;
            }

            case 4: {
                double x,y;
                printf("ENTER YOUR FIRST NUMBER: ");
                scanf("%lf", &x);
                printf("ENTER YOUR SECOND NUMBER: ");
                scanf("%lf", &y);
                printf("\n");

                if (y == 0) {
                    printf("Error! Cannot divide by 0.\n");
                    printf("---------------------------\n");
                }
            
                else {
                    printf("THE DIVISION OF %.2f AND %.2f IS %.2f\n", x, y, divide(x,y));
                    printf("---------------------------\n");
                }

                break;
            }

            case 5: {
                printf("EXITED THE PROGRAM!\n");
                printf("---------------------------\n");
                n=0;
                break;
            }

            default: {
                printf("Invalid input! Try again.\n");
                printf("---------------------------\n");
            break;
            }
    
    }
    }
    return 0;
}
