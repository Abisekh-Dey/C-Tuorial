#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character is= %c",ch);
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character is= %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is= %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is= %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is= %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is= %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is= %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is= %c\n",ch);
    fclose(fptr);
    return 0;
}

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    char ch[20];
    fscanf(fptr,"%s",&ch);//fscanf reads the file content and saves the content into the desired address
    printf("Character is= %s",ch);//it prints the string into the output box
    fclose(fptr);
    return 0;
}

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    char ch[20];
    fscanf(fptr,"%s",ch);
    if(fptr == NULL){//it checks the Text.txt file exist or not 
        printf("File doesn't exist\n");
    }
    else{
        printf("Character is= %s",ch);//if the file exists it will print the file content (That is here a string)
    }
    fclose(fptr);
    return 0;
}
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Text.txt", "r");

    if (fptr == NULL) {
        printf("File not found or could not be opened.\n");
        return 1; // Exit the program indicating an error
    }

    char ch[20];
    if (fscanf(fptr, "%s", ch)==1) {
        printf("Character is= %s\n", ch);
    } else {
        printf("Error reading from the file.\n");
    }

    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    int ch;//for this program we need to change the contents of Text.txt into integer values
    fscanf(fptr,"%d",&ch);
    printf("Number is= %d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("number is= %d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("Number is= %d\n",ch);
    fclose(fptr);
    return 0;
}

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","w");
    char ch;
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');
    fclose(fptr);
    return 0;
}

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","w");
    fprintf(fptr,"%s","Abisekh");
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    int x=123456789;
    fptr=fopen("Text.txt","w");
    fprintf(fptr,"%d",x);//fprintf prints the content into the mention file
    printf("Number is = %d",x);//printf prints the content into the output box
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","w");
    char ch;
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c\n",'O');
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","a");//use of append mode
    fprintf(fptr,"%s","Abisekh");
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    char x;
    x=fgetc(fptr);
    while(x != EOF){
        printf("%c",x);
        x=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    char x;
    for(x=fgetc(fptr);x!=EOF;x=fgetc(fptr)){
        //The loop variable x is updated in the loop control section itself (x = fgetc(fptr)), so there's no need for a traditional increment operator like ++. The x = fgetc(fptr) statement is responsible for updating the value of x in each iteration.
        //In traditional for loops, we typically see an increment (or decrement) operation, such as i++ or i--, as part of the loop control section. However, in cases like reading from a file character by character using fgetc, the update of the loop variable is handled within the loop itself, as shown in my code.
        printf("%c",x);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    char x;
    for(x=fgetc(fptr);x!=EOF;){
        //The loop variable x is updated in the loop control section itself (x = fgetc(fptr)), so there's no need for a traditional increment operator like ++. The x = fgetc(fptr) statement is responsible for updating the value of x in each iteration.
        //In traditional for loops, we typically see an increment (or decrement) operation, such as i++ or i--, as part of the loop control section. However, in cases like reading from a file character by character using fgetc, the update of the loop variable is handled within the loop itself, as shown in my code.
        printf("%c",x);
        x=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    int x;
    fscanf(fptr,"%d",&x);
    printf("Character is= %d",x);
    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    int x;
    fscanf(fptr,"%d",&x);
    printf("%d\t",x);
    fscanf(fptr,"%d",&x);
    printf("%d\t",x);
    fscanf(fptr,"%d",&x);
    printf("%d\t",x);
    fclose(fptr);
    return 0;
}