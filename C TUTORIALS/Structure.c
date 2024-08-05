#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll = 38;
    s1.cgpa = 8.2;
    //s1.name = "Abisekh"
    strcpy(s1.name,"Abisekh Dey");
    printf("My Name is: %s\n",s1.name);
    printf("Roll no: %d\n",s1.roll);
    printf("CGPA: %.2f\n",s1.cgpa);
    return 0;
}
#include<stdio.h>
//#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={38,8.2,"Abisekh Dey"};
    // s1.roll = 38;
    // s1.cgpa = 8.2;
    // //s1.name = "Abisekh"
    // strcpy(s1.name,"Abisekh Dey");
    printf("My Name is: %s\n",s1.name);
    printf("Roll no: %d\n",s1.roll);
    printf("CGPA: %.2f\n",s1.cgpa);
    struct student *ptr=&s1;
    printf("My Name is: %s\n",(*ptr).name);//printing name using pointer
    printf("My Name is: %s\n",ptr->name);
    printf("My Name is: %s\n",*ptr);//*ptr basically prints the value which is stored in the pointer but here 3 types of value stored in the pointer so we have to mention which value we are going to print
    //unlsess it will print nothing

    return 0;
}
#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}stu;
int main(){
    stu s1;
    s1.roll = 38;
    s1.cgpa = 8.2;
    //s1.name = "Abisekh"
    strcpy(s1.name,"Abisekh Dey");
    printf("My Name is: %s\n",s1.name);
    printf("Roll no: %d\n",s1.roll);
    printf("CGPA: %.2f\n",s1.cgpa);
    return 0;
}

#include<stdio.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
void details(struct student s1);
int main(){
    struct student s1={38,8.2,"Abisekh Dey"};
    details(s1);//call by value
    //call by reference is not applicable here
    return 0;
}
void details(struct student s1){//the arguement is just copied here
    printf("My Name is: %s\n",s1.name);
    printf("Roll no: %d\n",s1.roll);
    printf("CGPA: %.2f\n",s1.cgpa);
}
#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
void details(struct student s1);
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","w");
    int roll;
    printf("Enter Roll: ");
    scanf("%d",&roll);
    float cgpa;
    printf("Enter CGPA: ");
    scanf("%f",&cgpa);
    char name[1000];
    printf("Enter Name: ");
    scanf("%s",name);
    struct student s1={roll,cgpa};
    strcpy(s1.name,name);
    details(s1);//call by value
    //call by reference is not applicable here
    fprintf(fptr,"My Name is: %s\n",s1.name);
    fprintf(fptr,"Roll no: %d\n",s1.roll);
    fprintf(fptr,"CGPA: %.2f\n",s1.cgpa);
    fclose(fptr);
    return 0;
}
void details(struct student s1){//the arguement is just copied here
    printf("My Name is: %s\n",s1.name);
    printf("Roll no: %d\n",s1.roll);
    printf("CGPA: %.2f\n",s1.cgpa);
}

#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student students[3];
    for(int i=0;i<3;i++){
        printf("Enter the Details of students: %d\n",i+1);
        printf("Enter Roll number: ");
        scanf("%d",&students[i].roll);
        printf("Enter the CGPA: ");
        scanf("%f",&students[i].cgpa);
        printf("Enter the Name: ");
        while (getchar() != '\n');
        gets(students[i].name);}
    for(int i=0;i<3;i++){
    printf("My Name is: %s\n",students[i].name);
    printf("Roll no: %d\n",students[i].roll);
    printf("CGPA: %.2f\n",students[i].cgpa);
    }
    return 0;
}
#include <stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the Details of students: %d\n", i + 1);
        printf("Enter Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter the CGPA: ");
        scanf("%f", &students[i].cgpa);

        // Clear the input buffer to avoid issues with fgets
        while (getchar() != '\n');

        printf("Enter the Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove the newline character from the name
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
    }

    for (int i = 0; i < 3; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll no: %d\n", students[i].roll);
        printf("CGPA: %.2f\n", students[i].cgpa);
    }

    return 0;
}
