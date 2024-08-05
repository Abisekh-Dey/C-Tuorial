//To print address just add "&" before the variable or pointer whose address we want to print
//To print the value of the pointer we need to add "*" before pointer 
#include<stdio.h>
int main(){
    int n = 2;
    int *ptr = &n;
    int **pptr = &ptr;//both **pptr=&ptr and *pptr=&*ptr does the same operation which is to print the value of "n"
    printf("%d \n",*ptr);
    printf("%d \n",n);
    printf("%d \n",**pptr);
    printf("%d\n%d\n%d\n",&n,ptr,pptr);//here ptr represents the address of n(ptr stores the address of variable "n") because & is not written before ptr; 
    //but if "&ptr" was written then it will directly print the address of ptr as shown in the next line;
    //therefore pptr represents the address of ptr (pptr stores the address of prt)
    printf("%d\n%d\n%d\n",&ptr,&n,&pptr);
    return 0;}
#include<stdio.h>
int main(){
    int n=2;
    int *ptr=&n;
    int **pptr=&ptr;
    int ***ppptr=&pptr;
    printf("%d\n%d\n%d\n",&ptr,&pptr,&ppptr);
    printf("%d\n%d\n%d\n",*ptr,**pptr,***ppptr);
    return 0;
}
#include<stdio.h>
int main(){
    int n=2;
    int *ptr=&n;
    printf("%d\n %d\n %d\n",ptr,&ptr,&n);
    return 0;
}
#include<stdio.h>
int main(){
    int *p =1000;
    printf("%d",p+5);//** special case
    return 0; 
//here in this problem the value of pointer is 1000 but we know that pointers can not able to store value directly because pointers only can store another variable's address directly.
//so in this case *p=1000 it means the pointer stores an address of a integer value which is 1000 ,so 1000 is the address of a integer value which is stored in pointer.
//so p+5 means p=1000 (p is generally provides the integer value's adderss which is 1000) and add +5 in it;  
//but 5 is an integer value and the size of an integer/float is 4 bytes so size of 5 integers is (5*4)=20;
//so the code tend to increase the address 1000 + 5 integer =1000 +(5*4)=1020 is the final value.now the pointer's stored address shifts from 1000 to 1020 address or internal stored address increased to 1020 from 1000 in the pointer 
//but it will generate a warning   
}
#include<stdio.h>
int main(){
    int a=2;
    int *ptr=&a;
    printf("%d\n",*ptr);
    printf("%d\n",&a);//this will show the address of the a 
    printf("%d\n",ptr);//this will show the address of the integer which is stored inside of the pointer (that is a here);so this will print the address of a
    ptr++;//it means (ptr+1 integer/float) so this tends to increase the space/address by one integer; 1 integer's size is 4 byte ,so it increases the stored address inside the ptr by 4 (for this case address of a + 4)
    //so ptr++ and (*ptr)++ is not same (*ptr)++ increases the value of the variable whose address is stored inside the pointer by 1
    // int b=3;
    // *ptr=&b;
    printf("%d\n",*ptr);//this should print the value of a but inside the pointer the address increased and in that increased address no variable is stored so this only prints the increased address which is inside
    printf("%d\n",ptr);//this will show the increased address inside it
    ptr--;//it means (ptr - integer/float) this decrases the stored address inside the pointer by 1 integer (which is 4bytes) 
    printf("%d\n",*ptr);//this will print the value of the variable whose address is stored inside the pointer but in this case previously we increased the stored address but when we derease the address by 1 integer then the address returns in its original address where it found variable a again; then it prints the value of a.   
    printf("%d\n",ptr);//this will print the stored decreased address inside it 
    return 0;
}
#include<stdio.h>
int main(){
    float a=2.85;
    float *ptr = &a;
    printf("%f\n",a);
    printf("%f\n",*ptr);    
    printf("%d\n",&a);
    ptr++;
    printf("%d\n",ptr);
    ptr--;
    printf("%d\n",ptr);
    return 0;
}
#include<stdio.h>
int main(){
    char a = 'a';
    char *ptr=&a;
    printf("%c\n",a);
    printf("%c\n",*ptr);    
    printf("%d\n",&a);
    ptr++;//it means (ptr+1 character) the address stored inside the pointer will inrease by 1 character (size of 1 character value is 1byte)
    printf("%d\n",ptr);//this will print the increased stored address inside the pointer
    ptr--;//it means (ptr-1 character) the address stored inside the pointer will decrease by 1 character (size of 1 character value is 1byte)
    printf("%d\n",ptr);//this will print the decreased stored address inside the pointer
    return 0;  
}

#include<stdio.h>
int main(){
    int n;
    int *ptr = &n;
    *ptr = 4;
    printf("value of n :%d \n",n);
    printf("value of ptr :%d \n",*ptr);
    *ptr=*ptr+n;
    printf("value of n :%d \n",n);
    printf("value of ptr :%d \n",*ptr);
    (*ptr)++;
    printf("value of n :%d \n",n);
    printf("value of ptr :%d \n",*ptr);
    return 0;
}
//Function Call By Reference using Pointer//
#include<stdio.h>
int square(int n);
int Square(int* ptr);
int main(){
    int n;
    printf("enter the value of n: ");//assuming n=4
    scanf("%d",&n);
    printf("The value is : %d\n",n);
    printf("The square will be: %d \n",square(n));
    printf("The value is : %d\n",n);
    printf("The value is : %d\n",&n);
    printf("The square will be: %d\n",Square(&n));//here &n is passed as an argument
    printf("The value is : %d\n",n);
    printf("The value is : %d\n",&n);//here the address of n is remains same as the previous but the value of n is changed
    return 0;
}
int square(int n){
    return n*n;
}
int Square(int* ptr){//the pointer *ptr stores the address of n
printf("The address of pointer ptr will be: %d\n",&ptr);
   return *ptr = (*ptr)*(*ptr);//*ptr gets access to the value of n which is 4 using "*" then it does 4*4 the the value stores in also *ptr 
}

#include<stdio.h>
int main(){
    int a=2,b=3;
    printf("The value of a and b is:%d, %d\n",a,b);
    int *ptr;
    printf("The value of pointer will be: %d\n",*ptr);
    *ptr = a;
    a = b;
    b = *ptr;
    printf("The value of a will be: %d\n",a);
    printf("The value of b will be: %d\n",b);
    printf("The value of pointer will be: %d\n",*ptr);
    return 0;
}
#include <stdio.h>

int main() {
    int a = 2, b = 3;
    printf("The value of a and b is: %d, %d\n", a, b);

    int *ptr = &a; // Initialize the pointer with the address of 'a'
    printf("The value of pointer will be: %d\n", *ptr);

    int temp = *ptr; // Use a temporary variable to store the value at the address pointed by 'ptr'
    *ptr = b; // Set the value at the address pointed by 'ptr' to the value of 'b'
    b = temp; // Set 'b' to the temporary value

    printf("The value of a will be: %d\n", a);
    printf("The value of b will be: %d\n", b);
    printf("The value of pointer will be: %d\n", *ptr);

    return 0;
}

#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a=2,b=3;
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);//Here the arguement is passing the address of a and b; this is call by reference
    printf("The value of a will be after swapping: %d\n",a);
    printf("The value of b will be after swapping: %d\n",b);
    return 0;
}
void swap(int *a, int *b){//hence a and b is pointers then the value which is stored in the address of a and b will be copied here 
    int temp=*a;
    *a=*b;
    *b=temp; 
}

#include<stdio.h>
void address_n(int n);
int main(){
    int n = 2;
    printf("%d\n",&n);
    printf("%d\n",n);
    address_n(n);//call by value
    return 0;
}
void address_n(int n){//the argument n is copied here 
    printf("%d\n",&n);// the address of n is different from the main function because the copied n's address can not be same as the actual n's addresss in the call by value function because actual n is already stored in the actual n's address thats why the copied n's address can't be placed at the actual n's address.
    printf("%d\n",n);
}
#include<stdio.h>
void address(int *a);
int main(){
    int n = 2;
    int *a=&n;
    printf("%d\n",&n);
    printf("%d\n",n);
    address(a);//call by value
    return 0;
}
void address(int *n){//the argument n is copied here 
    printf("%d\n",&n);// the address of n is different from the main function because the copied n's address can not be same as the actual n's addresss in the call by value function because actual n is already stored in the actual n's address thats why the copied n's address can't be placed at the actual n's address.
    printf("%d\n",*n);
}


#include<stdio.h>
void address(int *ptr);
int main(){
    int n = 2;
    printf("Actual address of n: %d\n",&n);
    printf("Value of n:%d\n",n);
    address(&n);//call by reference
    printf("After changing the address of n: %d\n",&n);
    return 0;
}
void address(int *ptr){//here argument passes the copy of the address of n in pointer *ptr
    printf("Address of variable stored inside the pointer:%d\n",&*ptr);//&ptr prints the address of the pointer ptr but &*ptr prints the address of variable that is inside the ponter (that is here n so that the &*ptr prints the address of n)  
    printf("Address of pointer: %d\n",&ptr);
    printf("Address of n: %d\n",ptr);
    printf("Value of the pointer: %d\n",*ptr);//*ptr prints the value of n here because n's address is stored in *ptr ; *ptr prints the value of n. 
}
#include<stdio.h>
int main(){
    int *ptr=2;
    printf("%d",*ptr);//pointer can store address but cant not store values directly    
    return 0;
}
#include<stdio.h>
void operation(int a, int b, int *sum, int *product, int *average);
int main(){
    int a=2, b=8,sum,product,average;
    printf("sum: %d\nproduct: %d\naverage: %d\n",sum,product,average);// can not determine because no operation is assigned
    operation(a,b,&sum,&product,&average);
    printf("sum: %d\nproduct: %d\naverage: %d\n",sum,product,average);
    return 0;
}
void operation(int a, int b, int *sum, int *product, int *average){
    *sum=a+b;
    *product=a*b;
    *average=(a+b)/2;
    // printf("sum: %d\nproduct: %d\naverage: %d\n",*sum,*product,*average);
}

#include <stdio.h>

void operate(int a, int b,int *addition,int *multiplication, int *average);

int main() {
    int a, b, addition, multiplication,average;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    operate(a, b, &addition,&multiplication,&average);
    printf("Addition: %d\n", addition);
    printf("Multiplication: %d\n", multiplication);
    printf("Average: %d\n", average);

    return 0;
}

void operate(int a, int b,int *addition, int *multiplication, int *average) {
    *addition = a + b;
    *multiplication = a * b;
    *average = (a + b) / 2;
}


#include<stdio.h>
int number(int *ptr1,int*ptr2);
void main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    number(ptr1,ptr2);
}
int number(int*ptr1,int*ptr2){
    if(*ptr1>*ptr2){
        printf("Value of a is maximum: %d\n",*ptr1);
    }
    else if(*ptr1<*ptr2){
        printf("Value of b is maximum: %d\n",*ptr2);
    }
    else{
        printf("Invalid Value");
    }
    return 0;
}
#include<stdio.h>
int number(int *ptr1, int *ptr2);
void main(){
    int a = 2, b = 4;
    int *ptr1 = &a;
    int *ptr2 = &b;
    number(ptr1, ptr2);

    printf("Value of a is minimum: %d\n",*ptr1);
    printf("Value of b is maximum: %d\n",*ptr2);
    
    
}//The program lacks a return statement at the end of the main function. 
//While in C, void main() is technically allowed, it's better practice to use int main() and return an integer to indicate the success or failure of the program execution. 
//Typically, you should use return 0; at the end of main to indicate successful execution.
int number(int *a, int *b){
    if(*a>*b){
        return *a;
    }
    else if(*b>*a){
        return *b;
    }
    else{
        return 0;
    }
}
//
#include <stdio.h>

void get(char *p1, char *p2);

int main() {
    char a, b,*p1, *p2;
    
    printf("Enter The Starting Index: ");
    scanf(" %c", &a); 
    printf("Enter The Ending Index: ");
    scanf(" %c", &b); 
    p1 = &a;
    p2 = &b;

    get(p1, p2);

    return 0;
}

void get(char *p1, char *p2) {
    for(int i=*p1;i<=*p2;i++){
        printf("ASCII value is %d and Alphabet is: %c\n",i,i);
    }
}

#include<stdio.h>
int alphabet(char *ptr,char n,char a);
void main(){
    char n,a;
    printf("Enter the value of n: ");
    scanf("%c",&n);
    char *ptr=&n;
    printf("n is: %c\n",n);
    alphabet(ptr,n,a);
}
int alphabet(char *ptr, char n,char a){
    for(*ptr='a';*ptr<=n;(*ptr)++){
    printf("ASCII value is %d and Alphabet is: %c\n",*ptr,*ptr);}
    return 0;
}
#include<stdio.h>
int main(){
    int a=10;
    int b=12;
    int *ptr1=&a;
    int *ptr2=&b;
    printf("%d\n",&b);//variable b is declared last but the address will be less than 4 integer from the address a because memory allocation in c follows stack and the stack runs from low to high(bottom starts from 0 to higher order) 
    //so first entered a at 0 level of the stack then b enters in the stack in the 0 level then b pushes a to the higher level thats why the address of a is higher than b
    printf("%d\n",&a);//this will print the address of a
    printf("%d\n",ptr1);//this will print the address which is inside of the pointer
    printf("ptr1: %d\nptr2: %d\nDifferennce: %d\n",ptr1,ptr2,ptr1-ptr2);//this will print the stored address of the 2 pointer and the difference between 2 stored address of the pointer ptr1 - ptr2 it will be 1 integer value 
    printf("ptr1:%d\nptr2:%d\n",&ptr1,&ptr2);
    //ptr1=&b;
    ptr2=&a;
    printf("Comparison: %d",ptr1==ptr2);//if the internal stored address of ptr1 and ptr2 is same then it will print 1 else it will print 0 
    return 0;
}
#include<stdio.h>
int main(){
    int *ptr1=1000;
    int *ptr2=1000;
    printf("%d",ptr1-ptr2);// here both ptr1 and ptr2 internal stored address is same so the difference between 2 pointers will be 0 integer value ; thats why it will print only a 0 in the output box 
    return 0;
}