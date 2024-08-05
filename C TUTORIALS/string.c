//a string is essentially an array of characters terminated by a null character ('\0'). 
//Printing of name using string using format specifier
#include<stdio.h>
int main(){
    char array_name[]="ABISEKH";
    char sur_name[]="DEY";
    printf("My name is %s %s",array_name,sur_name);
    return 0;
}
//Printing of name using string using format specifier
#include<stdio.h>
int main(){
    char x[] = "hello";
    printf("%s",x);
    return 0;
}
//VVI
//Implimentation of string in printf statement (what we write in the printf statement in the double quotes ("X") is a string or a character array terminated by a null character "\0")
#include <stdio.h>

int main() {
    printf("abisekh");  // Prints the string "abisekh" a string also a character array terminated by null character ('\0')
    //if we place the cursor at abisekh the we can see char[8]="abisekh"
    //there are 7 characters in abisekh but the character array char[8] shows the size of the array is 8; it's because when we write anything in double quotes it atutomatically adds null character
    //like char[8]={'a','b','i','s','e','k','h','\0'} ; '\0'  is automatically added as the last element of the array 
    //anything inside of ("x") double quotes is a string in c thatswhy what we write inside of (" ") printf prints that in the output box 
    return 0;
}
//VVI
//Printing a character array as string using format specifier
#include<stdio.h>
int main(){
    char x[] = {'h','e','l','l','o','w'};//x[] is a character array that contains 7 elements in the array 
    printf("%s",x);//here "%s" stands for string or character array char[3]={'%','s','\0'} 
    return 0;
}
//ALL STRINGS ARE CHARACTER ARRAY BUT ALL CHARACTER ARRAY IS NOT A STRING PROOF//
#include<stdio.h>
int main(){
    char x[]="Abisekh";//This is a string or a character array that contains a string
    //char x[]={'A','b','i','s','e','k','h','\0'};//Also I can write the previous line like this and it will act as a string
    printf("%s\n",x);
    char y[]={'A','b','i','s','e','k','h'};//This is only a character array because no null character is there
    //char y[]="Abisekh";//if I write this it will not only represents a character array but also it represents a string because before the end of the double quotes it automatically adds a null character
    //char x[]={'A','b','i','s','e','k','h','\0'};//if I write this it will not only represents a character array but also it represents a string because a null character is there 
    for(int i=0;i<sizeof (y)/sizeof (y[0]);i++){
        printf("%c",y[i]);}
    return 0;
    //We can say ALL STRINGS ARE CHARACTER ARRAY BUT ALL CHARACTER ARRAY IS NOT A STRING// 
}
//VVI
//Printing a character array using sizeof operator
//Printing a character array as string
//Printing a string
#include<stdio.h>
int main(){
    char x[] = {'h','e','l','l','o','w'};//This is a character array also a string because the null character is there
    for(int i=0;i<sizeof (x)/sizeof(x[0]);i++){
        printf("%c",x[i]);//This prints the character array x[]
    }
    printf("\n");
    for(int i=0;x[i]!='\0';i++){
        printf("%c",x[i]);//This loop is printing the character array x[] as a string.
    }
    printf("\n");
    printf("%s",x);//This is printing the string
    return 0;
}
//Printing a character array(which contains a string) as string
#include<stdio.h>
int main(){
    char x[]="Hello";//This is a string or character array x[] that contains a string
    //char x[] = {'h','e','l','l','o','\0'};//Both statements are correct
    for(int i=0; x[i]!='\0';i++){
        printf("%c",x[i]);//This loop is printing the character array x[] as a string.
    }
    printf("\n");
    for(int i=0;i<sizeof (x)/sizeof(x[0]);i++){
        printf("%c",x[i]);}//This prints the character array x[]; this allows us to print an array also a string
        //But using sizeof operator to print an array is correct choise but printing an string is not a correct choise (still it will generate the same result)
    return 0;
}
//Program to count how many characters in the string
#include <stdio.h>

int main() {
    char x[] = {'h', 'e', 'l', 'l', 'o', 'w', '\0'};
    
    int count = 0;
    for (int i = 0; x[i] != '\0'; i++) {
        printf("%c", x[i]);
        count++;
    }

    printf("\nThe number of characters is: %d\n", count);

    return 0;
}
//VVI
//Program to change lower case letters to upper case using function
#include <stdio.h>

int main() {
    char myString[] = "Hello";

    // Convert characters to uppercase
    for (int i = 0; myString[i] != '\0'; i++) {
        if (myString[i] >= 'a' && myString[i] <= 'z') {
            myString[i] = myString[i] - 'a' + 'A'; // Convert to uppercase
            //Here H is uppercase thatswhy it is not comming under this statement (myString[i] >= 'a' && myString[i] <= 'z') 
        }
    }

    // Print the modified string
    printf("%s\n", myString);

    return 0;
}

//VVI
//Program to change lower case letters to upper case using function
#include<stdio.h>
void casechange(char array[],char name[]);
int main(){
    char x[]="abisekh";
    char y[]="dey";
    casechange(x,"First name: ");
    casechange(y,"Last Name: ");
    return 0;
}
void casechange(char array[],char name[]){
    for(int i=0;array[i]!='\0';i++){
        printf("%c",array[i]);
        if(array[i]>='a' && array[i]<='z'){//here all operation will be done in ascii value of the single quoted character
        array[i]=array[i]-'a'+'A';}//in first step array[i]=array[0] the element at 0 location is 'a'; ascii value of 'a' is 97 and 'A' is 65
        //array[i]-'a'+'A'= 97-97+65 = 65 which is the ascii value of A and it is assigned to array[i]=array[0]
        //in second step array[i]=array[1] the element at 1 location is 'b'; ascii value of 'b' is 98 and 'A' is 65
        //array[i]-'b'+'A'= 98-97+65 = 66 which is the ascii value of B and it is assigned to array[i]=array[1] 
        //like this loop will be run till the null character terminated
    }
    printf("\n");
    printf("%s",name);
    printf("%s\n",array);
}
//VVI
//Program to change upper case letters to lower case using function
#include<stdio.h>
void case_change(char array[],char name[]);
int main(){
    char x[]="ABISEKH";
    char y[]="DEY";
    case_change(x,"First Name: ");
    case_change(y,"Last Name: ");
    return 0;
}
void case_change(char array[],char name[]){
    for(int i=0;array[i]!='\0';i++){
        printf("%c",array[i]);
        if(array[i]>='A' && array[i]<='Z'){
        array[i]=array[i]-'A'+'a';}
    }
    printf("\n");
    printf("%s",name);
    printf("%s\n",array);
}
//Program to convert uppercase letters to lowercase and lowercase letters to upper case
#include<stdio.h>
void case_change(char array[],char name[]);
int main(){
    char x[10];
    printf("Enter Firstname: ");
    scanf("%s",x);
    char y[10];
    printf("Enter Surname: ");
    scanf("%s",y);
    case_change(x,"First Name: ");
    case_change(y,"Last Name: ");
    return 0;
}
void case_change(char array[],char name[]){
    for(int i=0;array[i]!='\0';i++){
        printf("%c",array[i]);
        if(array[i]>='A' && array[i]<='Z'){
        array[i]=array[i]-'A'+'a';}
        else if(array[i]>='a' && array[i]<='z'){
        array[i]=array[i]-'a'+'A';}
    }
    printf("\n");
    printf("%s",name);
    printf("%s\n",array);
}

////Program to count how many times a perticular element occurs in the string
#include<stdio.h>
int main(){
    char x[]="Abisekh";
    char Target;
    int count=0;
    printf("Enter the Element want to find: ");
    scanf("%c",&Target);
    for(int i=0;x[i]!='\0';i++){
        if(x[i]==Target){
        count++;
        printf("Target Element found at array[%d] element is %c %d times",i,Target,count);
    }}
    return 0;
}
//Printing of name using loop and surname using string
#include<stdio.h>
int main(){
    char array[]={'A','b','i','s','e','k','h'};//character array declaration {'x'}
    char array2[]="DEY";//string declaration "x"
    printf("First name ");
    for(int i=0;i<sizeof(array)/sizeof array[0];i++){
    printf("%c",array[i]);}//using array
    printf("\n");
    printf("Surname %s\n",array2);//using string
    return 0;
}
//Printing name and surname using 2 functions and sizeof operator (this is not the ideal process to print a string)
//using sizeof operator to print the string is not the ideal process
#include<stdio.h>
void first_name(char array[],char size);
void last_name(char array2[],char size);
int main(){
    char array[]="Abisekh";//the character array[] contains a string
    char array2[]="DEY";//the character array2[] contains a string
    char size1;
    size1=sizeof(array)/sizeof(array[0]);
    char size2;
    size2=sizeof(array2)/sizeof(array2[0]);
    first_name(array,size1);
    last_name(array2,size2);
    return 0;
}
void first_name(char array[],char size){
    printf("First name: ");
    for(int i=0;i<size;i++){
        printf("%c",array[i]);
    }
    printf("\n");
}
void last_name(char array2[],char size){
    printf("Surname: ");
    for(int i=0;i<size;i++){
        printf("%c",array2[i]);
    }
}
//Printing of name using (string using loop)
#include<stdio.h>
int main(){
    char array[]="Abisekh";
    char array2[]="DEY";
    printf("First name:");
    for(int i=0;array[i]!='\0';i++){//here the loop will continue till when the elements of the array is not equal to the null character '\0'
    //and the loop will end when the element of the array matches to the null character '\0'
        printf("%c",array[i]);
    }
    printf("\n");
    printf("Surname: ");
    for(int i=0;array2[i]!='\0';i++){
        printf("%c",array2[i]);
    }
    return 0;
}
//Printing of name using (string using loop) using 2 functions
#include<stdio.h>
void firstname(char array[]);
void lastname(char array2[]);
int main(){
    char arr1[]="Abisekh";
    char arr2[]="DEY";
    firstname(arr1);
    lastname(arr2);
    return 0;
}
void firstname(char array[]){
    printf("First name: ");
    for(int i=0;array[i]!='\0';i++){
        printf("%c",array[i]);
    }
    printf("\n");
}
void lastname(char array2[]){
    printf("Surname: ");
    for(int i=0;array2[i]!='\0';i++){
        printf("%c",array2[i]);
    }
}
//Printing of name using (string using loop) using 2 functions
#include<stdio.h>
void firstname(char array[]);
void lastname(char array2[]);
int main(){
    char Firstname[]="Abisekh";
    char Surname[]="DEY";
    firstname(Firstname);
    lastname(Surname);
    return 0;
}
void firstname(char array[]){
    printf("First name: ");
    for(int i=0;array[i]!='\0';i++){
        printf("%c",array[i]);
    }
    printf("\n");
}
void lastname(char array2[]){
    printf("Surname: ");
    for(int i=0;array2[i]!='\0';i++){
        printf("%c",array2[i]);
    }
}
//Printing of name using (string using loop) using a single functions
#include<stdio.h>
void print_name(char array[]);
int main(){
    char Firstname[]="Abisekh";
    char Surname[]="DEY";
    print_name(Firstname);
    print_name(Surname);
    return 0;
}
void print_name(char array[]){
    printf("First name: ");
    for(int i=0;array[i]!='\0';i++){
        printf("%c",array[i]);
    }
    printf("\n");
}
//Printing of name using (string using loop) using a single functions
#include<stdio.h>

void printname(char array[], char label[]);

int main(){
    char Firstname[] = "Abisekh";
    char Surname[] = "DEY";

    printname(Firstname, "First name");//This calling function first passing the character array Firstname and then passing a string "First name" as arguement
    printname(Surname, "Surname");//This calling function first passing the character array Surname and then passing a string "Surname" as arguement

    return 0;
}

void printname(char array[], char label[]){//char label[]="First name" for the first call
    printf("%s: ", label);
    printf("%s ", array);//array[]=Firstname[] for the first call
    printf("\n");
}
//Printing string using format specifier and printing string using loop
#include<stdio.h>
int main(){
    char array_name[]={'A','b','i','s','e','k','h',' ','D','e','y','\0'};
    printf("My name is %s\n",array_name);
    for(int i=0;i<12;i++){
    printf("%c",array_name[i]);}
    return 0;
}
//Printing string using format specifier and printing string using loop and print the address of the string element
#include<stdio.h>
int main(){
    //char array_name[]={'A','b','i','s','e','k','h',' ','D','e','y','\0'};
    char array_name[]="Abisekh Dey";
    printf("My name is %s\n",array_name);
    for(int i=0;array_name[i]!='\0';i++){
    printf("%c",array_name[i]);}
    printf("\nAddress of elements of the array \n");
    for(int i=0;array_name[i]!='\0';i++){
    printf("Address: array_name[%d] array_name[%c] ascii value %d %d\n",i,array_name[i],array_name[i],&array_name[i]);}
    return 0;
}
#include<stdio.h>
//void printstring(char arr[]);
int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s",name);//&is not required here 
    printf("Your name is %s",name);
    return 0;
}
// void printstring(char arr[]){
//     for(int i=0;arr[i]!='\0';i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }
#include<stdio.h>
int main(){
    char x[50];
    printf("Enter Your Name: ");//i am entering 7 characters
    scanf("%s",x);
    printf("My name is %s\n",x);
    for(int i=0;x[i]!='\0';i++){
        printf("element at x[%d] is %c\n",i,x[i]);
    }
    printf("\n");
    for(int i=0;i<7;i++){// printing this loop to show there is a null character in the last position of the array
        printf("element at x[%d] is %c\n",i,x[i]);
    }
    return 0;
}
//printing of a name string from the user defined input  
//(The character array can store upto 10 elements or the size of the character array is 10 but the string can store only 7 charaters)
#include<stdio.h>

int main() {
    //char x[10];  // Increased array size to accommodate the null terminator '\0'
    char x[5];// still the string will print 7 elements
    printf("Enter Your name: ");
    scanf("%7s", x);  // Using %7s to limit input to 7 characters, leaving room for '\0'
    //When you use scanf to read a string using the %s format specifier, the function does not take the size of the destination array into account by default. This means that if the input string is longer than the size of the array, it can lead to a buffer overflow, causing undefined behavior.
    //To mitigate this risk, it's advisable to include a width specifier in the format string to limit the number of characters read. For example, using %6s will read at most 6 characters (leaving space for the null terminator) and prevent a buffer overflow.
    //To make your code safer, you should always ensure that the size specified in the format string is one less than the size of the array to leave room for the null terminator. For example, you can use %4s with an array of size 5.
    printf("My name is %s\n", x);
    //puts(x);//puts to print the string
    return 0;
}

//Printing of a string taking inputs from the user as character array
//Printing only 7 character of the array using string (%.*s)
#include<stdio.h>
int main(){
    char x[10];
    for(int i=0;i<10;i++){
        printf("Enter Your name: ");
        scanf(" %c",&x[i]);      
    }
    printf("My name is %s\n",x);
    printf("My name is %.*s\n",7,x);//%.*s operation only happens in string
    //%s: This format specifier is used to print strings. It expects a null-terminated character array (string) as an argument.
    //%.*s: This format specifier is an extension of %s. It allows you to specify the precision, and it expects two arguments: 
    //the first argument is an integer specifying the maximum number of characters to be printed, and the second argument is the string.
    return 0;
}

#include<stdio.h>
int main(){
    char arr[100];
    printf("Enter your name: ");
    gets(arr);//gets is used to take the string element from the user 
    //the difference between scanf and gets is scanf can not able to read space in the sentences where gets can do so
    //scanf only reads the character from the user which is before space 
    puts(arr);//puts prints the string
    return 0;
}
#include<stdio.h>
int main(){
    char arr[100];
    printf("Enter your name: ");
    fgets(arr,100,stdin);
    printf("%s",arr);
    //puts(arr);
    return 0;
}
#include<stdio.h>
int main(){
    char *str="HELLO";
    puts(str);
    str="HELLO WORLD";
    puts(str);
    return 0;
}
#include<stdio.h>
int main(){
    char x[10]="HELLO";
    char *str=x;
    //char *str=&x[0];//this also the same expression
    puts(str);
    str="HELLO WORLD";
    puts(str);
    return 0;
}
#include<stdio.h>
void print_length(char arr[]);
int main(){
    char x[100];
    print_length(x);
    return 0;
}
void print_length(char arr[]){
    printf("Enter Your name: ");
    fgets(arr,100,stdin);//If i use fgets it generates a newline charracter at last by default thatswhy when i print the length of the string an extra character will be counted
    //gets(arr);
    printf("Name is: ");
    puts(arr);
    int length=0;
    for(int i=0;arr[i]!='\n';i++){//To terminate the newline character which is generated by fgets function; here i wrote the ending statement as arr[i]!='\n'
    //Thatswhy the loop will end when i matches the newline caharcter '\n'
        printf("%c",arr[i]);
        length++;
    }
    printf("\nTotal Characters in your name is: %d",length);
}
#include<stdio.h>
#include<string.h>
void print_length(char arr[]);
int main(){
    char x[100];
    print_length(x);
    return 0;
}
void print_length(char arr[]){
    printf("Enter Your name: ");
    fgets(arr,100,stdin);
    puts(arr);
    int length=strlen(arr);
    printf("Total Characters in your name is: %d\n",length-1);//length-1 is used because to eliminate the newline character which is generated by fgets
    printf("Total Characters in your name is: %d\n",strlen(arr)-1);//This is also the same operation
}
#include<stdio.h>
#include<string.h>
void find(char arr[]);
int main(){
    char x[100];
    find(x);
    return 0;
}
void find(char arr[]){
    printf("Enter The Sentence: ");
    fgets(arr,100,stdin);
    char target_word[100];
    int count=0;
    printf("Enter The Word You Want to find: ");
    fgets(target_word,100,stdin);
    int length_arr=strlen(arr);
    int length_word=strlen(target_word);
    for(int i=0;i<=length_arr-length_word;i++){
    
        count++;
    }
    printf("The Target element is: %s occurs %d",target_word,count);

}
#include<stdio.h>
#include<string.h>
int main(){
    char x[]="HELLO";
    char y[]="ABISEKH";
    strcpy(x,y);//It copies string y to string x
    strcpy(y,x);//Now x=ABISEKH and it is copied to y
    printf("%s\n",x);
    printf("%s\n",y);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char x[20]="ABISEKH ";//If we want to use strcat function we have to mention the string size; size should be mentioned only for that string where both string concatinates; here that is x[20]
    char y[]="DEY";
    strcat(x,y);//strcat this function concatinates or mixes the left string(y) into the right string(x);
    //We can't pass more than 2 arguments in this function
    printf("Name is: %s",x);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char x[]="Hello";
    char y[]="Hello";
    printf("%d",strcmp(x,y));//It compares the first string with the second string to find which string comes first in the order
    //It compares the first character of each string; the comparison occurs with the ASCII value of the character of each string
    //If the first character of both strings ASCII value are same the it will return 0; 
    //if the first character's ASCII value is higher in the first string than the second string's first character's ASCII value then it will return +1 
    //if the first character's ASCII value is smaller in the first string than the second string's first character's ASCII value then it will return -1
    //If the first character of both strings are equal then it will check the second character of both strings and so on....
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char x[]="Hello";
    char y[]="hello";
    printf("%d",strcmp(x,y));//It compares the first string with the second string to find which string comes first in the order
    //It compares the first character of each string; the comparison occurs with the ASCII value of the character of each string
    //If the first character of both strings ASCII value are same the it will return 0; 
    //if the first character's ASCII value is higher in the first string than the second string's first character's ASCII value then it will return +1 
    //if the first character's ASCII value is smaller in the first string than the second string's first character's ASCII value then it will return -1
    //If the first character of both strings are equal then it will check the second character of both strings and so on....
    //Here the both string has the same element "Hello" & "hello" but in second string the first character is "h" which is in lowercase character;
    //So According to ASCII table the value of "h" is 104 which is bigger than "H" = 72; so the opretion will be like this strcmp(x-y)=strcmp(72-104);so it will generate a negetive value 
    //So it will generate -1  
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char x[]="Hello";
    char y[]="Apple";
    printf("%d",strcmp(x,y));//It compares the first sting with the second string to find which string comes first in the order
    //It compares the first character of each string; the comparison occurs with the ASCII value of the character of each string
    //If the first character of both strings ASCII value are same the it will return 0; 
    //if the first character's ASCII value is higher in the first string than the second string's first character's ASCII value then it will return +1 
    //if the first character's ASCII value is smaller in the first string than the second string's first character's ASCII value then it will return -1  
    //If the first character of both strings are equal then it will check the second character of both strings and so on....
    //According to ASCII table "H" is bigger than "A"; string x is grater than string y; So it will generate +1
    return 0;
}
#include <stdio.h>
#include <strings.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "HELLO";

    if (strcasecmp(str1, str2) == 0) {
        printf("The strings are equal (case-insensitive).\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char x[]="Abisekh";
    char y[]="Dey";
    printf("%d",strcmp(x,y));//Here according to ASCII value "D" is greter than "A"; so it will generate -1 
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2);

    if (result < 0) {
        printf("%s comes before %s.\n", str1, str2);
    } else if (result > 0) {
        printf("%s comes after %s.\n", str1, str2);
    } else {
        printf("%s and %s are equal.\n", str1, str2);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char names[][20] = {"John", "Alice", "Bob", "Charlie", "David"};//names[][20] 20 represents there can be 19 characters and 1 null character in the string
    int num_names = sizeof(names) / sizeof(names[0]);

    // Sorting the array of strings
    for (int i = 0; i < num_names ; i++) {
        for (int j = i+1; j < num_names; j++) {//here j++ has no use; the incrementation of j is happening by the changing value of i 
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j]
                // This function checks which characters's ASCII value comes earlier; this is how it swapps
                char temp[20];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Printing the sorted array
    for (int i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

void find(char arr[]);

int main() {
    char x[1000];
    find(x);
    return 0;
}

void find(char arr[]) {
    printf("Enter The Sentence: ");
    fgets(arr, 1000, stdin);

    char target_word[1000];
    int count = 0;

    printf("Enter The Word You Want to find: ");
    fgets(target_word, 1000, stdin);

    // Remove newline characters from input strings
    arr[strcspn(arr, "\n")] = '\0';
    target_word[strcspn(target_word, "\n")] = '\0';

    int sentence_length = strlen(arr);
    int target_length = strlen(target_word);

    for (int i = 0; i <= sentence_length - target_length; i++) {
        int match = 1;  // Assume a match at the beginning

        for (int j = 0; j < target_length; j++) {
            if (arr[i + j] != target_word[j]) {
                match = 0;  // Set match to 0 if characters don't match
                break;
            }
        }

        if (match) {
            count++;
        }
    }

    printf("The Target element \"%s\" occurs %d times\n", target_word, count);
}
//program to create new system generated password when we enter a password
#include<stdio.h>
#include<string.h>
void password(char x[]);
int main(){
    char a[100];
    printf("Enter Your Password: ");
    scanf("%s",a);
    password(a);
    return 0;
}
void password(char x[]){
    char new_password[200];
    char salt[]="2000";
    strcpy(new_password,x);
    strcat(new_password,salt);
    //printf("Your New password is: %s\n",new_password);
    printf("Your New password is: ");
    puts(new_password);
}
//program to slicing a part of the string from a predefined string
#include<stdio.h>
void slice(char x[],int n, int m);
int main(){
    char x[]="WWWAbisekhwww";
    int n=3,m=9;
    slice(x,n,m);
    return 0;
}
void slice(char x[],int n, int m){
    char string[100];
    int j=0;
        for(int i=n;i<=m;i++){
                string[j]=x[i];
                j++;
            }
            string[j]='\0';//only in this code the null character is no need to mention; but to specify this is a string i implement the null character
    printf("%s\n",string);   
    puts(string);
}
//program to slicing a part of the string from a predefined string
#include<stdio.h>
void string(char x[],int n, int m);
int main(){
    char x[]="WWWAbisekhwww";
    int n=3,m=9;
    string(x,n,m);
    return 0;
}
void string(char x[],int n, int m){
    char string[100];
    int k=0;
        for(int j=n;j<=m;j++){
            string[k]=x[j];
            k++;
    }
    for(int i=0;i<k;i++){
        printf("%c",string[i]);
    }
}

#include<stdio.h>
int main(){
    char x[]="abisekh";
    int count=0;
    for(int i=0;x[i]!='\0';i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u'){
        count++;
    }}
    printf("Vowel occurs %d times",count);
    return 0;
}
#include <stdio.h>

int main() {
    char x[] = "abisekh";
    int counts[5] = {0}; // Array to store counts for each vowel (a, e, i, o, u)
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; x[i] != '\0'; i++) {
        char currentChar = x[i];

        for (int j = 0; j < 5; j++) {
            if (currentChar == vowels[j]) {
                counts[j]++;
                //break; // Break out of the inner loop once a match is found
            }
        }
    }

    // Print the counts for each vowel
    for (int i = 0; i < 5; i++) {
        printf("Vowel '%c' occurs %d times\n", vowels[i], counts[i]);
    }

    return 0;
}
//Program to find any character occurs how many time in the string
//
#include<stdio.h>
int main(){
    char x[100];
    printf("Enter The Element: ");
    scanf("%s",x);
    int count=0;
    char target;
    printf("Enter The Element You Want to find: ");
    scanf("% c",&target);
    for(int i=0;x[i]!='\0';i++){
        if(x[i]==target){
            count++;
        }
    }
    for(int i=0;x[i]!='\0';i++){
        printf("The Character %c present %d times\n",x[i],count);
    }
    return 0;
}
#include<stdio.h>
int main(){
    char x[3][20];
    for(int i=0;i<3;i++){
        printf("Enter The String: ");
        scanf("%s",x[i]);
    }
    for(int i=0;i<3;i++){
        printf("The String is: %s\n",x[i]);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char x[3][20];
    for(int i=0;i<3;i++){
        printf("Enter The String: ");
        fgets(x[i],20,stdin);
        //x[i][strcspn(x[i], "\n")] = '\0';// Stop processing after the first newline character
    }
    for(int i=0;i<3;i++){
        //puts(x[i]);
        printf("%s\n",x[i]);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char x[3][20];
    for(int i=0;i<3;i++){
        printf("Enter The String: ");
        fgets(x[i],20,stdin);
        for (int j = 0; x[i][j] != '\0'; j++) {
            if (x[i][j] == '\n') {
                x[i][j] = '\0';
                break; // Stop processing after the first newline character
            }
        }
    }
    for(int i=0;i<3;i++){
        puts(x[i]);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "Hello, World!";
    const char str2[] = "aeiou";

    size_t length = strcspn(str1, str2);
    //The first character in str1 is 'H', which is not in the set str2.
    //The second character is 'e', which is in the set str2.
    //The strcspn function stops here and returns the length of the initial segment without vowels, which is the position of the first vowel, in this case, 1.

    printf("Length of initial segment without vowels: %zu\n", length);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "abcde";
    const char str2[] = "xyz";

    size_t length = strcspn(str1, str2);
    //In this example, str1 starts with 'a', which is not in str2. Therefore, the strcspn function will return the length of the entire initial segment of str1 without any character from str2, which is 5 in this case.
    printf("Length of initial segment without characters from str2: %zu\n", length);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char Uroll[100];

    // Input: Tab character followed by "12345"
    strcpy(Uroll, "\t12345");

    // Calculate the length of the initial segment of whitespace characters
    size_t initialSegmentLength = strspn(Uroll, " \t\r\n");

    // Calculate the total length of the string
    size_t totalLength = strlen(Uroll);

    // Output the lengths
    printf("Initial Segment Length: %zu\n", initialSegmentLength);
    printf("Total Length: %zu\n", totalLength);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char subject[] = "Math";
    int width = 25;

    // Calculate padding on both sides
    int padding = (width - strlen(subject)) / 2;

    // Center-align the string within the specified width
    printf("|%*s%-*s|\n", padding, "", width - padding, subject);

    return 0;
}
#include<stdio.h>
int main(){
    char x[20];
    fgets(x,20,stdin);
    int y;
    scanf("%d",&y);
    printf("name: %s roll: %d",x,y);
    return 0;
}
#include<stdio.h>
int main(){
    char x[8];
    printf("name: ");
    scanf("%s",x);
    for(int i=0;x[i]!='\0';i++){
    if(x[i]=='a'){
        printf("re enter\n");
        i--;
        continue;}
    }
    return 0;
}
#include <stdio.h>

int main() {
    char x[50]; // Choose a reasonable size for the array
    printf("Enter name: ");
    fgets(x, sizeof(x), stdin);

    for (int i = 0; x[i] != '\0'; i++) {
        if (x[i] == 'a' || x[i] == 'A') {
            printf("Character 'a' found. Re-enter the name.\n");
            i--; // Reset i to -1 to re-enter the entire name
            printf("Enter name: ");
            fgets(x, sizeof(x), stdin);
        }
    }

    printf("Name entered: %s", x);

    return 0;
}
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char x[100];
    int count=0;
    printf("enter the string: ");
    fgets(x,100,stdin);
    x[strcspn(x,"\n")]='\0';
    for(int i=0;x[i]!='\0';i++){
        if(isalpha(x[i])!=0){
            count++;
        }
    }
    printf("%s\n",x);
    printf("%d alphabets there in the string",count);
    return 0;
}
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
    char x[100];
    int count[26] = {0}; // Assuming only English alphabets are counted thats why there are 26 indexes
    //int count[26] = {0}; initializes an array count of size 26, and all elements of this array are set to 0

    printf("Enter the string: ");
    fgets(x, 100, stdin);
    x[strcspn(x, "\n")] = '\0';

    for (int i = 0; x[i] != '\0'; i++) {
        if (isalpha(x[i]) != 0) {//The expression isalpha(x[i]) != 0 checks if the character at position i in the array x is an alphabet character. 
            //The isalpha function returns a non-zero value if the character is an alphabet character and 0 otherwise. Therefore, != 0 is used to check if the result of isalpha is true.
            char uppercaseChar = toupper(x[i]);// Convert the character to uppercase to ensure case-insensitive counting
            count[uppercaseChar - 'A']++;//It checks how many time an alphabet is present in the string
            //At first we set all the 26 elements of the count array is 0
            //count[uppercaseChar - 'A']++; I am taking "Apple" for an example
            //The first element of the string is "A" but it is already in the uppercase so "A" will be assigned to uppercasechar
            //Then count[uppercaseChar - 'A']++ = count['A' - 'A']++ = count[0]++ ->this increments the value of the 0 index of the count array(which is prevoiusly set to 0) ; then after increment the value of the 0 index of the count array will be (0+1)=1
            //Then the second element of the string is "p" which is in the lowercase; so toupper(x[i]) will convert lowercase "p" to uppercase "P" and "P" will be assigned to uppercasechar
            //Then count[uppercaseChar - 'A']++ = count['P' - 'A']++ = count[80-65]++ = count[15]++ ->this increments the value of the 15 index of the count array(which is prevoiusly set to 0) ; then after increment the value of the 15 index of the count array will be (0+1)=1
            //Then again the third variable of the string is p; so the same process will be followed
            //And again count['P' - 'A']++ = count[80-65]++ = count[15]++ but this time the value of count[15] will be =(1+1)=2 
            //Then the checking will continue till the last element of the string 
        }
    }

    printf("%s\n", x);

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        if (count[ch - 'A'] > 0) {//It only checks if the count array of any specific index is > 0 or not
            printf("%c: %d times\n", ch, count[ch - 'A']);
        }
    }
    for(int i=0;i<26;i++){
        if(count[i]>0){
            printf("Element of count[%d] occurs: %d times\n",i,count[i]);
        }
    }

    return 0;
}
#include<stdio.h>
int main(){
    char x[10];
    for(int i=0;i<10;i++){
    scanf("%c",&x[i]);}
    for(int i=0;i<10;i++){
        printf("%c",x[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    printf("%c",x);
    return 0;
}
//is digit funcion returns 1 or 0 
//if the character is a digit then it will return 1 else it will return 0 if the character is an alphabet
#include<stdio.h>
#include<ctype.h>
int main(){
    int x='2';
    printf("%d",isdigit(x));
    return 0;
}
#include<stdio.h>
#include<ctype.h>
int main(){
    int x='a';
    printf("%d",isdigit(x));
    return 0;
}
//is alpha funcion returns 1,2 or 0 
//if the character is an Uppercase alphabet then it will return 1; if the character is a Lowercase alpabet then it will return 2 else it will return 0 if the character is a digit
#include<stdio.h>
#include<ctype.h>
int main(){
    int x='A';
    printf("%d",isalpha(x));
    return 0;
}
#include<stdio.h>
#include<ctype.h>
int main(){
    int x='a';
    printf("%d",isalpha(x));
    return 0;
}
#include<stdio.h>
#include<ctype.h>
int main(){
    int x='2';
    printf("%d",isalpha(x));
    return 0;
}