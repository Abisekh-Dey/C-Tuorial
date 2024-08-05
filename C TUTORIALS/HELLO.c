#include<stdio.h>
void main()
{
    printf("hello");
    return ;
}
#include<stdio.h>
int main(){
    printf("Hello");
    return 0;
}
#include<stdio.h>
int main(){
    int x= printf("Hello");
    printf("%d",x);
    return 0;
}
#include<stdio.h>
int main(){
    float a=25,b=2;
    printf("%.f",a+b);///////vvi .f to eleminate 0's in result ;.2f or .3f or so on when we add numbers it means 2 or 3 values after "."
    return 0;
}
#include<stdio.h>
int main(){
    printf("sum is %d",8+7);
    return 0;
}
#include<stdio.h>
int main(){
    printf("sum is %f",12.3+45.8);
    return 0;
}
#include<stdio.h>
int main(){
    printf("%d",(0x23),(23));
    return 0;
}
#include<stdio.h>
int main(){
    printf("%d",(023),(23));
    return 0;
}
//EXAMPLE OF LOGICAL NOT//
//true will be false and false will be true using (logical !)
#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(!(x==10)){//when we enter 10 as the value of x then the condition x==2 becomes true but there was a ! before x==10; so ! will change the true statement into false
    //and when the value of x!=10 then (x==10) this part will be false but there was a ! before x==10; so ! will change the false statement into true  
        printf("This is an example of Logical not!");
    }
    else{
        printf("This is not an example of Logical not!");
    }
    return 0;
}
#include<stdio.h>
int main()
{
int a=2,b;
//a=b;
b=a;
printf("%d",b);
return 0;
}
#include<stdio.h>
int main(){
    int a=2,b;
    a==b;//here value of a will not be equal to b because b don't have any value
    printf("b is %d",b);// value of b will be 0
    return 0;
}
#include<math.h>
int main(){
    int a, b;
    float r,pi;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    printf("enter the value of r :");
    scanf("%f",&r);
    printf("enter the value of pi :");
    scanf("%f",&pi);
    printf("the are of circle will be : %f \n",pi*pow(r,2));
    for (int i=1;i<=20;i++){
        printf("the area of the rectangle will be :%d \n",a*b);
    }
    printf("the area of the square will be : %d \n",a*a);
    printf("the area of the square will be : %d \n",a*a);
    printf("the area of the square will be : %d \n",a*a);
    return 0;
}

#include <stdio.h>

// Define your function f here
double f(double x) {
    // Replace this with the actual definition of f
    return x * x; // Example function: f(x) = x^2
}

int main() {
    double x;

    // Input value for x
    printf("Enter a value for x: ");
    scanf("%lf", &x);

    // Calculate f(f(f(x)))
    double result = f(f(f(x)));

    // Print the result
    printf("f(f(f(x))) = %f\n", result);

    return 0;
}

#include<stdio.h>
int main(){
    int x,fx,ffx,fffx;
    printf("enter the value of x :");
    scanf("%d",&x);
    fx=x*x;
    ffx=fx*fx;
    fffx=ffx*ffx;
    printf("the value : %d", fffx);
    return 0;

}
#include<stdio.h>

int main(){
    int a ;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("a(a(a(a-1))) will be :%d ", a*(a*(a*(a-1))));
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum =sum+ i;
    }
    printf("The sum of the first %d numbers is: %d\n",n, sum);
    return 0;
}

#include<stdio.h>
int swap(int a, int b);
int swapwithoutusingthirdvariable(int a, int b);
int swapwithoutusingthirdvariable2(int a, int b);
void main(){
    int a=3,b=2;
    printf("The value of a will be before swapping: %d\n",a);
    printf("The value of b will be before swapping: %d\n",b);
    swap(a,b);
    swapwithoutusingthirdvariable(a,b);
    swapwithoutusingthirdvariable2(a,b);
    return;
}
int swap(int a, int b){
    int temp=a;
    a=b;
    b=temp; 
    printf("The value of a will be after swapping: %d\n",a);
    printf("The value of b will be after swapping: %d\n",b);
    return 0;
}
int swapwithoutusingthirdvariable(int a,int b){
    a = a+b;//a=3+2=5// Here at first I take a=3,b=2
    b = a-b;//b=5-2=3//b=3
    a = a-b;//a=5-3=2//a=2
    printf("The value of a will be after swapping: %d\n",a);
    printf("The value of b will be after swapping: %d\n",b);
    return 0;
}
int swapwithoutusingthirdvariable2(int a, int b){
    a = a^b; //XOR operation a=3=11 in binary and b=2=01 in binary 11 xor 10 = 01=1 in decimal 
    b = a^b;//1 xor 2 = 01 xor 10 = 11 = 3 in decimal //hence b=3
    a = a^b;//1 xor 3 = 01 xor 11 = 10 = 2 in decimal //hence a=2
    printf("The value of a will be after swapping: %d\n",a);
    printf("The value of b will be after swapping: %d\n",b);
    return 0;
}
//*******VVI*******//
#include<stdio.h>
int main(){
    char a='a'+1;//This is not applicable in python; it is applicable in js but in js if i do this it will convert 1 into string first then string 1 will be concatinated with a and the output will be a1
    printf("%c",a);
    return 0;
}
#include<stdio.h>
int main(){
    char a='a';
    printf("%c\n",a);
    printf("%d",a);//ascii value of a will print
    return 0;
}
#include<stdio.h>
int main(){
    char a = 'abisekh';//char can't store long datatype ;if we do so it will generate overflow warning
    //printf("enter the value of a: ");
    //scanf("%c",&a);
    printf("a = %d",a);//here only print the ascii value of the last entered word (h) and it is 104 
    return 0;
}
#include<stdio.h>
int main(){
    char a = 'abisekh';//char can't store long datatype ;if we do so it will generate overflow warning
    //printf("enter the value of a: ");
    //scanf("%c",&a);
    printf("a = %c",a);//here only print the last entered word (h)
    return 0;
}
#include<stdio.h>
int main(){
    char a ;
        printf("a = %d",a);//here only print the value of a ; as here no value is stored inside a so it will print 0 
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    printf("a = %d",a);//it will print a garbage value because no value is assigned to a
    return 0;
}
#include<stdio.h>
int main(){
    char a='a';
    printf("a = %d",a);
    return 0;
}
#include<stdio.h>
int main(){
    int a=2;
    printf("a = %c",a);
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("The Value of a will be %d",a);
    return 0;
}
#include<stdio.h>
int main(){
    char a ;
    printf("enter the value of a: ");
    scanf("%c",&a);
    printf("a = %c",a);//when we store any value in a it will print the value of a ; obviously it will be a character value
    printf("a = %d",a);//it will print the ascii value of the caharacter stored in a (Index of character)
    return 0;
}
#include<stdio.h>
int main(){
    char a;
    printf("enter the value of a: ");
    scanf("%d",&a);//char a=2; 2 is an integer
    printf("a = %c",a);//it will print the 2nd ascii character (charcter at index)
    printf("a = %d",a);//char a=2
    return 0;
}

#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("a = %c",a);//it will print the 2nd ascii character (charcter at index)
    printf("a = %d",a);//int a=2
    return 0;
}
#include <stdio.h>

int main() {
    char a = 65; // ASCII value of 'A'

    // Print the character itself
    printf("Character: %c\n", a);//(charcter at index)

    // Print the ASCII value
    printf("ASCII Value: %d\n", a);

    return 0;
}
#include<stdio.h>
int main(){
    float a = 5.0,b=7.0;
    int x= ++a+b++;
    float y= a--/b--;
    printf("%f",x*y);
    return 0;
}
#include <stdio.h>

int main() {
    int a = 65; // ASCII value of 'A'

    // Print the character itself
    printf("Character: %c\n", a);//(charcter at index)

    // Print the ASCII value
    printf("ASCII Value: %d\n", a);

    return 0;
}

#include<stdio.h>
int main(){
    int a;
    //printf("a = %d\n",a);//because of no value is stored in a so it will print a garbage value of a
    printf("enter the value of a: ");
    scanf("%c",&a);// variable a is integer type but value of a is character type
    printf("a = %c",a);//int a = char 2; value of a will be 2; because value of a is charter 2 and it prints the character value of a so no chage of datatype is required here so it will print 2
    printf("a = %d",a);//it will generate a garbage value because in c if integer variable's value is character type then i have to mention this before printing that value otherwise it will generate a garbage value 
    return 0;
}
#include<stdio.h>
// here is the example how we can implement any integer variable's value in character data type 
int main() {
    int a;
    printf("a = %d", a); // It will print garbage value because 'a' is uninitialized
    char charValue;// Use a char variable for reading characters
    printf("\nEnter the value of a: ");
    scanf("%c", &charValue); // Notice the space before %c to consume any whitespace characters, including newline
    a = charValue; // Assign the character value to the integer variable
    printf("a = %c\n", a); // It will print the character value stored in 'a'
    printf("a = %d", a); // It will print the ASCII value of the character

    return 0;
}

#include<stdio.h>
int main(){
    char a[20]={'a','b','i','s','e','k','h'};//char a[20]; here it is an array
        printf("a is: = %c",a[2]);//printf("a is: = %d",a[2]);
    return 0;
}
#include<stdio.h>
int main(){
    int a[20]={'a','b','i','s','e','k','h'};//int a[20]; here it is an array
        printf("a is: = %c",a[2]);//printf("a is: = %d",a[2]);
    return 0;
}

#include<stdio.h>
int main(){
    int a, x='a';
    printf("%d\n",x);
    printf("%c\n",x);
    return 0;
}
#include<stdio.h>
int main(){
    int a, x='a';
    printf("%d\n",x);
    printf("%c\n",x);
    return 0;
}

#include<stdio.h>
int main(){
    for(int i=0;i<=2;i++){
        for(int i=0;i<=2;i++){
             printf(" * ");
         }
        printf(" \n");
    }
return 0;
}

#include<stdio.h>
int main(){
    for(int i=0;i<=2;i++){
        for(int j=i;j<=i;j++){
             printf(" * ");
         }
        printf(" \n");
    }
return 0;
}
#include<stdio.h>
int main(){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=i;j++){
             printf(" * ");
         }
        printf(" \n");
    }
return 0;
}
#include<stdio.h>
int main(){
    for(int i=0;i<=2;i++){
             printf("* * * * *\n");
         }
return 0;
}

#include<stdio.h>
int main(){
    int a= 'hello';//**
    printf("%d",a);
    return 0;
}

#include<stdio.h>
int main(){
    int a = 20;
    int b = 30;
    int c = 10;
    {
        int c = a+b;
        printf("%d\n",c);
    }
    printf("%d",c);
    return 0;
}
#include<stdio.h>
int main(){
    for(int i=1;i<=0;i++){
        printf("%d",i);}
        return 0;
}
//*
#include<stdio.h>
int main(){
    int i=0;
    for (i;i<5;i++){
        printf("%d\n",i);
    }
    printf("%d",i);
    return 0;
}

#include<stdio.h>
int main(){
    int sum = 20, c=5,c1=6;
            printf("%u\n",&sum);

    sum = sum +c;
    printf("%d\n",sum);
        printf("%d\n",&sum);
                printf("%u\n",&sum);

    sum = sum +c1;
    printf("%d\n",sum);
        printf("%d\n",&sum);

    return 0;
}
#include<stdio.h>
void allinone(float a,float b);
int main(){
    float a,b;
    printf("enter value of a: ");
    scanf("%f",&a);
    printf("enter value of b: ");
    scanf("%f",&b);
    allinone(a,b);
    return 0;
}
#include<stdio.h>
int main(){
    int a=10;
    if(a%2==0){
        printf("a is even");
    }
    else{
        printf("a is odd");
    }
    return 0;
}
#include<stdio.h>
int main(){
    for(int i=0;i<=50;i++){
        printf("%d",i);
    }
    return 0;
}
//VVI
#include<stdio.h>
int main(){
    int a=5;
    printf("%d\n",a);
    int b=a++;
    printf("%d\n",b);//output will be 5 because b is assigned the value of a before the increment takes place.
    printf("%d\n",a);//output will be 6 because value of a is increasing due to a++ 
    printf("%d\n",a++);//output will be 6 because of it is getting the previous incremented value
    printf("%d\n",a);//output will be 7 because of post increament of a++
    return 0;
}
#include<stdio.h>
int main(){
    int a=5;
    printf("%d\n",a);
    int b=a--;
    printf("%d\n",b);//output will be 5 because b is assigned the value of a before the increment takes place.
    printf("%d\n",a);//output will be 6 because value of a is increasing due to a++ 
    printf("%d\n",a--);//output will be 6 because of it is getting the previous incremented value
    printf("%d\n",a);//output will be 7 because of post increament of a++
    return 0;
}

#include<stdio.h>
int main(){
    int a=5;
    int b=++a;
    printf("%d\n",b);//output will be 6 because b is assigned the value of a after the increment takes place.
    printf("%d\n",a);//output will be 6 due to the pre increament operatior
    printf("%d",++a);//output wiil be 7 because in the printf statement when we ++a again it inreament the value of a
    return 0;
}
#include<stdio.h>
int main(){
    int a=5;
    int b=--a;
    printf("%d\n",b);//output will be 6 because b is assigned the value of a after the increment takes place.
    printf("%d\n",a);//output will be 6 due to the pre increament operatior
    printf("%d",--a);//output wiil be 7 because in the printf statement when we ++a again it inreament the value of a
    return 0;
}
#include<stdio.h>
int main(){
    int a=5;
    int b= ++a + a++;
    printf("b is %d",b);//output = 13
    return 0;
}
// b = ++a + a++;
// b = 6 + 7;  // Evaluate the expression
// b = 13;  // Final value of b
#include<stdio.h>
int main(){
    int a=5;
    int b= ++a - a++;
    printf("b is %d",b);//output = 1
    return 0;
}


#include<stdio.h>
int main(){
    int a=5;
    int b= a++ + ++a;
    printf("b is %d",b);//output = 12
    return 0;
}
// b = a++ + ++a;
// b = 5 + 7;  // Evaluate the expression
// b = 12;  // Final value of b
#include<stdio.h>
int main(){
    int a=5;
    int b= a++ - ++a;
    printf("b is %d",b);//output -2
    return 0;
}

#include<stdio.h>
int main(){
    printf("%f",(2+3)*(4.0/5)*(9*27));
    return 0;
}

#include<stdio.h>
int main(){
    int a=5;
    int b=++a - (-a--);//++a=6;a--=(6-1)=5
    printf("b is %d\n",b);//oputput will be ++a-(-(a--))=6-(-(5))=11
    //printf("%d\n",++a);//6
    printf("%d\n",-a--);//-5
    return 0;
}

#include<stdio.h>
int main(){
    int a=5;
    int b=++a + a++ - a--;//++a=6;a++=6;a--=(7-1)=6 increament is occuring because prebious post increament ++ is there
    printf("b is %d\n",b);//output will be ++a+a++(-a--)=6+6-6=6
    printf("%d",++a);
    return 0;
}
#include<stdio.h>
int main(){
    int a=5;
    int b=a++ + ++a - --a;//a++ = 5 after a++ value of a is 6 due to post increament
    //++a = 7(5+1for (a++) +1 for (++a)) after ++a value of a is 7 due to pre increament 
    //--a=(7-1)=6 after --a value of a is 6 due to pre decreament
    printf("b is %d\n",b);//output will be (++a + a++ - --a)=5+7-6=6
    printf("%d",a++);//--a=(6-1)=5
    return 0;
}
#include<stdio.h>
int main(){
    int a=5;
    int b=a++ - ++a + --a;
    printf("b is %d",b);//output = 4
    return 0;
}
#include<stdio.h>
int main(){
    int a=5;
    int b=++a + a++ + --a;//++a=6 now a=6
    //a++=6+1=7 now a=7
    //--a=(7-1)=6
    printf("b is %d\n",b);//output will be ++a + a++ + --a=6+7+6=19
    printf("%d\n",++a);
    return 0;
}
#include<stdio.h>
int main(){
    int a=5;
    int b=++a - a++ + --a;//
    printf("b is %d",b);//output 7
    return 0;
}
#include<stdio.h>
int main(){
    int a=5;
    int b=++a + a++ + a--;//++a=6;a--=7;a++=7
    printf("b is %d",b);//output = 6+7+7=20
    return 0;
}

#include<stdio.h>
int main(){
    int a=5;
    int b=++a + a-- + a++;//++a=6;a--=5;a++=5
    printf("b is %d",b);//output = 6+5+5=16
    return 0;
}
//XOR operation in C which is defined by '^'
#include<stdio.h>
int main(){
    int x=3,y=2;
    int sum = (x^y);
    printf("Ans is %d",sum);
    return 0;
}
//XOR operation in C which is defined by '^'
#include<stdio.h>
int main(){
    int x=3;
    int sum = (x^x);
    printf("Ans is %d",sum);
    return 0;
}
#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, base = 1, remainder;

    for (; binaryNumber != 0; binaryNumber /= 10, base *= 2) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
    }

    return decimalNumber;
}

int main() {
    long long binaryNumber;

    // Input binary number from user
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    // Calling the function to convert binary to decimal
    int decimalNumber = binaryToDecimal(binaryNumber);

    // Displaying the result
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
#include <stdio.h>

// Function to convert decimal to binary
long long decimalToBinary(int decimalNumber) {
    long long binaryNumber = 0;
    int remainder;
    long long i;

    for (i = 1; decimalNumber != 0; decimalNumber /= 2, i *= 10) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * i;
    }

    return binaryNumber;
}

int main() {
    int decimalNumber;

    // Input decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Calling the function to convert decimal to binary
    long long binaryNumber = decimalToBinary(decimalNumber);

    // Displaying the result
    printf("Binary equivalent: %lld\n", binaryNumber);

    return 0;
}
#include <stdio.h>

// Function to convert decimal to binary
long long decimalToBinary(int decimalNumber) {
    long long binaryNumber = 0;
    int remainder;
    long long i = 1;

    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * i;
        i *= 10;
        decimalNumber /= 2;
    }

    return binaryNumber;
}

int main() {
    int decimalNumber;

    // Input decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Calling the function to convert decimal to binary
    long long binaryNumber = decimalToBinary(decimalNumber);

    // Displaying the result
    printf("Binary equivalent: %lld\n", binaryNumber);

    return 0;
}
#include<stdio.h>
#include<string.h>
void password(char x[],char y[]);
int main(){
    char x[100];
    char y[50];
    password(x,y);
    return 0;
}
void password(char x[],char y[]){
    char new_password[100];
    printf("Create Password \n");
    printf("Enter Characters: ");
    scanf("%s",x);
    if(x[0]>='a'&& x[0]<='z'){
        x[0]=x[0]-'a'+'A';
    }
    for(int i=1;x[i]!='\0';i++){
    if(x[i]>='A'&& x[i]<='Z'){
        x[i]=x[i]-'A'+'a';
    }}
    printf("Enter Special Characters: ");
    scanf("%s",y);
    char salt[]="@";
    strcpy(new_password,salt);
    strcat(new_password,x);
    strcat(new_password,y);
    strcat(new_password,salt);
    printf("New Password: %s\n",new_password);
    char password[100];
    strcpy(password,new_password);
    if(strcmp(new_password,password)==0){
        printf("Hello!!");
    }
}
#include <stdio.h>
#include <string.h>
#include <conio.h>
//#include<windows.h>

void password(char x[], char y[]);

int main() {
    char x[100];
    char y[50];
    password(x, y);
    return 0;
}

void password(char x[], char y[]) {
    char new_password[100];
    printf("Create Password \n");

    // Read characters for the password without displaying them
    printf("Enter Characters: ");
    for (int i = 0; x[i]!='\r' ; i++) {
        x[i] = getch();//Use _getch() from conio.h to read a character without displaying it
        printf("*");

        if (x[i] == '\r') {
            x[i] = '\0';// this is important to mention because it is string
            break;
        }
    }
    // Apply transformations to the password
    if (x[0] >= 'a' && x[0] <= 'z') {
        x[0] = x[0] - 'a' + 'A';
    }
    for (int j = 1; x[j] != '\0'; j++) {
        if (x[j] >= 'A' && x[j] <= 'Z') {
            x[j] = x[j] - 'A' + 'a';
        }
    }

    // Read special characters
    printf("\nEnter Special Characters: ");
    scanf("%s", y);

    // Concatenate password and special characters
    char salt[] = "@";
    strcpy(new_password, salt);
    strcat(new_password, x);
    strcat(new_password, y);
    strcat(new_password, salt);

    //printf("New Password: %s\n", new_password);

    // Compare with the predefined password
    if (strcmp(new_password, "@Abisekh2000!!@") == 0) {
        printf("Hello!!\n");
    }
}
#include <stdio.h>
#include <string.h>
#include <conio.h>
//#include<windows.h>

void password(char x[], char y[]);

int main() {
    char x[100];
    char y[50];
    password(x, y);
    return 0;
}

void password(char x[], char y[]) {
    char new_password[100];
    printf("Create Password \n");

    // Read characters for the password without displaying them
    printf("Enter Characters: ");
    int i = 0;
    char ch;
    while (1) {
        ch = getch();  // Use _getch() from conio.h to read a character without displaying it
        if (ch == '\r') {
            break;
        }
        x[i++] = ch;
        printf("*");  // Display '*' for each character
    }
    x[i] = '\0';

    // Apply transformations to the password
    if (x[0] >= 'a' && x[0] <= 'z') {
        x[0] = x[0] - 'a' + 'A';
    }
    for (int j = 1; x[j] != '\0'; j++) {
        if (x[j] >= 'A' && x[j] <= 'Z') {
            x[j] = x[j] - 'A' + 'a';
        }
    }

    // Read special characters
    printf("\nEnter Special Characters: ");
    scanf("%s", y);

    // Concatenate password and special characters
    char salt[] = "@";
    strcpy(new_password, salt);
    strcat(new_password, x);
    strcat(new_password, y);
    strcat(new_password, salt);

    //printf("New Password: %s\n", new_password);

    // Compare with the predefined password
    if (strcmp(new_password, "@Abisekh2000!!@") == 0) {
        printf("Hello!!\n");
    }
}
#include <stdio.h>
#include <conio.h>

int main() {
    char ch[100];

    printf("Press any key: ");

    // Use _getch() to read a character without echoing it
    ch[100] = _getch();

    // Display the pressed key
    printf("\nYou pressed: %c\n", ch);

    return 0;
}
#include <stdlib.h>

int main() {
    system("String_code1.exe");//this runs another program (we have to specify the .exe file which we want to run)

    return 0;
}
#include <stdlib.h>

int main() {
    // Clear the screen on Windows
    system("cls");

    // Your program logic here

    return 0;
}
#include <stdlib.h>

int main() {
    // Execute a system command
    system("echo Hello, World!");

    // Your program logic here

    return 0;
}
#include <stdlib.h>

#ifdef _WIN64
#include <windows.h>
#else
#include <unistd.h>
#endif

int main() {
    printf("hiii");
    // Sleep for 5 seconds
    #ifdef _WIN64
    Sleep(5000);
    #else
    sleep(5);
    #endif

    // Clear the screen on Windows
    system("cls");

    // Your program logic here

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = '0';

    if (isalpha(ch)) {
        printf("%c is an alphabetical character.\n", ch);
    } else {
        printf("%c is not an alphabetical character.\n", ch);
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'A';

    if (isalpha(ch)) {
        printf("%c is an alphabetical character.\n", ch);
    } else {
        printf("%c is not an alphabetical character.\n", ch);
    }

    return 0;
}
#include <stdio.h>
#include<string.h>
void p(char a[], int key);
int main(){
    char pass[100];
    int key=1;
    fgets(pass,100,stdin);
    //printf("%s\n",pass);
    p(pass,key);
    printf("%s",pass);
    return 0;
}
void p(char a[], int key){
    for(int i=0;a[i]!='\0';i++){
        a[i]=a[i]-key;
    }

}
#include <stdio.h>

int main() {
    // Declare an integer
    int number = 12345;

    // Choose a buffer size that is large enough to hold the converted string
    char buffer[20];

    // Use sprintf to convert the integer to a string
    sprintf(buffer, "%d", number);

    // Print the result
    printf("The integer %d as a string: %s\n", number, buffer);

    return 0;
}
#include <stdio.h>
#include<conio.h>
int main() {
    char password[100];
    int i = 0;
    char ch;

    printf("|Enter Password: ");

    while (1) {//While (1) means its an infinite loop the loop will continue until the code gets a break statement; while (1) makes the statement always true
        ch = getch(); // Use _getch() from conio.h to read a character without displaying it

        if (ch == '\r') {
            password[i] = '\0'; // Null-terminate the string
            break;
        } else if (ch == 8 && i > 0) { // ASCII value 8 represents backspace
            i--;
            printf("\b \b"); // Move the cursor back, overwrite with a space, and move the cursor back again
        } else {
            password[i] = ch;
            printf("*");
            i++;
        }
    }

    printf("\nEntered Password: %s\n", password);

    return 0;
}
#include <stdio.h>
#include<conio.h>
int main() {
    char password[100];
    int i = 0;
   // char ch;

    printf("|Enter Password: ");

    for (int i = 0; password[i] != '\r'; i++) {
     password[i] = getch(); // Use _getch() from conio.h to read a character without displaying it

    if (password[i]== '\r') {
        password[i] = '\0'; // Null-terminate the string
        break;
    } else if (password[i] == 8 && i > 0) { // ASCII value 8 represents backspace
        i--;
        printf("\b \b"); // Move the cursor back, overwrite with a space, and move the cursor back again
    } else {
        //password[i] = ch;
        printf("*");
        //i++;
    }
}
    printf("\nEntered Password: %s\n", password);

    return 0;
}
#include <stdio.h>
#include <conio.h>

int main() {
    char password[100];
    int i;

    printf("|Enter Password: ");

    // Handle the first character outside the loop
    // password[0] = getch();
    // printf("*");
    
    for (i = 0; password[i] != '\r'; i++) {
        password[i] = getch(); // Use _getch() from conio.h to read a character without displaying it

        if (password[i] == '\r') {
            password[i] = '\0'; // Null-terminate the string
            break;
        } else if (password[i] == 8 && i > 0) { // ASCII value 8 represents backspace
            i =i-2;
            printf("\b \b"); // Move the cursor back, overwrite with a space, and move the cursor back again
        } else {
            printf("*");
        }
    }//in the first step i entered x then i becomes 1;
    //in the second step i hit backspace to delete x; but according to ASCII backspace is a character so it increments the value of i; i becomes 2;
    //The \b escape sequence in C represents the backspace character. 
    //When used in a string within functions like printf or printf-like functions, it does not print a visible character; 
    //instead, it moves the cursor or print head one position backward on most terminals or consoles.
    //here i=2; and i=i-2 will be 0 so it will invisible for the character for i=1 and i=0; i=1 there backspace used and its previous iteration when i=0 the value will not be printed 

    printf("\nEntered Password: %s\n", password);

    return 0;
}
#include <stdio.h>

int main() {
    printf("Using for loop:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d squared is %d\n", i, i * i);
    }
    return 0;
}
#include <stdio.h>

int main() {
    printf("Using while loop:\n");
    int i = 0;
    while (i < 5) {
        printf("%d squared is %d\n", i, i * i);
        i++;
    }
    return 0;
}
#include <stdio.h>

int main() {
    printf("Using do-while loop:\n");
    int i = 0;
    do {
        printf("%d squared is %d\n", i, i * i);
        i++;
    } while (i < 5);
    return 0;
}
//Predict Output
#include<stdio.h>
int main(){
    int b=0;
    for(int i=0;i<10;i++);
    {b=b+1;}
    printf("%d",b);
    return 0;
}
//check The output of OR gate
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter The Value of a: ");
    scanf("%d",&a);
    printf("Enter The Value of a: ");
    scanf("%d",&b);
    if(a==0 && b==0){
        printf("Output 0");
    }
    else if(a==0 && b==1){
        printf("Output 1");
    }
    else if(a==1 && b==0){
        printf("Output 1");
    }
    else{
        printf("Output 1");
    }
return 0;
}
//Predict Output
#include <stdio.h> 
int g(int p) { printf("%d", p); return p; } 
int h(int q) { printf("%d", q); return q; } 
void f(int x, int y) { 
g(x); 
h(y); 
} 
int main() { 
f(g(10),h(20)); 
}
//Predict Output
#include <stdio.h> 
int main() { 
double a[2]={20.0, 25.0}, *p, *q; 
p = a; 
q = p + 1; 
printf("%d,%d", (int)(q - p), (int)(*q - *p)); 
return 0;}
//Predict Output
#include <stdio.h> 
int main() { 
double a[3]={20.0, 25.0,30.0}, *p, *q; 
p = a; 
q = p + 2; 
printf("%d,%d", (int)(q - p), (int)(*q - *p)); 
return 0;}
//Predict Output
#include<stdio.h>
int main(){
    int a=2;
    a=5;
    printf("%d",a);
    return 0;
}
//Use of \r
#include<stdio.h>
int main(){
    printf("Abisekh Dey\n");
    printf("Abisekh\rDey");
    return 0;
}
//Ternary
#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    a>b?printf("x"):printf("y");
    return 0;
}    
//
#include<stdio.h>
int main(){
    int n,rem,temp;
    printf("Enter The Number: ");
    scanf("%d",&n);
    int reverse_digit=0;
    for(temp=n;temp!=0;temp/=10){
        rem=temp%10;
        reverse_digit=reverse_digit*10+rem;
    }
printf("The Reversed Number will be: %d",reverse_digit);
return 0;
}
#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;
    int temp, digitCount = 0;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // originalNum = num; // Store the original number

    // Count the number of digits in the number
    // for (temp = num; temp != 0; temp /= 10) {
    //     digitCount++;
    // }

    // Reverse the digits of the number
    for (temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append the digit to the reversed number
    }
    printf("The Reversed Number will be: %d",reversedNum);

    // // Check if the original number is equal to the reversed number
    // if (originalNum == reversedNum) {
    //     printf("%d is a palindrome.\n", originalNum);
    // } else {
    //     printf("%d is not a palindrome.\n", originalNum);
    // }

    return 0;
}
