#include<stdio.h>
int main()

{
    int num;
    printf("enter the num (1-7)");
    scanf("%d",&num);
    switch (num)
    {
    case 1: printf("Sunday\n");
                  break;
    case 2: printf("Monday\n");
                  break;
    case 3: printf("Tuesday\n");
                  break;                            
    case 4: printf("Wednesday\n");
                  break;
    case 5: printf("Thursday\n");
                  break;
    case 6: printf("Friday\n");
                  break;
    case 7: printf("Saturday\n");
                  break;                                          
    default:
        printf("Invalid number");
    }
return 0;
}


#include<stdio.h>
int main()

{
    char day;
    printf("enter the day");
    scanf("%c",&day);
    switch (day)
    {
    case 's': printf("Sunday\n");
                  break;
    case 'm': printf("Monday\n");
                  break;
    case 't': printf("Tuesday\n");
                  break;                            
    case 'w': printf("Wednesday\n");
                  break;
    case 'T': printf("Thursday\n");
                  break;
    case 'f': printf("Friday\n");
                  break;
    case 'S': printf("Saturday\n");
                  break;                                          
    default:
        printf("Invalid day");
    }
return 0;
}
#include <stdio.h>

int operate(int a, int b);

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    int addition, multiplication, average;
    addition = operate(a, b);
    multiplication = operate(a, b);
    average = operate(a, b);

    printf("Addition: %d\n", addition);
    printf("Multiplication: %d\n", multiplication);
    printf("Average: %d\n", average);

    return 0;
}

int operate(int a, int b) {
    static int operationNumber = 0; // Used to select which operation to return

    switch (operationNumber) {
        case 0:
            operationNumber++;
            return a + b; // Addition
        case 1:
            operationNumber++;
            return a * b; // Multiplication
        case 2:
            operationNumber ++;
            return (a + b) / 2; // Average
        default:
            return 0; // Default case
    }
}
#include<stdio.h>
void sum(float a, float b);
void msum(float result, float c);
int main(){
    float a,b,c,result;
    int n;
    printf("enter p:");
    scanf("%d",&n);
    if(n==2000){
    printf("enter the value of a: ");
    scanf("%f",&a);
    printf("enter the value of b: ");
    scanf("%f",&b);
    sum(a,b);
    result=a+b;
    msum(result,c);
    return 0;
}}
void sum(float a, float b){
    printf("result: %f\n",a+b);
}
void msum(float result, float c){
    int op;
    float sum=result;
    for(int i=1;i<=5;i++){
        printf("enter the value: ");
        scanf("%f",&c);
        printf("enter the operation: ");
        scanf("%d",&op);
        if(op==1){
        sum=sum+c;
        printf("result: %f\n",sum);}
        if(op==2){
        sum=sum-c;
        printf("result: %f\n",sum);}}
}