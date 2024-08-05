// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("enter the number: ");
//     scanf("%d",&a);
//     if(a%5==0){
//     printf("a is divisible by 5 \n");
//     if(a%2==0){
//         printf("a is divisible by 2 \n");
//     }
//     else{
//         printf("a is not divisible by 2 \n");
//     }}
//     else{
//         printf("a is not divisible by 5 \n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//    int a;
//     printf("enter the number: ");
//     scanf("%d",&a);
//     if(a%5==0){
//     printf("a is divisible by 5 \n");
//     }
//     else if(a%2==0){
//         printf("a is divisible by 2 \n");}
//     else{
//         printf("a is not divisible by 5 \n");
//         printf("a is not divisible by 2");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int a,operation;
    printf("enter the value ");
    scanf("%d",&operation);
switch (operation)
{
case 1:   printf("enter the value of a: ");
            scanf("%d",&a);
            if(a%2==0){
            printf("a is divisible by 2 \n");}
            else{
            printf("a is not divisible by 2\n");}
            break;
case 2:   printf("enter the value of a: ");
            scanf("%d",&a);
            if(a%5==0){
            printf("a is divisible by 5 \n");}
            else{
            printf("a is not divisible by 5\n");}
            break;
case 3:     printf("enter the value of a: ");
            scanf("%d",&a);
            if(a%2==0 && a%5==0){
                printf("the value is divisible by 2 and 5");
            }
            else{
                printf("the value is not divisible by 2 and 5");
            }
            break;
default:
     printf("invalid number \n");
    break;
}
return 0;
}
#include<stdio.h>
int main(){
    int a =40;
    if(0<a<10){
        printf("Hello");
    }
    return 0;
}
// #include<stdio.h>

// int main() {
//     int a;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);

//     switch (a % 10) {
//         case 0:
//         case 2:
//         case 4:
//         case 6:
//         case 8:
//             printf("a is divisible by 2\n");
//             break;
//         case 5:
//             printf("a is divisible by 5\n");
//             break;
//         default:
//             printf("a is not divisible by 2 or 5\n");
//     }

//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int a;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);

//     switch (a % 10) {
//         case 0:
//         case 2:
//         case 4:
//         case 6:
//         case 8:
//             if (a % 2 == 0) {
//                 printf("a is divisible by 2\n");
//             } else {
//                 printf("a is not divisible by 2\n");
//             }
//             break;
//         case 5:
//             if (a % 5 == 0) {
//                 printf("a is divisible by 5\n");
//             } else {
//                 printf("a is not divisible by 5\n");
//             }
//             break;
//         default:
//             printf("a is not divisible by 2 or 5\n");
//     }

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char a[20];
//     scanf("%s",a);
//     printf("%s",a);
//     return 0;
// }
// #include <stdio.h>
// #include<string.h>

// int main() {
//     char userInput[100];

//     // Input
//     printf("Type something in the output box: ");
//     fgets(userInput, sizeof(userInput), stdin);
//     userInput[strcspn(userInput, "\n")] = '\0';  // Remove the trailing newline character

//     // Output
//     printf("\nOutput:\n");
//     printf("You typed: %s\n", userInput);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n; // Number of elements
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     if (n <= 0) {
//         printf("Invalid input. Number of elements should be greater than 0.\n");
//         return 1; // Exit with an error code
//     }

//     int largest, num;

//     // Input the first number
//     printf("Enter number 1: ");
//     scanf("%d", &largest);

//     for (int i = 2; i <= n; i++) {
//         printf("Enter number %d: ", i);
//         scanf("%d", &num);

//         // Compare the current number with the largest number
//         if (num > largest) {
//             largest = num;
//         }
//         printf("The largest number is: %d\n", largest);
//     }

//     // Print the largest number
//     printf("The largest number is: %d\n", largest);

//     return 0; // Exit successfully
// }
// #include <stdio.h>

// int main() {
//     int n;

//     // Input the number of elements
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     if (n <= 0) {
//         printf("Invalid input. Number of elements should be greater than 0.\n");
//         return 1; // Exit with an error code
//     }

//     // Declare an array to store the numbers
//     int numbers[n];

//     // Input the elements into the array
//     for (int i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &numbers[i]);
//     }

//     // Find the largest number in the array
//     int largest = numbers[0];
//     for (int i = 1; i < n; i++) {
//         if (numbers[i] > largest) {
//             largest = numbers[i];
//         }
//     }

//     // Print the largest number
//     printf("The largest number is: %d\n", largest);

//     return 0; // Exit successfully
// }
#include <stdio.h>

int main() {
    int a = 5;  // Assignment: the value 5 is assigned to the variable a
    int b = 10; // Assignment: the value 10 is assigned to the variable b
    int result;

    // Using the equality operator to compare a and b
    if (a == b) {
        printf("a and b are equal\n");
    } else {
        printf("a and b are not equal\n");
    }

    // Using the assignment operator inside an if condition (common mistake)
    if (a = b) { // Note: This is assignment, not comparison
        printf("This will always print because a = b assigns 10 to a, which is true\n");
    }

    // Correct way to compare a and b after assignment
    if (a == b) {
        printf("Now a and b are equal\n");
    } else {
        printf("Now a and b are not equal\n");
    }

    return 0;
}

#include<stdio.h>
int main(){
    int a;
    printf("enter the value: ");
    scanf("%d",&a);
    if(a==2){
        printf("pallabi");
    }
    else if(a==5){
       printf("pallabi"); 
    }
    else{
        printf("invalid");
    }
    return 0;
}
#include<stdio.h>
int main(){
    char a[2];
    printf("enter the name: ");
    scanf("%s",a);
    printf("%s",a);
    return 0;
}
#include<stdio.h>
int main(){
    int a=2,b=3;
    printf("sum is: %d",a+b);
    return 0;
}
#include<stdio.h>
int sum(int x, int y);
int main(){
    int a=2,b=3;
    //printf("address of a: %d and b: %d",&a,&b);
    sum(a,b);//call by value
    printf("sum is: %d",sum(a,b));
    return 0;
}
int sum(int x, int y){
    //printf("address of x: %d and y: %d",&x,&y);
    return x+y;
}
#include<stdio.h>
int main(){
    int a;
    for(int i=0;i<5;i++){
        printf("Enter the value: ");
        scanf("%d",&a);
        if(a==2){
            printf("Re-enter the value!\n");
            i--;
            continue;
        }
    }
    return 0;
}
#include<stdio.h>
int addition(int a);
int main(){
    int a;
    printf("addition is : %d", addition(a));
    return 0;
    }
int addition (int a){
    a=0;
    for(int i = 0; i<=20; i++){
        a = a + i;
    }
return a;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        printf("%d.Enter the value of array[%d]: ",i+1,i);
        scanf("%d",&array[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d.Enter the value of array[%d]: %d\n",i+1,i,array[i]);
    }
    return 0;
}
#include<stdio.h>
void x(int array[],int n);
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int y[size];
    x(y,size);
    return 0;
}
void x(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d=>Enter the element of array[%d]: ",i+1,i);
        scanf("%d",&array[i]);
    }
    printf("The elements are: \n");
    for(int i=0;i<n;i++){
        printf("%d==>Array[%d]: %d\n",i+1,i,array[i]);
    }
}
#include<stdio.h>
int main(){
    char array[7];
    for(int i=0;i<7;i++){
        printf("Enter the character: ");
        scanf(" %c",&array[i]);
    }
    printf("My name is: ");
    for(int i=0;i<7;i++){
        printf("%c",array[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        printf("Element[%d] is: %d\n",i,array[i]*array[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    char a;
    printf("Enter Name: ");
    scanf("%c",&a);
    printf("My name is : %c",a);
    return 0;
}

#include<stdio.h>
int main(){
    char x[7];
    for(int i=0;i<7;i++){
    printf("Enter The Character: ");
    scanf(" %c",&x[i]);
    }
    printf("My name is: ");
    for(int i=0;i<7;i++){
        printf("%c",x[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        printf("%d.Enter The Element: ",i+1);
        scanf("%d",&x[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(x[i]%2==0){
            printf("The Even Numbers is: %d present in the Array[%d]\n",x[i],i);
            count++;
        }
    }
    printf("There are %d numbers of Even number present in the array.",count);
    return 0;
}
#include<stdio.h>
#include<math.h>
void number(int n,int array[]);
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int x[n];
    number(n,x);
    return 0;
}
void number(int n,int array[]){
    for(int i=0;i<n;i++){
        printf("%d.Enter The Element for position array[%d]: ",i+1,i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d.Element of array[%d]->%d and the square form is: %d\n",i+1,i,array[i],(int)pow(array[i],2));
    }
    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(array[i]%2==0){
    //         printf("The Even Number is: %d present at the array[%d]\n",array[i],i);
    //         count++;
    //     }
    // }
    // printf("There are %d numbers of Even Number Present in the array",count);
}
#include<stdio.h>
int main(){
    int row,column;
    printf("Enter How many rows you want: ");
    scanf("%d",&row);
    printf("Enter How many columns you want: ");
    scanf("%d",&column);
    int x[row][column];
    for(int i=0;i<row;i++){
        printf("Row %d:\n",i);
        for(int j=0;j<column;j++){
            printf("%d.Enter the element of array[%d][%d]: ",i+1,i,j);
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Array[%d][%d] is = %d\n",i,j,x[i][j]);
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int row,column;
    printf("Enter How many rows you want : ");
    scanf("%d",&row);
    printf("Enter How many column you want : ");
    scanf("%d",&column);
    int x[row][column];
    int p[row];
    for(int i=0;i<row;i++){
        printf("row %d:\n",i);
        printf("Enter Which multiplication table do you want: ");
        scanf("%d",&p[i]);
        for(int j=0;j<column;j++){
            x[i][j]= (j+1)*p[i];
        }
        //for(int j=0;j<=column;j++){//this is a wrong statement because the in previous i mentioned x[row][column] and the if the column index is 10
        //then the for loop should run from 0 to (column-1) times to store 10 elements and the condition should be for(int j=0;j<column;j++)
        //but if i write this for(int j=0;j<=column;j++) the loop runs 0 to column then it tends to store 11 elements but it exceeds the column index which is 10 for this case; 
        //So it may behave inexpected in some cases
            //x[i][j]= j*p[i];
        //}
    }
    for(int i=0;i<row;i++){
        for(int j=1;j<column;j++){
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}