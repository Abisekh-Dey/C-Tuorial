//here only call by value functoion is shown(only those programs where n is passed as argument)
#include<stdio.h>
void printhello();
int main(){
printhello(0);//if any time it shows "too few arguments in function call" then just add a 0 in the argument of the function call.
printhello(0);
printhello(0);
return 0;
}
void printhello(){
    printf("Hello!\n");
    printf("Anisekh\n");
}
#include<stdio.h>
void printhello();
void printgoodbye();
int main(){
printhello(0);
printgoodbye(0);
return 0;
}
void printhello(){
    printf("Hello!\n");
}
void printgoodbye(){
    printf("goodbye!\n");
}
#include<stdio.h>
void x1(int x);
int main(){
    int a=0;
    for(int i=0;i<3;i++){
        x1(a);
    }
    return 0;
}
void x1(int x){
    x=x+1;
    printf("%d\n",x);
}
//
#include<stdio.h>
void x2(int *x);
int main(){
    int a=0;
    for(int i=0;i<3;i++){
        printf("%d\n",&a);
        x2(&a);
    }
    return 0;
}
void x2(int *x){
    *x=*x+1;
    printf("%d\n",*x);
}

//static
#include<stdio.h>
void x3(int x);
int main(){
    static int a=0;
    for(int i=0;i<3;i++){
        x3(a);
    }
    return 0;
}
void x3(int x){
    x=x+1;
    printf("%d",x);
}
//static
#include<stdio.h>
void x4(int *x);
int main(){
    static int a=0;
    for(int i=0;i<3;i++){
        printf("%d\n",&a);
        x4(&a);
    }
    return 0;
}
void x4(int *x){
    *x=*x+1;
    printf("%d\n",*x);
}
//static
#include <stdio.h>

void increment_static_variable() {
    static int static_variable = 0;
    static_variable++;
    printf("Static variable: %d\n", static_variable);
}

int main() {
    increment_static_variable();  // Output: Static variable: 1
    increment_static_variable();  // Output: Static variable: 2
    increment_static_variable();  // Output: Static variable: 3
    return 0;
}
//Static
#include <stdio.h>

// File scope static variable
static int file_static_variable = 0;

void foo() {
    // Function scope static variable
    static int function_static_variable = 0;

    // Increment function scope static variable
    function_static_variable++;
    printf("Function static variable: %d\n", function_static_variable);
}

int main() {
    // Increment file scope static variable
    file_static_variable++;
    printf("File static variable: %d\n", file_static_variable);

    // Call foo() function multiple times
    for (int i = 0; i < 3; i++) {
        foo();
    }

    return 0;
}
//Global
#include <stdio.h>

// Global variable
int global_variable = 10;

// Function that uses the global variable
void foo() {
    printf("Global variable inside foo: %d\n", global_variable);
}

int main() {
    global_variable;
    printf("Global variable inside main: %d\n", global_variable);
    foo();  // Output: Global variable inside foo: 10
    return 0;
}

#include<stdio.h>
void add1(x,y);
int main(){
add1();
return 0;
}
void add1(x,y){
    printf("x is: %d\n",x);//This will Print some garbage value; because it don't have any value
    printf("y is: %d\n",y);//This will Print some garbage value; because it don't have any value
    int a=2,b=8;
    printf("Sum is: %d",a+b);
}
#include<stdio.h>
int add2();
int mul();
int main(){
printf("Sum is: %d",add2());
return 0;
}
int add2(){
    int a=2,b=8;
    printf("Multiplication is: %d\n",mul());
    return a+b;
}
int mul(){
    int a=2,b=8;
    return a*b;
}
#include<stdio.h>
void add3(int x,int y);
int main(){
    int x,y;
    add3(x=2,y=8);
    return 0;
}
void add3(int x,int y){
    printf("Sum is: %d",x+y);
}


#include<stdio.h>
void sum_of(int a,int b);
int main(){
int a ,b;
printf("enter the value of a : ");
scanf("%d",&a);
printf("enter the value of b : ");
scanf("%d",&b);
sum_of(a,b);
return 0;
}
void sum_of(int a,int b){
printf("the sum is : %d",a+b);
}
#include<stdio.h>
void operation(int a, int b);
int main(){
    int a=2, b=8;
    operation(a,b);
    return 0;
}
void operation(int a, int b){
    int sum=a+b;
    int product=a*b;
    int average=(a+b)/2;
    printf("sum: %d\nproduct: %d\naverage: %d\n",sum,product,average);
}
#include<stdio.h>
void operation(int a, int b);
int main(){
    int a, b;
    printf("a is: %d\n",a);//This will generate some Garbage value
    printf("b is: %d\n",b);//This will generate some Garbage value
    operation(a,b);
    return 0;
}
void operation(int a, int b){
    printf("a is: %d\n",a);//This will generate some Garbage value
    printf("b is: %d\n",b);//This will generate some Garbage value
    
    a=2, b=8;
    int sum=a+b;
    int product=a*b;
    int average=(a+b)/2;
    printf("sum: %d\nproduct: %d\naverage: %d\n",sum,product,average);
}
#include<stdio.h>
void operation(int x, int y);
int main(){
    int a, b;
    operation(a,b);
    return 0;
}
void operation(int x, int y){
    printf("x is: %d\n",x);//This will generate some Garbage value
    printf("y is: %d\n",y);//This will generate some Garbage value
    int a=2, b=8;
    int sum=a+b;
    int product=a*b;
    int average=(a+b)/2;
    printf("sum: %d\nproduct: %d\naverage: %d\n",sum,product,average);
}

#include<stdio.h>
int addition(int a,int b);
int main(){
int a ,b;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
addition(a,b);
//printf("\n%d",addition(a,b));
return 0;
}
int addition(int a,int b){
printf("the sum is : %d\n",a+b);
printf("the subtraction is : %d",a-b);
return 5;
}


#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int a,b;
    int result = add(5, 3); // Calling the add function
    printf("The sum is: %d\n", result);
    printf("value of a is: %d\n", a);//this will not print the value of a = 5
    printf("value of b is: %d\n", b);//this will not print the value of b = 3
    return 0;
}

// Function definition
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

#include<stdio.h>
int sum(int a, int b); //function declaration
int main()
{
    int a,b;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    int s =sum(a,b); //function calling
    printf("the sum will be : %d",s);
    return 0;
}
int sum(int a, int b){//function defination
    return a+b;
}

#include<stdio.h>
int add(int a,int b);
int main(){
    int a,b;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);
    printf("the addition will be : %d \n", add(a,b));
    return 0;
}
int add(int a, int b){
    return a+b;
}

#include<stdio.h>
void printhello();
void printgoodbye();
int main(){
    char a;
    printf("enter H or G : ");
    scanf("%c",&a);
    if(a== 'H'){
        printhello(0);
    }
    else{
        printgoodbye(0);
    }
     return 0;
}
void printhello(){
    printf(" hello \n");
}
void printgoodbye(){
    printf(" goodbye \n");
}

#include<stdio.h>
void number(int a);
int main()
{
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    number(a);//argument is a


    return 0;
}
void number(int x){//argument is copied here from the function as formal parameter ; whatever variable name i write inside the formal parameter the value of argument will be copied there 
    for(int i=1;i<=10;i++)
    printf("thr value will be : %d*%d=%d \n", x,i,x*i);
}
// void number(int a){
//     for(int i=1;i<=10;i++)
//     printf("thr value will be : %d*%d=%d \n", a,i,a*i);//this will also print the samme result
// }



#include<stdio.h>
#include<math.h>
float circlearea(float pi,float r);
int squarearea(int a);
int rectanglearea(int a, int b);
int main(){
    int a,b;
    float pi,r;
    printf("enter the value of radius :");
    scanf("%f",&r);
    printf("enter the value of pi :");
    scanf("%f",&pi);
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    printf("the area of the circle will be : %f \n", circlearea(pi,r));
    for(int i=1;i<=20;i++){
      printf("the area of the rectangle will be : %d \n", rectanglearea(a,b));
    }

    printf("the area of the square will be : %d \n",squarearea(squarearea(squarearea(a))));
    printf("the area of the square will be : %d \n",squarearea(a));
    printf("the area of the square will be : %d \n",squarearea(a));
    return 0;
}
float circlearea(float pi,float r){
    return pi*pow(r,2);
}
int squarearea(int a){
    return a*a;
}
int rectanglearea(int a, int b){
    return a*b;
}

//Recurssive Function
#include<stdio.h>
void printhello(int count);
int main(){
printhello(5);
return 0;
}
void printhello(int count){
    if(count==0){
        return;
    }
    printf("Hello!\n");
    printhello(count-1);
}

#include<stdio.h>
#include<math.h>
int function(int count,int a);
void main(){
    int a;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("f(a) : %d \n",function(3,a));//count should be a non zero value
}
int function(int count,int a){
    if(count==0){
        return 0;
    }
    return pow(a,2);//This is not a recurssive function
}
#include<stdio.h>
#include<math.h>
int f(int x);
int main(){
    int x;
    printf("enter the value of x :");
    scanf("%d",&x);
    printf("f(f(f(x))) will be : %d",f(x));
    return 0;
}
int f(int x){
    return pow(x,8) ;
}

#include<stdio.h>
int a(int y);//here a is a function
int main(){
    int x ,y;
    printf("enter the value of x :");
    scanf("%d",&x);
    y=x-1;
    printf("a(a(a(a-1))) will be :%d ", a(a(a(y))));
    return 0;
}
int a(int y){
    return y*y;
}
#include<stdio.h>
int a(int x);//here a is a function
int main(){
    int x ,y;
    printf("enter the value of x :");
    scanf("%d",&x);
    y=x-1;
    printf("a(a(a(a-1))) will be :%d ", a(a(a(y))));
    return 0;
}
int a(int x){
    return x*x;
}

#include<stdio.h>
int naturalnumbersum(int n);
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("The sum of N natural numbers will be : %d ",naturalnumbersum(n));
    return 0;
}
int naturalnumbersum(int n){
    return n*(n+1)/2;
}
#include<stdio.h>
int naturalnumbersum(int n);
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("The sum of %d natural numbers will be : %d ",n,naturalnumbersum(n));
    return 0;
}
int naturalnumbersum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

#include <stdio.h>

int naturalnumbersum(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is: %d\n", n, naturalnumbersum(n));
    return 0;
}

int naturalnumbersum(int n) {
    // Base case: If n is 0, return 0.
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: Calculate the sum of (n-1) natural numbers and add n to it.
        return n + naturalnumbersum(n - 1);
    }
}
 
#include<stdio.h>
int sum_N_numbers(int n);
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("The sum of %d numbers : %d",n,sum_N_numbers(n));
    return 0;
} 
int sum_N_numbers(int n){
    if (n==0){
        return 0;
    }
    else{
        return n + sum_N_numbers(n-1);
    }
}

#include<stdio.h>
int factorial_N_numbers(int n);
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("The factorial of %d numbers : %d",n, factorial_N_numbers(n));
    return 0;
} 
int factorial_N_numbers(int n){
    if (n==0){
        return 1;
    }
    else{
        return (n * factorial_N_numbers(n-1));
    }
}

#include<stdio.h>
float celcius(float n);
int main(){
    float n;
    printf("enter the value of n :");
    scanf("%f",&n);
    printf("If the cencius tempareture %f the ferenheight tempareture will be : %f", n, celcius(n));
    return 0;
}
float celcius(float n){
    return (n*9/5)+32;
}

#include<stdio.h>
int fibonaccinumber(int n);
int main(){
    int n;
    printf("enter the number n :");
    scanf("%d",&n);
    printf("The value of %d in the fibonacci sequence will be : %d",n,fibonaccinumber(n));
    return 0;
}
int fibonaccinumber(int n){
    if(n<=0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
    return (fibonaccinumber(n-1)+fibonaccinumber(n-2));
    }
}
#include<stdio.h>
int main(){
    int n,result;
    int prev=0;
    int current=1;
    printf("enter the value of n :");
    scanf("%d",&n);
        for(int i=1;i<=n;i++){
            result= prev+current;
            prev=current;
            current=result;
            printf("The value of %d will be : %d \n",i, result); //this will display the result one after another till n value because here the printf statement inside the loop.
        }
        return 0;
    }
#include<stdio.h>
int main(){
    int n, a=0,b=1,sum;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
       sum=a+b;
       a=b;
       b=sum;}
printf("the value of %d in the fibonacci series will be : %d \n",n,sum);// this will display the n value's sum in the fibonacci series because here thr printf statement is outside of the for loop basically in the main function
return 0;
}
#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    printf("the sum of %d in fibonacci series will be : %d",n,fibonacci(n));
    return 0;
}
int fibonacci(int n){
    int sum,a=0,b=1;
    for(int i=2;i<=n;i++){
        sum = a+b;
        a = b;
        b = sum;
    }
    return sum;
}
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The value of %d in the Fibonacci sequence is: 0\n", n);
    } else if (n == 1) {
        printf("The value of %d in the Fibonacci sequence is: 1\n", n);
    } else {
        int prev = 0; // Initialize the Fibonacci numbers for n=0
        int current = 1; // Initialize the Fibonacci numbers for n=1
        int result = 0;

        for (int i = 2; i <= n; i++) {
            result = prev + current;
            prev = current;
            current = result;
        }

        printf("The value of %d in the Fibonacci sequence is: %d\n", n, result);
    }

    return 0;
}
//Printing of a fibonacci sequence till n number
#include<stdio.h>
int fib(int n);
int main(){
    int number;
    printf("Enter The Number: ");
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
        printf("Sum of Fibonacci Number %d is: %d\n",i,fib(i));
        }
        return 0;
}
int fib(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else {
        int x=0;
        int y=1;
        int sum=0;
        for(int i=2;i<=n;i++){
            sum=x+y;
            x=y;
            y=sum;
        }
        return sum;
    }
}

#include<stdio.h>
int sumofnumbers(int n);
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("The sum of digits of numbers %d will be: %d ",n,sumofnumbers(n));
return 0;
}
int sumofnumbers(int n){
    if(n==0){
        return 0;
    }
    else{
    int unit_digit = n%10;
    return unit_digit + sumofnumbers(n/10);}
}
#include <stdio.h>

int sumOfDigits(int n);

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The sum of digits of number %d will be: %d\n", n, sumOfDigits(n));
    return 0;
}

int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: If the number is 0, return 0.
    } else {
        int unitDigit = n % 10;
        return unitDigit + sumOfDigits(n / 10); // Recursively calculate the sum of digits.
    }
}
#include<stdio.h>
#include<math.h>
float squareroot(int n);
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("the square root value will be of %d: %f",n,squareroot(n));
    return 0;
}
float squareroot(int n){
    return sqrt(n);
}
//Check the Number is Prime or Not
#include<stdio.h>
void prime(int x);
int main(){
    int a;
    printf("Enter The Number: ");
    scanf("%d",&a);
    prime(a);
    return 0;
}
void prime(int x){
    int count=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){//If the number is prime there will present only 2 conditions
        printf("%d is a Prime number",x);
    }
    else{
        printf("%d is not a Prime number",x);
    }
}
//Printing any number in reverse order without using for loop and array
#include<stdio.h>
int rev(int x);
void main(){
    int a;
    printf("Enter The Value of a: ");
    scanf("%d",&a);
    printf("-is The Reversed Number of %d",a,rev(a));//This will print after execution of all printing statements of the function rev(int x)
}
int rev(int x){
    if(x==0){
        return 0;
    }
    else{
        int a=x%10;
        printf("%d",a);//This will print first 
        rev(x/10);//Recurssive call
    }
}