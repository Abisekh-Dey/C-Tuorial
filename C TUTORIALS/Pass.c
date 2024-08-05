#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void create_password(char x[],char y[]);
int main() {
    char character[100];
    char special_char[100];
    create_password(character,special_char);
    return 0;
}
void create_password(char x[],char y[]){
    char new_password[100];
    printf("Create Password\n");
    printf("____________________________________\n");
    printf("|Enter The Characters: ");
    fgets(x,100,stdin);
    printf("|__________________________________|\n");
    x[strcspn(x,"\n")]='\0';
    for(int i=0;x[i]!='\0';i++){
    if(isdigit(x[i])){
        system("cls");
        printf("____________________________________\n");
        printf("|Re-Enter Characters               |\n");
        i--;
        printf("|Enter The Characters: ");
        fgets(x,100,stdin);
        printf("|__________________________________|\n");
        x[strcspn(x,"\n")]='\0';
        }
    }
    if(x[0]>='a' && x[0]<='z'){
        x[0]=x[0]-'a'+'A';
    }
    for(int i=1;x[i]!='\0';i++){
        if(x[i]>='A' && x[i]<='Z'){
            x[i]=x[i]-'A'+'a';
        }
    }
    printf("|Enter Special Characters: ");
    fgets(y,100,stdin);
    printf("|__________________________________|\n");
    y[strcspn(y,"\n")]='\0';
    for(int i=0;y[i]!='\0';i++){
        if(y[i]=='+' || y[i]=='-' || y[i]=='>' || y[i]=='<' || y[i]=='?' || y[i]==',' || isalpha(y[i])){
            system("cls");
            printf("____________________________________\n");
            printf("|Re-Enter Special Characters       |\n");
            i--;
            printf("|Enter Special Characters: ");
            fgets(y,100,stdin);
            printf("|__________________________________|\n");
            y[strcspn(y,"\n")]='\0';
        }
    }
    char salt[]="@";
    strcpy(new_password,salt);
    strcat(new_password,x);
    strcat(new_password,y);
    strcat(new_password,salt);
    if(strcmp(new_password,"@Abisekh2000!!@")==0){
        printf("Password Set Successfully!!\n");
        printf("Password is: %s\n",new_password);
        printf("Next Page Press > : ");
    }
    else{
        return;
    }
    char choice[10];
    scanf("%s",choice);
    if(strcmp(choice,">")==0){
        system("cls");
        system("String_code1.exe");
        
    }
}
