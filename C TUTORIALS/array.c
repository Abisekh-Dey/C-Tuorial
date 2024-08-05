//1.implementation of array without using any loop
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("n is: %d\n",n);
    int array[n];
    printf("enter the elements of array: \n");
    printf("element 1: ");
    scanf("%d",&array[0]);
    printf("element 2: ");
    scanf("%d",&array[1]);
    printf("element 3: ");
    scanf("%d",&array[2]);
    printf("elements of array is: %d %d %d\n",array[0],array[1],array[2]);
    return 0;
}
//2a.Implemantation of array using for loop
#include<stdio.h>
int main(){
    int n=3,array[n];
    for(int i=0;i<n;i++){
        printf("%d.Enter the element: ",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("array[%d].Elements are: %d\n",i+1,array[i]);
    }
    return 0;
}
//2b.Implemantation of array using while loop
#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int x[n];
    while(i<n){
    printf("%d.Enter the Element of array[%d]: ",i+1,i);
    scanf("%d",&x[i]);
    i++;}
    i=0;// Resetting i to 0 for the second loop because till the previous statement the value of i is (n-1); So we have to reset the value of i
    while(i<n){
        printf("%d.The Elements of The array[%d] = %d\n",i+1,i,x[i]);
        i++;
    }
    return 0;
}
//2c.Implemantation of array using Do-while loop
#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int x[n];
    do{
        printf("%d.Enter the Element of array[%d]: ",i+1,i);
        scanf("%d",&x[i]);
        i++;
    } 
    while (i<n);
    i=0;//Resetting the value of i to 0 for the next loop
    do{
        printf("%d.The Elements of The array[%d] = %d\n",i+1,i,x[i]);
        i++;
    } 
    while(i<n);
    return 0;
}
//2d.Implemantation of array using for loop 
//But when array[i]==34 the loop will be reversed then re-enter the element which is != 34
#include<stdio.h>
int main(){
    int n=3,array[n];
    for(int i=0;i<n;i++){
        printf("%d.Enter the element: ",i+1);
        scanf("%d",&array[i]);
        if(array[i]==34){
            printf("re enter\n");
            i--;
            continue;
        }
    }
    for(int i=0;i<n;i++){
        printf("array[%d].Elements are: %d\n",i+1,array[i]);
    }
    return 0;
}
//3.Relation between array size and total elements present in the array
#include<stdio.h>
int main(){
    int array[10];//size of the array is 10
    for(int i=0;i<5;i++){//How many elements can present in the array depends on the size of the array;
    //It is not compulsory that if the array size is 10 there must be 10 elements
    //The elements of the array can be less than the size but THE ELEMENTS CAN NOT EXCEED THE SIZE OF THE ARRAY
        printf("Enter trhe elements of the array[%d]= ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("The elements of the array is array[%d]= %d\n",i,array[i]);
    }
    return 0;
}
//4.Implemantation of array using for loop 
//After the first printing the array then re-assign the values of position '0','1'&'4' of the array then again print the array
#include<stdio.h>
int main(){
    int array[5];
    for(int i=0;i<5;i++){
      printf("Enter trhe elements of the array[%d]= ",i);
        scanf("%d",&array[i]);  
    }
    printf("\n");
    for(int i=0;i<5;i++){
      printf("The elements of the array is array[%d]= %d\n",i,array[i]);  
    }
    printf("\n");
    array[0]=12;//Here I assigned the value of the 0 location of the array is 12 
    array[1]=23;//Here I assigned the value of the 1 location of the array is 23
    array[4]=56;//Here I assigned the value of the 4 location of the array is 56
    for(int i=0;i<5;i++){
      printf("The elements of the array is array[%d]= %d\n",i,array[i]);  
    }
    return 0;
}
//Printing of user defined array
#include<stdio.h>
int main(){
    int n=10,array[n];//Size of array is 10
    for(int i=0;i<7;i++){//loop will run till from array[0] to array[6] and will take 7 inputs 
        printf("%d.Enter the element: ",i+1);
        scanf("%d",&array[i]);//Taking 7 inputs 
    }
    for(int i=0;i<n;i++){//Since n =10 the loop will run till array[9]
        printf("array[%d].Elements are: %.*d\n",i+1,1,array[i]);//Since array has only 7 elements thats why rest location will show some garbage value
    }
    return 0;
}

//3.Program to print first 10 numbers
#include<stdio.h>
int main(){
    int array[10];
    for(int i=0;i<10;i++){
        array[i]=i+1;//it takes (i+1) value as the element of the array
    }
    for(int i=0;i<10;i++){
        printf("Elements of the array[%d] = %d %d\n",i,array[i],array[2]);
    }
    return 0;
}
//4.implementation of array using for loop with user defined size of the array 
#include<stdio.h>
int main(){
    int n;
    printf("enter the  value of n: ");
    scanf("%d",&n);
    int array[n];
    // for(int i=0;i<=n-1;i++)
    for(int i=0;i<n;i++){
        printf("%d. enter the elements of the array: ",i+1);
        scanf("%d",&array[i]);}
    printf("the elements are: \n");
    for(int i=0;i<n;i++){
        printf("%d.  numbers %d\n",i+1,array[i]);}
    return 0;
}
//5.implementation of character array(it can store 7 characters; size of character is 1 byte)
#include<stdio.h>
int main(){
    char array[7];
    for(int i=0;i<7;i++){
    printf("%d.enter the name: ",i+1);
    scanf(" %c",&array[i]);}// Added a space before %c to skip whitespace characters
    printf("The elements are: ");
    for(int i=0;i<7;i++){
        printf("%c",array[i]);}
        return 0;
}
#include<stdio.h>
int main(){
    char x[14];
    printf("Enter the name: ");
    for(int i=0;i<14;i++){
    scanf("%c",&x[i]);}//in this case scanf will take value after we hit space button because here i mentioned x[10] is a character array; So space is treated as a character(space is a ASCII character)
    for(int i=0;i<14;i++){
        printf("%c",x[i]);
    }
    return 0;
}

//5.implementation of character array(it can store 7 characters; size of character is 1 byte)
#include<stdio.h>

int main() {
    char array[7];
    
    for (int i = 0; i < 7; i++) {
        printf("%d. Enter the value: ", i + 1);
        array[i] = getchar();//using getchar() to avoid whitespace characters

        // Consume the newline character
        getchar();
    }
    
    printf("The elements are: ");
    
    for (int i = 0; i < 7; i++) {
        printf("%c", array[i]);
    }
    
    return 0;
}
//Operation of pre-defined array
#include<stdio.h>
int main(){
    int x[] = {1,2,3,4,5};
    printf("%d",x);//This will print a garbage value
    printf("%d\n",x[3]);//This will print the value of location 3 of the array x
    for(int i=0;i<5;i++){
        printf("%d",x[i]);//This will print the whole array x
    }
    return 0;
}

//6.generation of GST bill(18%) and the total price
#include<stdio.h>
int main(){
    float price[3];
    printf("Enter the prices: \n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    float price_1 = price[0]+(0.18*price[0]);
    float price_2 = price[1]+(0.18*price[1]);
    float price_3 = price[2]+(0.18*price[2]);
    printf("Total price: %f\n",price_1);
    printf("Total price: %f\n",price_2);
    printf("Total price: %f\n",price_3);
    printf("Total amount: %f\n",price_1+price_2+price_3);
    return 0;
}
#include<stdio.h>
int main(){
    float price[3];
    float Total_amount=0;
    for(int i=0;i<3;i++){
    printf("Enter the prices: ");
    scanf("%f",&price[i]);
    price[i]=price[i]+(0.18*price[i]);}
    for(int i=0;i<3;i++){
        printf("Total price: %f\n",price[i]);
        Total_amount=Total_amount+price[i];
    }
    printf("Total amount: %f\n",Total_amount);
    return 0;
}

//7.implementing array using pointer(pointer stores 0th location's address in the array)
#include<stdio.h>
int main (){
    int array[10];
    int *ptr =&array[0];
    for(int ptr=1;ptr<=10;(ptr)++){
        printf("%d. Enter The Number: ",ptr);
        scanf("%d",&array[ptr]);
        printf("The value of pointer at array[%d] location of the array is: %d\n",ptr,array[ptr]);}
        printf("The Elements in The Array\n");
        for(int i=1;i<=10;i++){
            printf("array[%d]. The Numbers are: %d\n",i,array[i]*array[i]);}
        return 0;
}

//8.Various Operations of array for better understanding
#include <stdio.h>
int main() {
    int array[5] = {12, 42, 32, 49, 53};//here array[5] means the array can store maximum 5 elements in the array 
    printf("The address of the array is: %d\n",&array[5]);//this will print the address of the 6th element of the array but array in c language starts from 0 here it will run 0 to 4 position to store 5 elements in the array 
    //array in c starts from 0 to store 5 elements in the array the array will run from 0 to 4 location of the array 

    // Using the array name in a pointer context
    int *ptr = array;//or we can write int *ptr = &array[0];
    printf("The address of the pointer is: %d %d %d\n",&ptr,array,&array);//this will print the address of the pointer and the address of the first location of the array which is 0 &array and array both will print the address of the first location of the array 

    // Accessing array elements using array subscripting
    for (int i = 0; i < 5; i++) {
        printf("array[%d] =%d %d %d\n", i,&i, &array[i], array[i]);//here first will print of the etaration; then it will print the address of i; then it will print the address of the each location of the array from (0 to 4); then it will print the value of each location of the array 
    }

    //Accessing array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {// the etaration is starting from 0 because the address of 0th location of the array is stored inside the pointer then it is increasing by one integer in each etaration
        printf("*(ptr + %d) = %d %d %d %d\n", i, *(ptr + i),(ptr +i),(*ptr+i),(&ptr+i));//first will print the iteration, then it will print the value of the pointer; then it will print the stored address in side the pointer in each etaration(frrom 0 to 4)
    //(*ptr+i) prints the *ptr's value in the first iteration which is 12 because array[0] is stored in *ptr but then repeatedly increment the value by 1 integer like (12,13,14.... so on)
    //(&ptr+i) prints the *ptr's address and repeatedly increament by 1 integer
    }

    return 0;
}
//9.implementation of a predefined array and various operation
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    // Print the address of the array
    printf("Address of the array:%d %d %d %d\n",arr, &arr,&arr[0],arr[0]);

    return 0;
}
//10.implementation of predefined array and printing the value of different location of array
#include<stdio.h>
int main(){
    int x[]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",&x[0]);//only print the 0 location's address of the array
    printf("%d\n",&x[1]);
    printf("%d\n%d",*(x+2),x[2]);//*(x+2) printing the value using pointer (pointer arithmetics) ;x[2]prints the value of 2 location of the array
    return 0;
}
//11.pointer arithmetic 
#include<stdio.h>

int main() {
    int x[] = {1, 2, 3, 4, 5};

    // Using array name without an index (treated as a pointer to the first element)
    //int *x = x; no issue if i mention this as a pointer or not still it will act as a pointer

    // Accessing elements using pointer arithmetic
    printf("%d\n", *(x));  // Equivalent to x[0]
    printf("%d\n", *(x + 1));  // Equivalent to x[1]
    printf("%d\n", *(x + 2));  // Equivalent to x[2]

    return 0;
}
//12.Implemantation of array using pointer
#include<stdio.h>
int main (){
    int array[10];
    int *ptr = array;
    for(int i=1;i<=10;i++){
        printf("%d. Enter The Number: ",i);
        scanf("%d",&array[i]);}
        printf("The Elements in The Array\n");
        for(int i=1;i<=10;i++){
            printf("%d. The Numbers are: %d\n",i,array[i]*array[i]);
        }
        return 0;
}
//13.Implementation of array without using pointer
#include<stdio.h>
int main (){
    int array[10];
    for(int i=0;i<10;i++){
        printf("%d. Enter The Number: ",i);
        scanf("%d",&array[i]);}
        printf("The Elements in The Array\n");
        for(int i=1;i<=10;i++){
            printf("%d. The Numbers are: %d\n",i,array[i]*array[i]);
        }
        return 0;
}
//14.Implementaion of array using pointer
#include <stdio.h>

int main() {
    int array[10];
    int *ptr = &array[0];

    // Input: Getting values for each element in the array using pointers
    for (int i = 0; i < 10; i++) {
        printf("%d. Enter The Number: ", i + 1);
        scanf("%d", &(*(ptr + i)));
    }

    // Output: Printing the squared values of each element using pointers
    printf("The Elements in The Array\n");
    for (int i = 0; i < 10; i++) {
        printf("%d. The Numbers are: %d\n", i + 1, (*(array + i)) * (*(array + i)));
    }

    return 0;
}
//15.Multiplication of the array elements
#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    printf("The Elements of Array\n");
    for(int i=1;i<=10;i++){
        printf("%d. The Number is: %d\n",i,array[1,2,3,4,5,6,7,8,9,10]*array[1,2,3,4,5,6,7,8,9,10]);
    }
    for(int i=0;i<10;i++){
        printf("%d. The Number is: %d\n",i,array[i]*array[i]);
    }
    return 0;
}
//
#include <stdio.h>

int* getStaticArray() {
    static int array[5];
    for (int i = 0; i < 5; ++i) {
        array[i] = i; // Example initialization
    }
    return array;
}

int main() {
    int* array = getStaticArray();
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
//
#include <stdio.h>

void fillArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = i; // Example initialization
    }
}

int main() {
    int array[5];
    fillArray(array, 5);
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
//
#include<stdio.h>
int *A();
int main()
{
int *x= A();

    for(int i=0;i<10;i++){
    printf("%d",x[i]);
    }
    return 0;
    }
int* A ( ) {
static int array[10];
for(int i=0;i<10;i++){

    printf("Enter the %d number : ",(i+1));
    scanf("%d",&array[i]);
}
return array;
}
//a.Implementing array Using Function
#include<stdio.h>
void func(int n);
int main(){
int size;
printf("Enter The Size: ");
scanf("%d",&size);
func(size);
return 0;
}
void func(int n){
    int x[n];
    for(int i=0;i<n;i++){
        printf("%d.Enter The Value of Array[%d]: ",i+1,i);
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d.Array[%d]: %d\n",i+1,i,x[i]);
    }
}
//b.Implementing array Using Function
#include<stdio.h>
void fun(int array[],int n);
int main(){
    int size;
    printf("Enter The Size: ");
    scanf("%d",&size);
    int x[size];
    fun(x,size);
    return 0;
}
void fun(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d.Enter The Value of Array[%d]: ",i+1,i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d.Array[%d]: %d\n",i+1,i,array[i]);
    }
}
//16a.Multiplication of array elements using function
#include<stdio.h>
void numbers(int array[],int n);
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10},n=10;
    printf("Elements of Arryay\n");
    numbers(array,n);//call by reference
    for(int i=0;i<n;i++){
    printf("%d. The Number is: %d\n",i+1,array[i]*array[i]);}
    return 0;
}
void numbers(int array[], int n){
    for(int i=0;i<n;i++){
    printf("%d. The Number is: %d\n",i+1,array[i]*array[i]);}
}
//16b.Multiplication of array elements using function
#include<stdio.h>
void numbers(int array[],int n);
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10},n=10;
    printf("Elements of Arryay\n");
    numbers(array,n);//call by reference
    for(int i=0;i<n;i++){
    printf("%d. The Number is: %d\n",i+1,array[i]*array[i]);}
    return 0;
}
void numbers(int array[], int n){
    for(int i=0;i<n;i++){
    printf("%d. The Number is: %d\n",i+1,array[i]*array[i]);
    array[i]=array[i]*array[i];}
}
//17.Multiplication of array elements using function from user defined input
#include<stdio.h>
void number(int array[], int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int array[n];
    number(array,n);
    return 0;
}
void number(int array[],int n){
    for(int i=0;i<n;i++){
        printf("array[%d] Enetr the value: ",i);
        scanf("%d",&array[i]);
    }
    printf("The elements of the array\n");
    for(int i=0;i<n;i++){
        printf("array[%d] Number is: %d\n",i,array[i]*array[i]);
    }
}
//Program to find the sum of array elements
#include<stdio.h>
void sum_of_elements(int x[], int size);
int main(){
    int size;
    printf("Enter The Size Of The Array: ");
    scanf("%d",&size);
    int x[size];
    sum_of_elements(x,size);
    return 0;
}
void sum_of_elements(int x[],int size){
    for(int i=0;i<size;i++){
        printf("%d.Enter The Elements of The Array[%d]: ",i+1,i);
        scanf("%d",&x[i]);
    }
    int sum=0;
    for(int i=0;i<size;i++){
        printf("%d.The Elements of The Array[%d]: %d\n",i+1,i,x[i]);
        sum=sum+x[i];
    }
    printf("The Sum of The Elements are: %d",sum);
}
//18.implementation of 2d array
#include<stdio.h>
int main(){
    int array[2][5];
    printf("First array\n");
    for(int i=0;i<5;i++){
        printf("%d. enter the element: ",i+1);
        scanf("%d",&array[0][i]);}
        printf("Second array\n");
        for(int j=0;j<5;j++){
        printf("%d. enter the element: ",j+1);
        scanf("%d",&array[1][j]);}
        printf("Elements of First array\n");
    for(int i=0;i<5;i++){
        printf("%d.the elements are: %d\n",i+1,array[0][i]);
    }
    printf("Elements of Second array\n");
    for(int j=0;j<5;j++){
        printf("%d.the elements are: %d\n",j+1,array[1][j]);}
    return 0;
}
#include<stdio.h>
#include<ctype.h>
int main(){
    char x[1][7];
    char y[1][3];
    for(int i=0;i<1;i++){
        printf("Enter the name: ");
        for(int j=0;j<7;j++){
            scanf(" %c",&x[i][j]);//Must add space before %c to remove whitespace character
            if(x[i][j]=='s' || (x[i][j]>=0 && x[i][j]<=9)){
                i--;
                continue;}
        }
        getchar();
    }
    for(int i=0;i<1;i++){
        printf("Enter the Surname: ");
        for(int j=0;j<3;j++){
            scanf(" %c",&y[i][j]);//Must add space before %c to remove whitespace character
        }
    }
    for(int i=0;i<1;i++){
        printf("My name is: ");
        for(int j=0;j<7;j++){
            printf("%c",x[i][j]);
        }
        printf(" ");//this just print a space
        for(int j=0;j<3;j++){
            printf("%c",y[i][j]);
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char x[1][7];

    for (int i = 0; i < 1; i++) {
        printf("Enter the name: ");
        for (int j = 0; j < 7; j++) {
            scanf(" %c", &x[i][j]);
        }
    }

    printf("My name is: ");
    for (int j = 0; j < 7; j++) {
        if (x[0][j] == 's') {
            break;
        }
        printf("%c", x[0][j]);
    }

    return 0;
}

//19.implementation of 2d array
#include <stdio.h>

int main() {
    int array[2][5];

    for (int row = 0; row < 2; row++) {
        printf("Enter elements for row %d\n", row + 1);

        for (int col = 0; col < 5; col++) {
            printf("Enter the element at column %d: ", col + 1);
            scanf("%d", &array[row][col]);
        }
    }

    printf("Elements of the array\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 5; col++) {
            printf("Row %d, Column %d: %d\n", row + 1, col + 1, array[row][col]);
        }
    }

    return 0;
}
//20.Printing the table of 2 and 3 using array
#include<stdio.h>
void tableof2(int n,int array[]);
void tableof3(int n,int array[]);
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int array[n];
    tableof2(n,array);
    tableof3(n,array);
    return 0;
}
void tableof2(int n,int array[]){
    for(int i=1;i<=n;i++){
        array[i]=i*2;
        printf("The table of 2 will be:%d*2=%d and array[%d] elements: %d\n",i,array[i],i,array[i]);}
        for(int i=1;i<=n;i++){
        printf("array[%d] elements: %d\n",i,array[i]);}
    }
void tableof3(int n,int array[]){
    for(int i=1;i<=n;i++){
        array[i]=i*3;
        printf("The table of 3 will be:%d*3=%d\n",i,array[i]);}
        for(int i=1;i<=n;i++){
        printf("array[%d] elements: %d\n",i,array[i]);}
    }
//21.Printing the table of 2 and 3 using 2d array
#include<stdio.h>
int main(){
    int array[2][11];
    for(int i=0;i<2;i++){//rows
        printf("Table of 2 \n");
        for(int j=0;j<=10;j++){
            array[i][j]=j*2;
            printf("array[%d][%d]=2*%d=%d\n",i,j,j,array[i][j]);
        }
        printf("Table of 3 \n");
        for(int j=0;j<=10;j++){
            array[i][j]=j*3;
            printf("array[%d][%d]=3*%d=%d\n",i,j,j,array[i][j]);
        }}
    return 0;
}
//22.Printing the table of 2 and 3 using 2d array using function (call by value)
#include<stdio.h>
void table(int array[][10],int row,int column,int number);
int main(){
    int array[2][10];
    table(array,0,10,2);
    table(array,1,10,3);
    return 0;
}
void table(int array[][10],int row,int column,int number){
    for(int i=0;i<column;i++){
    array[row][i]=(i+1)*number;
    printf("%d\t",array[row][i]);}
    printf("\n");
}
//23.Printing the table of 1 to 10 using 2d array using function(call by value)
#include<stdio.h>
void table(int array[][10],int row, int column,int number);
int main(){
    int array[10][10];
    // table(array,0,10,1);
    // table(array,1,10,2);
    // table(array,2,10,3);
    // table(array,3,10,4);
    // table(array,4,10,5);
    // table(array,5,10,6);
    // table(array,6,10,7);
    // table(array,7,10,8);
    // table(array,8,10,9);
    // table(array,9,10,10);
    for(int i=1;i<=10;i++){
        //if(i/2==1){
        table(array,i,10,i);}
        //else{
        //table(array,1,10,i);}
return 0;
}
void table(int array[][10],int row, int column,int number){
    for(int i=0;i<column;i++){
        array[row][i]=(i+1)*number;
    }
    for(int i=0;i<column;i++){
        printf("%d\t",array[row][i]);
    }
    printf("\n");
    }
//24.Printing the table of any number using 2d array using function (call by value)(more numbers = more rows)
#include<stdio.h>
void table1(int array[][100],int row,int column,int number);
int main(){
    int row,column,number;
    printf("Enter the row number: ");
    scanf("%d",&row);
    printf("Enter the column number: ");
    scanf("%d",&column);
    int array[row][100];
    if(row==0){
        printf("Enter the number: ");
        scanf("%d",&number);
        table1(array,row,column,number);
    }
    else{
    for(int i=0;i<row;i++){
    printf("Enter the number: ");
    scanf("%d",&number);
    table1(array,i,column,number);}}
    return 0;
}
void table1(int array[][100],int row,int column,int number){
    for(int i=0;i<column;i++){
    array[row][i]=(i+1)*number;
    printf("%d\t",array[row][i]);}
    printf("\n");
}
//25.Printing the table of any number using 2d array using function (call by value)(more numbers = more rows)(row index starts from 0)
#include<stdio.h>
void table1(int array[][100],int row,int column,int number);
int main(){
    int row,column,number[10];
    printf("Enter the row index: ");
    scanf("%d",&row);
    printf("Enter the column number: ");
    scanf("%d",&column);
    int array[row][100];
    for(int i=0;i<=row;i++){
    printf("Enter the number: ");
    scanf("%d",&number[i]);
    table1(array,i,column,number[i]);}
    return 0;
}
void table1(int array[][100],int row,int column,int number){
    for(int i=0;i<column;i++){
    array[row][i]=(i+1)*number;
    printf("%d\t",array[row][i]);}
    printf("\n");
}

//26.Printing the table of any number using 2d array using function (call by value)(row can be 0 or can be 3)(row index starts from 0)
#include<stdio.h>
void table2(int array[][100],int row,int column,int number);
int main(){
    int row,column,number[3];
    printf("Enter the row number: ");
    scanf("%d",&row);
    printf("Enter the column number: ");
    scanf("%d",&column);
    int array[row][100];
    if(row==0){
      printf("Enter the number: ");
    scanf("%d",&number[row]);
    table2(array,row,column,number[row]); }
    if(row>0 && row<4){ 
    for(int i=0;i<row;i++){
    printf("Enter the number: ");
    scanf("%d",&number[i]);}
    table2(array,0,column,number[0]);
    table2(array,1,column,number[1]);
    table2(array,2,column,number[2]);
    printf("%d %d %d\n",array[0][5],array[1][6],array[2][7]);}
    return 0;
}
void table2(int array[][100],int row,int column,int number){
    for(int i=0;i<column;i++){
    array[row][i]=(i+1)*number;
    printf("%d\t",array[row][i]);}
    printf("\n");
}
//27.Printing the table of any number using 2d array using function (call by value)(more rows = more numbers)(row index starts from 0)
#include<stdio.h>
void table3(int array[][100],int row,int column,int number);
int main(){
    int row,column,number[100];
    printf("Enter the row index: ");//here entering row index not row number; (row index = row number-1) 
    //if row index = 2 it will go like 0 index,1 index,2 index then row number will be 3; but if row number = 2 then row index will be 0,1
    //because in array index starts from 0
    scanf("%d",&row);
    printf("Enter the column number: ");
    scanf("%d",&column);
    int array[row][100];
    for(int i=0;i<=row;i++){//this loop will enter the numbers in the array starting from 0
    printf("Enter the number: ");
    scanf("%d",&number[i]);}
    for(int i=0;i<=row;i++){//this loop will continuously call the function
    table3(array,i,column,number[i]);}
    return 0;
}
void table3(int array[][100],int row,int column,int number){
    for(int i=0;i<column;i++){
    array[row][i]=(i+1)*number;
    printf("%d\t",array[row][i]);}
    printf("\n");
}
//28.Printing the table of any number using 2d array using function (call by value)(more rows = more numbers)(row index starts from 0)
#include<stdio.h>
void table3(int array[][100],int row,int column,int number);
int main(){
    int row,column,number[100];
    printf("Enter how many rows number you  want: ");//if row number is 2 then the row index will be 0 and 1
    scanf("%d",&row);
    printf("Enter the column number: ");
    scanf("%d",&column);
    int array[row][100];
    for(int i=0;i<row;i++){
    printf("Enter the number: ");
    scanf("%d",&number[i]);}//}
    for(int i=0;i<row;i++){
    table3(array,i,column,number[i]);}
    return 0;
}
void table3(int array[][100],int row,int column,int number){
    for(int i=0;i<column;i++){
    array[row][i]=(i+1)*number;
    printf("%d\t",array[row][i]);}
    printf("\n");
}

//29.Addition of 2-2d arrays(similarly subtraction can be done)
//VVI program//
#include<stdio.h>
int main(){
    int array[3][5],array1[3][5];
    for(int row=0;row<3;row++){
        printf("Enter the elements of row %d: \n",row);
        for(int column=0;column<5;column++){
            printf("Enter the elements of column %d: ",column);
            scanf("%d",&array[row][column]);
        }
    }for(int row=0;row<3;row++){
        for(int column=0;column<5;column++){
            printf("row and column [%d][%d]: %d\n",row,column,array[row][column]);
        }
    }
    for(int row=0;row<3;row++){
        printf("Enter the elements of row %d: \n",row);
        for(int column=0;column<5;column++){
            printf("Enter the elements of column %d: ",column);
            scanf("%d",&array1[row][column]);
        }
    }for(int row=0;row<3;row++){
        for(int column=0;column<5;column++){
            printf("row and column [%d][%d]: %d\n",row,column,array1[row][column]);
        }
    }
    printf("After addition the elements are: \n");
    for(int row=0;row<3;row++){
        for(int column=0;column<5;column++){
            printf("row and column [%d][%d]: %d\n",row,column,array[row][column]+array1[row][column]);
        }
    }
    return 0;
}
//30.2-d matrix multiplication
#include<stdio.h>
int main(){
    int array1[2][3],array2[3][2];
    for(int i=0;i<2;i++){
        printf("Enter the elements of row %d:\n",i);
        for(int j=0;j<3;j++){
            printf("Enter the number %d :",j);
            scanf("%d",&array1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        printf("Enter the elements of row %d:\n",i);
        for(int j=0;j<2;j++){
            printf("Enter the number %d: ",j);
            scanf("%d",&array2[i][j]);
        }
    }
    printf("First Array \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("array[%d][%d]: %d\n",i,j,array1[i][j]);
        }
    }
    printf("Second Array \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("array[%d][%d]: %d\n",i,j,array2[i][j]);
        }
    }
    return 0;
}
//2X3 and 3X2 matrix multiplication
#include <stdio.h>

int main() {
    int array1[2][3], array2[3][2], result[2][2] = {0};

    // Input for array1
    for (int i = 0; i < 2; i++) {
        printf("Enter the elements of row %d:\n", i);
        for (int j = 0; j < 3; j++) {
            printf("Enter the number %d: ", j);
            scanf("%d", &array1[i][j]);
        }
    }

    // Input for array2
    for (int i = 0; i < 3; i++) {
        printf("Enter the elements of row %d:\n", i);
        for (int j = 0; j < 2; j++) {
            printf("Enter the number %d: ", j);
            scanf("%d", &array2[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Result Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// VVI PROGRAM//
//Multiplication of 2 M X N number of matrix (Row and Column of both matrices will be created by the user)
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the row number of first matrix: ");
    scanf("%d",&a);
    printf("Enter the column number of first matrix: ");
    scanf("%d",&b);
    printf("Enter the row number of second matrix: ");
    scanf("%d",&c);
    printf("Enter the column number of second matrix: ");
    scanf("%d",&d);
    int x[a][b],y[c][d];
    int result[a][d];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            result[i][j] = 0;
        }
    }
    for(int i=0;i<a;i++){
        printf("Enter the Element of row %d: \n",i);
        for(int j=0;j<b;j++){
            printf("Enter the element of matrix[%d][%d]: ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        printf("Enter the Element of row %d: \n",i);
        for(int j=0;j<d;j++){
            printf("Enter the element of matrix[%d][%d]: ",i,j);
            scanf("%d",&y[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            for(int k=0;k<b;k++){
                result[i][j]=result[i][j]+x[i][k]*y[k][j];
            }
        }
    }
    printf("Result Matrix:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//31.Element wise multiplication of 2-d arrays
//VVI program//
#include<stdio.h>
int main(){
    int array[3][2],array1[2][3];
    for(int row=0;row<3;row++){
        printf("Enter the elements of row %d: \n",row);
        for(int column=0;column<2;column++){
            printf("Enter the elements of column %d: ",column);
            scanf("%d",&array[row][column]);
        }
    }for(int row=0;row<3;row++){
        for(int column=0;column<2;column++){
            printf("row and column [%d][%d]: %d\n",row,column,array[row][column]);
        }
    }
    for(int row=0;row<2;row++){
        printf("Enter the elements of row %d: \n",row);
        for(int column=0;column<3;column++){
            printf("Enter the elements of column %d: ",column);
            scanf("%d",&array1[row][column]);
        }
    }for(int row=0;row<2;row++){
        for(int column=0;column<3;column++){
            printf("row and column [%d][%d]: %d\n",row,column,array1[row][column]);
        }
    }
    printf("After element wise multiplication the elements are: \n");
    for(int row=0;row<2;row++){
        for(int column=0;column<2;column++){
            printf("row and column [%d][%d]: %d\n",row,column,array[row][column]*array1[row][column]);
        }
    }
    return 0;
}

//32.Program to find the array elements are even or odd
#include<stdio.h>
void odd(int array[],int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int array[n];
    odd(array,n);
    return 0;
}
void odd(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d.Enter the number: ",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(array[i]%2!=0){
            printf("%d.The odd number in the array is: %d\n",i+1,array[i]);
        }}
        for(int i=0;i<n;i++){
        if(array[i]%2==0){
            printf("%d.The even number in the array is: %d\n",i+1,array[i]);
        }}
}
//33.Print the array elements in reverse order (from user defined input)
#include<stdio.h>
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        printf("%d.Enter the elements: ",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d.The elements are: %d\n",i,array[i]);
    }
    return 0;
}
//34.Print the array elements in reverse order (from pre-defined input)
#include<stdio.h>
int main(){
    int array[5]={11,27,36,48,59};
    for(int i=4;i>=0;i--){
        printf("array[%d].The elements are: %d %d\n",i,array[i],array[3]);
    }
    printf("%d",array[3]);
    return 0;
}
//35.Print the array elements in reverse order (from user defined input)(size of array >45 and implement array[45]=788)
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        array[i]=i+1;
    }
    array[45]=788;
    for(int i=n-1;i>=0;i--){
        printf("array[%d].the elements in the array is: %d\n",i,array[i]);
    }
    printf("%d %d %d ",array[20],array[30],array[40]);
    return 0;
}
//36.Print the array elements in reverse order (from pre-defined input) using swapping
#include<stdio.h>
int main(){
    int array[5]={11,27,36,48,59};
    int temp=array[0];
    array[0]=array[4];
    array[4]=temp;
    temp=array[1];
    array[1]=array[3];
    array[3]=temp;
    array[2]=array[2];
    for(int i=0;i<5;i++){
        printf("array[%d].The elements are: %d\n",i,array[i]);
    }
    return 0;
}
//37.Print the array elements in reverse order (from pre-defined input) using swapping and sizeof operator
#include<stdio.h>
int main(){
    int array[]={11,27,36,48,59};
    int size=sizeof(array)/sizeof(array[0]); //this counts the size of array
    //sizeof(array)/sizeof(array[0]);sizeof(array) it means the size of total elements of the array divided by one element of the array which is represented by sizeof(array[0])
    //for an example this is an integer type of array and there are 5 integer elements in the array ; size of one integer element is 4byte; so sum of 5 elements in the array willbe 5*4=20 is divided by one element of the array (4byte)
    //so 20/4=5 ; the size of array is 5 
    printf("Original Array\n");
    for(int i=0;i<size;i++){
        printf("array[%d].The elements are: %d\n",i,array[i]);
    } 
    int temp=array[0];
    array[0]=array[4];
    array[4]=temp;
    temp=array[1];
    array[1]=array[3];
    array[3]=temp;
    array[2]=array[2];
    printf("Revesed Array\n");
    for(int i=0;i<size;i++){
        printf("array[%d].The elements are: %d\n",i,array[i]);
    }
    return 0;
}
//Implimemtation of sizeof operator in character array
#include <stdio.h>

int main() {
    char array[] = {'h','e','l','l','o'};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Total size of array: %d\n", sizeof(array));
    printf("Size of each element: %d\n", sizeof(array[0]));
    printf("Number of elements: %d\n", size);

    return 0;
}
//Implimemtation of sizeof operator in integer array
#include <stdio.h>

int main() {
    int array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Total size of array: %d\n", sizeof(array));
    printf("Size of each element: %d\n", sizeof(array[0]));
    printf("Number of elements: %d\n", size);

    return 0;
}
//Implementation of sizeof operator in a integer array which contains charactr elements
#include <stdio.h>

int main() {
    int array[] = {'h','e','l','l','o'};//array elements are character but the array is a integer type array thatswhy the elements of the array is treated as integer
    int size = sizeof(array) / sizeof(array[0]);

    printf("Total size of array: %d\n", sizeof(array));
    printf("Size of each element: %d\n", sizeof(array[0]));
    printf("Number of elements: %d\n", size);

    return 0;
}
//Implementation of nsizeof operator in a character type of array which contains integer elements
#include <stdio.h>

int main() {
    char array[] = {1,2,3,4,5};//array elements are integer but the array is a character type array thatswhy the elements of the array is treated as character
    int size = sizeof(array) / sizeof(array[0]);

    printf("Total size of array: %d\n", sizeof(array));
    printf("Size of each element: %d\n", sizeof(array[0]));
    printf("Number of elements: %d\n", size);

    return 0;
}


//38.Print the array elements in reverse order (from pre-defined input) using swapping and sizeof operator
#include<stdio.h>
void swappedarray(int array[],int size);
void originalarray(int array[],int size);
int main(){
    int array[]={11,27,36,48,59};
    int size=sizeof(array)/sizeof(array[0]);
    originalarray(array,size);
    swappedarray(array,size);
    originalarray(array,size);
    return 0;
}
void swappedarray(int array[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    start++;
    end--;}
    printf("Swapped Array\n");
}
void originalarray(int array[],int size){
    printf("Original Array\n");
    for(int i=0;i<size;i++){
        printf("array[%d].The elements are: %d\n",i,array[i]);
    }
}
//39.Print the array elements in reverse order (from pre-defined input) using swapping and sizeof operator
#include<stdio.h>
void swappedarray(int array[],int size);
void originalarray(int array[],int size);
int main(){
    int array[]={11,27,36,48,59};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Original Array\n");
    originalarray(array,size);
    swappedarray(array,size);
    printf("Swapped Array\n");
    originalarray(array,size);
    return 0;
}
void swappedarray(int array[],int size){
    for(int i=0;i<size/2;i++){//when i=2 the elements of the original array will be swapped and the loop will end
        int temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
    }
    for(int i=0;i<size;i++){
        printf("array[%d] %d\n",i,array[i]);
    }
}
void originalarray(int array[],int size){
    for(int i=0;i<size;i++){
        printf("array[%d].The elements are: %d\n",i,array[i]);
    }
}
//40.Print the array elements in reverse order (from user-defined input) using swapping using function
#include<stdio.h>
void swappedarray(int array[],int size);
void originalarray(int array[],int size);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        printf("Enter the elements: ");
        scanf("%d",&array[i]);}
    printf("Original Array\n");
    originalarray(array,size);
    swappedarray(array,size);
    printf("Swapped Array\n");
    originalarray(array,size);
    return 0;
}
void swappedarray(int array[],int size){
    for(int i=0;i<size/2;i++){//when i=2 the elements of the original array will be swapped and the loop will end
        int temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
    }
}
void originalarray(int array[],int size){
        for(int i=0;i<size;i++){
        printf("array[%d].The elements are: %d\n",i,array[i]);}
}
//41.Print the array elements in reverse order (from user-defined input) using swapping using function
#include<stdio.h>
void swappedarray(int array[],int size);
void originalarray(int array[],int size);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("Original Array\n");
    originalarray(array,size);
    swappedarray(array,size);
    return 0;
}
void swappedarray(int array[],int size){
    for(int i=0;i<size/2;i++){//when i=2 the elements of the original array will be swapped and the loop will end
        int temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
        printf("array[%d]|The elements are: %d\n",i,array[i]);}// this line only print swapped array but here comes an issue of printing; it will print the swapped array until loop ending statement comes here the ending statement is size/2
        //if the size of the array is 5 the loop will end at i=2; so it will print only for 0th psition and 1th position; so it will not generate desired output
        printf("Swapped Array\n");
    for(int i=0;i<size;i++){
         printf("array[%d].The elements are: %d\n",i,array[i]);// it will give the swapped array output
     }
}
void originalarray(int array[],int size){
    for(int i=0;i<size;i++){
        printf("Enter the elements: ");
        scanf("%d",&array[i]);
        printf("array[%d].The elements are: %d\n",i,array[i]);}
        for(int i=0;i<size;i++){
        printf("array[%d].The elements are: %d\n",i,array[i]);}
}
//42.Print the array elements in reverse order (from pre-defined input) using swapping and sizeof operator
#include<stdio.h>
void swappedarray(int array[],int size);
void originalarray(int array[],int size);
int main(){
    int array[]={11,27,36,48,59};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Original Array\n");
    originalarray(array,size);
    swappedarray(array,size);
    printf("Swapped Array\n");
    originalarray(array,size);
    return 0;
}
void swappedarray(int array[],int size){
    for(int i=0;i<size;i++){//here the loop will run till (size-1) but it will generate the similar result like the Original array
    //because when i=2 the elements of the original array will be swapped and when i=4 the swapped array swapped again to achieve the original array again
    //the loop will run from i=0 to i=(size-1) or i=4
        int temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
    }
}
void originalarray(int array[],int size){
    for(int i=0;i<size;i++){
        printf("array[%d].The elements are: %d\n",i,array[i]);
    }
}
//43.Program to find Fibonacci value of a number using array using function (void-int-void)
#include<stdio.h>
void fibonacci(int fib[], int n);
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int fib[n];
    fibonacci(fib,n);
    return 0;
}
void fibonacci(int fib[], int n){
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
    for(int i=3;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    printf("the fibonaccivalue of %d will be: %d\n",i,fib[i]);}
}
//44.Program to find Fibonacci value of a number using array using function (int-int-int)
#include<stdio.h>
int fibonacci1(int fib[], int n);
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int fib[n];
    printf("the fibonaccivalue of %d will be: %d\n",n,fibonacci1(fib,n));
    return 0;
}
int fibonacci1(int fib[], int n){
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
    for(int i=3;i<n;i++){
    fib[i]=fib[i-1]+fib[i-2];}
    return  fib[n-1]+fib[n-2];
}
//VVI
//45.Implementation of array to find the largest number in the array
#include<stdio.h>
void largestnumber(int array[],int n);
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    largestnumber(array,n);
    return 0;
}
void largestnumber(int array[],int n){
    int largest;
    for(int i=0;i<n;i++){
    printf("Enter the number array[%d]: ",i);
    scanf("%d",&array[i]);}
    largest=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>largest){
        largest=array[i];}
    }
    printf("The largest number of the array is: %d\n",largest);
}
//VVI
//46.Implementation of array to find the smallest number in the array
#include<stdio.h>
void smallestnumber(int array[],int n);
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    smallestnumber(array,n);
    return 0;
}
void smallestnumber(int array[],int n){
    int smallest;
    for(int i=0;i<n;i++){
    printf("Enter the number array[%d]: ",i);
    scanf("%d",&array[i]);}
    smallest=array[0];
    for(int i=0;i<n;i++){
        if(array[i]<smallest){
        smallest=array[i];}
    }
    printf("The smallest number of the array is: %d\n",smallest);
}
//VVI
//47.Implementation of array to find the largest and smallest number in the array
#include<stdio.h>
void largest_and_smallest(int array[],int size);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    largest_and_smallest(array,size);
    return 0;
}
void largest_and_smallest(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d.Enter the elements of the array[%d]: ",i+1,i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d.Array[%d] Elemnents: %d\n",i+1,i,array[i]);
    }
    int smallest;
    int largest;
    int equal;
    smallest=largest=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest=array[i];
        }
        else if(array[i]<smallest){
            smallest=array[i];
        }
        else if(array[i]==largest && array[i]==smallest){//&& (it will follow the truthtable of and gate)
        //basically i had assigned the array[0] value to largest and smallest value as the initialization statement (smallest=largest=array[0])
        //so (array[i]==largest && array[i]==smallest) this statement will check the element of the array is equal to the array[0] element or not 
        //but in this program when we put array elements it should be equal element at array[0] because at first we assigned (smallest=largest=array[0]) and both checking will start from array[0]
        //then it will checks how many times the array[0] element occurs in the array; if the same element is found again then it will print again the equal array element found at array[___] location 
            equal=array[i];
        }
        // else if(array[i]==smallest){  //these 2 parts are replaced with the previous expression
        //      equal=array[i];
        // }
        // else if(array[i]==largest){
        //      equal=array[i];
        // }
    }
    for(int i=0;i<size;i++){
        if(array[i]==largest){
    printf("The largest element of the array[%d] is: %d\n",i,array[i]);}
        if(array[i]==smallest){
    printf("The smallest element of the array[%d] is: %d\n",i,array[i]);}
        if(array[i]==equal){
    printf("The equal number found at array[%d] is: %d\n",i,array[i]);}}
}
//VVI
//48.Implementation of array to find the largest and smallest number in the array
#include<stdio.h>
void largest_and_smallest(int array[],int size);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    largest_and_smallest(array,size);
    return 0;
}
void largest_and_smallest(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d.Enter the elements of the array[%d]: ",i+1,i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d.Array[%d] Elemnents: %d\n",i+1,i,array[i]);
    }
    int smallest;
    int largest;
    int equal;
    smallest=largest=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest=array[i];
        }
        else if(array[i]<smallest){
            smallest=array[i];
        }
        else if(array[i]==largest || array[i]==smallest){//|| (it will follow the truthtable of or gate)
        //basically i had assigned the array[0] value to largest and smallest value as the initialization statement (smallest=largest=array[0])
        //so (array[i]==largest && array[i]==smallest) this statement will check the element of the array is equal to the array[0] element or not 
        //but in this program when we put array elements it should be equal element at array[0] because at first we assigned (smallest=largest=array[0]) and both checking will start from array[0]
        //then it will checks how many times the array[0] element occurs in the array; if the same element is found again then it will print again the equal array element found at array[___] location
            equal=array[i];
        }
        // else if(array[i]==smallest){  //these 2 parts are replaced with the previous expression
        //      equal=array[i];
        // }
        // else if(array[i]==largest){
        //      equal=array[i];
        // }
    }
    for(int i=0;i<size;i++){
        if(array[i]==largest){
    printf("The largest element of the array[%d] is: %d\n",i,array[i]);}
        if(array[i]==smallest){
    printf("The smallest element of the array[%d] is: %d\n",i,array[i]);}
        if(array[i]==equal){
    printf("The equal number found at array[%d] is: %d\n",i,array[i]);}}
}
//VVI
//49.Implementation of array to find the largest and smallest number in the array
#include <stdio.h>

void largest_and_smallest(int array[], int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    largest_and_smallest(array, size);
    return 0;
}

void largest_and_smallest(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. Enter the elements of the array[%d]: ", i + 1, i);
        scanf("%d", &array[i]);
    }

    int smallest, largest, equal;
    smallest = largest = array[0];
    int equalEncountered = 0;  // Flag to check if equal condition is encountered

    for (int i = 0; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        } else if (array[i] < smallest) {
            smallest = array[i];
        } else if (array[i] == largest || array[i] == smallest) {
            equal = array[i];
            equalEncountered = 1;
        }
    }

    if (equalEncountered) {
        printf("Equal condition encountered at array[%d]. Value: %d\n", 0, equal);
    }

    for (int i = 0; i < size; i++) {
        if (array[i] == largest) {
            printf("The largest element of the array[%d] is: %d\n", i, array[i]);
        }
        if (array[i] == smallest) {
            printf("The smallest element of the array[%d] is: %d\n", i, array[i]);
        }
        if (array[i] == equal) {
            printf("The equal number found at array[%d] is: %d\n", i, array[i]);
        }
    }
}
//VVI
//50.Implementation element in the last position of the array
#include<stdio.h>
int main(){
    int array[5];
    int size=sizeof(array)/sizeof(array[0]);
    printf("Enter the last element of the array array[4]:");
    scanf("%d",&array[size-1]);
    for(int i=0;i<size-1;i++){
        printf("Enter the last element of the array array[%d]:",i);
    scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        printf("Elements of the array is array[%d]: %d\n",i,array[i]);
    }
    return 0;
}
//VVI
//51.Linear search using array
#include<stdio.h>
void search(int array[],int n);
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    search(array,n);
    return 0;
}
void search(int array[],int n){
    for(int i=0;i<n;i++){
        printf("Enter the array elements array[%d]: ",i);
        scanf("%d",&array[i]);}
    for(int i=0;i<n;i++){
        printf("The elements of the array is array[%d]: %d\n",i,array[i]);}
    int search_number;
        printf("Enter the number to find: ");
        scanf("%d",&search_number);
    int count=0;
    for(int i=0;i<n;i++){
        if(array[i]==search_number){
        count++;//it counts the search element in the array how many time occurs
    }}
    for(int i=0;i<n;i++){
    if(array[i]==search_number){
    printf("The number is found in the array: %d %d times at array[%d]\n",array[i],count,i);}}
    for(int i=0;i<n;i++){
    if(array[i]!=search_number){
         printf("Number not found in the array[%d]\n",i);}}}
//VVI
//52.Implementation of linear search using array from user defined input
#include<stdio.h>
void search(int array[],int size);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    search(array,size);
    return 0;
}
void search(int array[],int size){
    for(int i=0;i<size;i++){
        printf("Enter the array Elements array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        printf("The elements of the array is array[%d]: %d\n",i,array[i]);
    }
    int search_number;
    printf("Enter the number to find: ");
    scanf("%d",&search_number);
    int find=0;
    //find variable:
    // It is initially set to 0.
    // Inside the loop that iterates through the array elements, if the current element matches the search_number, find is set to 1, indicating that the number is found at least once.
    // If find remains 0 after the loop, it means the number was not found in the array.
    // This variable is mainly used for a boolean check to determine if the specified number is present in the array.
    int count=0;
    // count variable:
    // It is initially set to 0.
    // It is used to count how many times the specified number (search_number) occurs in the array.
    // When a match is found (i.e., array[i] == search_number), count is incremented.
    // After the loop, the program prints the number of times the search number was found in the array.
    for(int i=0;i<size;i++){
        if(array[i]==search_number){
            find=1;
            count++;
        }
    }
    if(find==1){//
        printf("The number found in the array: %d %d times\n",search_number,count);
    }
    else if(find==0){//
        printf("Number not found in the array");
    }
    else{
        printf("Invalid input");
    }
}
//VVI
//53.Program to find how many times a perticular element present in the pre-defined array (The element is 10)
#include <stdio.h>

int main() {
    int array[] = {10, 25, 10, 42, 55, 67, 10, 89, 90, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int target;
    printf("Enter the element to find: ");
    scanf("%d",&target);
    int count = 0; // Counter for occurrences

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            count++;
        }
    }

    // Print the result
    printf("The number %d occurs %d times in the array.\n", target, count);
    //if target number is absent in the array it will show "The number 'X' occurs 0 times in the array 

    return 0;
}
//54.Program to find largest and smallest number in 2 different arrays and find a perticular number how many times occurs in the both arrays together and individually 
#include<stdio.h>
void largest_and_smallest(int array[],int size);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array1[size];
    int array2[size];
    printf("Enter the elements of array 1 \n");
    largest_and_smallest(array1,size);
    printf("Enter the elements of array 2 \n");
    largest_and_smallest(array2,size);
    int common_element=0;
    int count =0;
    int count1=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        if(array1[i]==array2[j]){
            common_element++;
        printf("The same elements are found at array1[%d] and array2[%d] %d times the elements is %d\n",i,j,common_element,array1[i]);
        //printf("The same elements are found at array1[%d] and array2[%d] %d timesthe elements is %d\n",i,j,common_element,array2[j]);// this will also print the same thing
    //break;//break statement is added after finding a common element to exit the inner loop and avoid counting the same common element multiple times.
    }}}
    printf("The common element occurs %d times in the array \n",common_element);
    int target;
    printf("Enter the target element: ");
    scanf("%d",&target);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        if(target==array1[i] && target==array2[j]){// this will count how many times the target number found in the both arrays together (it will work as and gate truthtable (when both inputs are 1 the output also be 1))
            count++;}}}
            printf("The same element %d occurs atleast %d times in the array\n",target,count);
    for(int i=0;i<size;i++){
        if(target==array1[i]){// this will found how many times the target element is present the array1
            printf("The target element found at array1[%d] and the element is %d\n",i,array1[i]);
            count1++;
        }
    }
    for(int i=0;i<size;i++){
        if(target==array2[i]){// this will found how many times the target element is present the array2
            printf("The target element found at array2[%d] and the element is %d\n",i,array2[i]);
            count1++;
        }
    }
    printf("The same element %d occurs %d times in the array",target,count1);//this will print how many times the target element presennts in the both arrays
    
    return 0;
}
void largest_and_smallest(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d.Enter the elements of the array[%d]: ",i+1,i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d.Array[%d] Elemnents: %d\n",i+1,i,array[i]);
    }
    int smallest;
    int largest;
    smallest=largest=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest=array[i];
        }
        else if(array[i]<smallest){
            smallest=array[i];
        }}
    for(int i=0;i<size;i++){
        if(array[i]==largest){
    printf("The largest element of the array[%d] is: %d\n",i,array[i]);}
        if(array[i]==smallest){
    printf("The smallest element of the array[%d] is: %d\n",i,array[i]);}}
}
//55.Program to find largest and smallest number in 2 different arrays and find a perticular number how many times occurs in the both arrays together and individually
//using an extra function
#include<stdio.h>

void compareArrays(int array1[], int array2[], int size);
void inputArray(int array[], int size);

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size];
    int array2[size];

    printf("Enter the elements of array 1:\n");
    inputArray(array1, size);

    printf("Enter the elements of array 2:\n");
    inputArray(array2, size);

    compareArrays(array1, array2, size);

    return 0;
}

void compareArrays(int array1[], int array2[], int size) {
    int common_element = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array1[i] == array2[j]) {
                common_element++;
                printf("Common element found at array1[%d] and array2[%d]: %d\n", i, j, array1[i]);
                
            }
        }
    }

    printf("The number of common elements between the arrays: %d\n", common_element);

    int target;
    printf("Enter the target element to count: ");
    scanf("%d", &target);

    int count = 0;
    int count1 = 0;
    for (int i = 0; i < size; i++) {
        for(int j=0;j<size;j++){
        if (target == array1[i] && target == array2[j]) {
            count++;
        }
    }}

    printf("The number of occurrences of %d in the arrays: %d\n", target, count);
    for(int i=0;i<size;i++){
        if(target==array1[i]){// this will found how many times the target element is present the array1
            printf("The target element found at array1[%d] and the element is %d\n",i,array1[i]);
            count1++;
        }
    }
    for(int i=0;i<size;i++){
        if(target==array2[i]){// this will found how many times the target element is present the array2
            printf("The target element found at array2[%d] and the element is %d\n",i,array2[i]);
            count1++;
        }
    }
    printf("The same element %d occurs %d times in the array",target,count1);

}

void inputArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. Enter the element of the array[%d]: ", i + 1, i);
        scanf("%d", &array[i]);
    }
}
#include<stdio.h>
int main(){
    int x[]={3,4,6,2,1,11,45,78,9};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(x[i]>x[j]){
                int temp;
                temp=x[j];
                x[j]=x[i];
                x[i]=temp;
            }
        }
    }
    for(int i=0;i<9;i++){
        printf("%d,",x[i]);
    }
    return 0;
}
#include<stdio.h>
void sort(int array[],int size);
int main(){
    int size;
    printf("Enter The Size of The Array: ");
    scanf("%d",&size);
    int array[size];
    sort(array,size);
    return 0;
}
void sort(int array[],int size){
    for(int i=0;i<size;i++){
        printf("Enter The elements of The Array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("The Elements are: \n");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                int temp;
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
                count++;
            }
        }
    }
    printf("Elements After Sorting in Ascending order: \n");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("The Number of Swapping Require: %d times\n",count);
    int count1=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]<array[j]){
                int temp;
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
                count1++;
            }
        }
    }
    printf("Elements After Sorting in Descending order: \n");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("The Number of Swapping Require: %d times\n",count1);
}

#include<stdio.h>
void cut(int x[],int a,int b);
int main(){
    int x[]={12,23,34,45,56};
    int a=1,b=3;
    cut(x,a,b);
    return 0;
}
void cut(int x[],int a,int b){
    int y[100];
    int j=0;
    for(int i=a;i<=b;i++){
        y[j]=x[i];
        j++;
    }
    for(int i=0;i<j;i++){
        printf("array[%d] element %d\n",i,y[i]);
    }
}
//Program to remove and add elements in the array using pointer
#include<stdio.h>
void remove_element(int array[],int *n);
int main(){
    int n;
    printf("Enter the size of the Array: ");
    scanf("%d",&n);
    int array[n];
    remove_element(array,&n);
    return 0;
}
void remove_element(int array[],int *n){
    for(int i=0;i<*n;i++){
    printf("Enter The Array[%d] Elements: ",i);
    scanf("%d",&array[i]);
    }
    for(int i=0;i<*n;i++){
        printf("The Element of The Array are array[%d] = %d\n",i,array[i]);
    }
    int element;
    int found=0;
    printf("Enter The Element to Remove: ");
    scanf("%d",&element);
    for(int i=0;i<*n;i++){
        if(array[i]==element){
            found=1;
            for(int j=i;j<*n-1;j++){
            array[j]=array[j+1];}
            (*n)--;
            i--;
        }
    }
    if(!found){
        printf("Element Not Found!");}
    else{
    for(int i=0;i<*n;i++){
        printf("The Element of The Array are array[%d] = %d\n",i,array[i]);
    }
    int choice;
    printf("Do you want to add more numbers if yes press 1: ");
    scanf("%d",&choice);
    int a;
    if(choice==1){
    printf("Enter How many Elements you Want to Add: ");
    scanf("%d",&a);
    for(int i=*n;i<*n+a;i++){
        printf("Enter The Elements: ");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<*n+a;i++){
        printf("The Element of The Array are array[%d] = %d\n",i,array[i]);
    }
}}}
//Program to remove and add elements in the array
#include <stdio.h>

void remove_element1(int array[], int n);

int main() {
    int n;
    printf("Enter the size of the Array: ");
    scanf("%d", &n);
    int array[n];

    remove_element1(array, n);

    return 0;
}

void remove_element1(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter The Array[%d] Elements: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("The Element of The Array are array[%d] = %d\n", i, array[i]);
    }

    int element;
    int found = 0;
    printf("Enter The Element to Remove: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (array[i] == element) {
            found = 1;
            for (int j = i; j < n-1; j++) {//Using n-1 here to avoid access element which is beyond the array size
                array[j] = array[j + 1];//In which position in the array the unwanted element is found; the value of that position will be assigned to its just next value of the array
                //Example: if the unwanted value present at 3rd position of the array then the value of the 4th position of the array will be the value of the 3rd position 
            }
            n--;//size of the array will be decremented by 1
            //i--;//indeed not neceessary
        }
    }

    if (!found) {
        printf("Element Not Found!\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("The Element of The Array are array[%d] = %d\n", i, array[i]);
        }

        int choice;
        printf("Do you want to add more numbers? If yes, press 1: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int a;
            printf("Enter How many Elements you Want to Add: ");
            scanf("%d", &a);

            for (int i = n; i < n + a; i++) {
                printf("Enter The Elements: ");
                scanf("%d", &array[i]);
            }

            for (int i = 0; i < n + a; i++) {
                printf("The Element of The Array are array[%d] = %d\n", i, array[i]);
            }
        }
    }
}
// Create a code where user will enter an alphabet but he can see the very next alphabet from the alphabet he entered
#include<stdio.h>
int main(){
    char alpha;
    printf("Enter The Alphabet: ");
    scanf("%c",&alpha); 
    if(alpha>='A' && alpha<='Z'){
        alpha=alpha-'A'+'a';
    }
    char x[26];
    int index=0;
    for(int i=97;i<=122;i++){
        x[index]=i;
        index++;
    }
    for(int i=0;i<=25;i++){
        if(x[i]==alpha){
            //In C, characters are essentially integers representing their ASCII values. So, when we compare a character with an integer, the character gets implicitly converted to its ASCII value for the comparison.
            //Let's break it down:
            // I have an array x containing integers representing ASCII values ('a' to 'z').
            // I have a character variable alpha.
            // When I compare x[i] (an integer) with alpha (a character), alpha gets implicitly converted to its ASCII value.
            // For example, if alpha is 'a' (97 in ASCII), and x[i] is 97, the comparison if(x[i]==alpha) will evaluate to true because both sides of the comparison are now integers representing the same ASCII value.
            printf("You Have Entered %c",x[i+1]);
            break;
        }
        else if(alpha=='z'){
            printf("You Have Entered %c",x[0]);
            break;
        }
        else if(x[i]!=alpha && i==25){
            printf("Invalid input. Please enter a valid alphabet.");
            break;
        }
    }
    return 0;
}
// Create a code where user will enter an alphabet but he can see the very next alphabet from the alphabet he entered
#include<stdio.h>
int main(){
    char alpha;
    printf("Enter The Alphabet: ");
    scanf("%c",&alpha); 
    if(alpha>='A' && alpha<='Z'){
        alpha=alpha-'A'+'a';
    }
    char x[26];
    int index=0;
    for(char i='a';i<='z';i++){
        x[index]=i;
        index++;
    }
    for(int i=0;i<=25;i++){
        if(x[i]==alpha){//This is comparing datatype char with datatype char
            printf("You Have Entered %c",x[i+1]);
            break;
        }
        else if(alpha=='z'){
            printf("You Have Entered %c",x[0]);
            break;
        }
        else if(x[i]!=alpha && i==25){
            printf("Invalid input. Please enter a valid alphabet.");
            break;
        }
    }
    return 0;
}
// Printing a to z in lower case using array
#include<stdio.h>
int main(){
    char x[26];
    int in=0;
    for(char i='a';i<='z';i++){
        x[in]=i;
        in++;
    }
    for(int i=0;i<=25;i++){
        printf("%c",x[i]);
    }
    return 0;
}
// Printing a to z in lower case using array
#include<stdio.h>
int main(){
    char x[26];
    int in=0;
    for(int i=97;i<=122;i++){
        x[in]=i;
        in++;
    }
    for(int i=0;i<=25;i++){
        printf("%c",x[i]);
    }
    return 0;
}