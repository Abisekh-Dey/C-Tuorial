//GRADE GENERATION SYSTEM//

#include<stdio.h>
#include<math.h>
int main ()
{
    int CA,ROLL,PERCENTAGE_TOTAL_CREDIT_POINTS,ATTENDENCE,TOTAL_CREDIT_POINTS,O=10,E=9,A=8,B=7,C=6,D=5,F=2,I=2, SOFTWARE_ENGINEERING, COMPILER_DESIGN, OPERATING_SYSTEM, OBJECT_ORIENTED_PROGRAMMING, INDUSTRIAL_MANAGEMENT, AI;
    float credit = 3;
    char COLLEGE_NAME,STUDENT_NAME,DEPARTMENT;
    float SGPA;
    int credit_SOFTWARE_ENGINEERING ;
    int credit_COMPILER_DESIGN ;
    int credit_OPERATING_SYSTEM ;
    int credit_OBJECT_ORIENTED_PROGRAMMING ;
    int credit_INDUSTRIAL_MANAGEMENT ;
    int credit_AI ;
printf(" ENTER THE COLLEGE NAME \n");
scanf("%s",& COLLEGE_NAME);
printf("ENTER THE STUDENT NAME \n");
scanf("%s",& STUDENT_NAME);
printf("DEPARTMENT OF THE STUDENT \n");
scanf("%s",& DEPARTMENT);
printf("ROLL NO OF THE STUDENT \n");
scanf("%d",& ROLL);

printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of SOFTWARE ENGINEERING in 70:\n");
    scanf("%d",& SOFTWARE_ENGINEERING);
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(SOFTWARE_ENGINEERING+CA+ATTENDENCE>=90 && SOFTWARE_ENGINEERING+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O\n "); 
                credit_SOFTWARE_ENGINEERING = credit * O;
                printf("CREDIT POINT = %f\n", credit*O);}
        else if(SOFTWARE_ENGINEERING+CA+ATTENDENCE>=80 && SOFTWARE_ENGINEERING+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
                credit_SOFTWARE_ENGINEERING = credit * E;
                printf("CREDIT POINT = %f\n", credit*E);}
        else if(SOFTWARE_ENGINEERING+CA+ATTENDENCE>=70 && SOFTWARE_ENGINEERING+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
                credit_SOFTWARE_ENGINEERING = credit *A;
                printf("CREDIT POINT = %f\n", credit*A);}
        else if(SOFTWARE_ENGINEERING+CA+ATTENDENCE>=60 && SOFTWARE_ENGINEERING+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
                credit_SOFTWARE_ENGINEERING = credit * B;
                printf("CREDIT POINT = %f\n", credit*B);}
        else if(SOFTWARE_ENGINEERING+CA+ATTENDENCE>=50 && SOFTWARE_ENGINEERING+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
                credit_SOFTWARE_ENGINEERING = credit * C;
                printf("CREDIT POINT = %f\n", credit*C);}
        else if(SOFTWARE_ENGINEERING+CA+ATTENDENCE>=40 && SOFTWARE_ENGINEERING+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
                credit_SOFTWARE_ENGINEERING = credit * D;
                printf("CREDIT POINT = %f\n", credit*D);}
        else if(SOFTWARE_ENGINEERING+CA+ATTENDENCE>0 && SOFTWARE_ENGINEERING+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
                credit_SOFTWARE_ENGINEERING = credit * F;
                printf("CREDIT POINT = %f\n", credit*F);} 
        else if(SOFTWARE_ENGINEERING+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
                credit_SOFTWARE_ENGINEERING = credit * I;
                printf("CREDIT POINT = %f\n", credit*I);}
    else{
        printf("You Have Entered Wrong Information\n");
        if(SOFTWARE_ENGINEERING+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}
        
    }
printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of COMPILER_DESIGN in 70:\n");
    scanf("%d",&COMPILER_DESIGN);
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(COMPILER_DESIGN+CA+ATTENDENCE>=90 && COMPILER_DESIGN+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O\n ");
                credit_COMPILER_DESIGN  = credit * O;
                printf("CREDIT POINT = %f\n", credit*O);}
        else if(COMPILER_DESIGN+CA+ATTENDENCE>=80 && COMPILER_DESIGN+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
                credit_COMPILER_DESIGN  = credit * E;
                printf("CREDIT POINT = %f\n", credit*E);}
        else if(COMPILER_DESIGN+CA+ATTENDENCE>=70 && COMPILER_DESIGN+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
                credit_COMPILER_DESIGN  = credit * A;
                printf("CREDIT POINT = %f\n", credit*A);}
        else if(COMPILER_DESIGN+CA+ATTENDENCE>=60 && COMPILER_DESIGN+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
                credit_COMPILER_DESIGN  = credit * B;
                printf("CREDIT POINT = %f\n", credit*B);}
        else if(COMPILER_DESIGN+CA+ATTENDENCE>=50 && COMPILER_DESIGN+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
                credit_COMPILER_DESIGN  = credit * C;
                printf("CREDIT POINT = %f\n", credit*C);}
        else if(COMPILER_DESIGN+CA+ATTENDENCE>=40 && COMPILER_DESIGN+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
                credit_COMPILER_DESIGN  = credit * D;
                printf("CREDIT POINT = %f\n", credit*D);}
        else if(COMPILER_DESIGN+CA+ATTENDENCE>0 && COMPILER_DESIGN+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
                credit_COMPILER_DESIGN  = credit * F;
                printf("CREDIT POINT = %f\n", credit*F);} 
        else if(COMPILER_DESIGN+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
                credit_COMPILER_DESIGN  = credit * I;
                printf("CREDIT POINT = %f\n", credit*I);}
    else{
        printf("You Have Entered Wrong Information\n");
        if(COMPILER_DESIGN+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}
    }
printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of OPERATING_SYSTEM in 70:\n");
    scanf("%d",&OPERATING_SYSTEM);
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(OPERATING_SYSTEM+CA+ATTENDENCE>=90 && OPERATING_SYSTEM+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O \n");
               credit_OPERATING_SYSTEM = credit*O;
               printf("CREDIT POINT = %f\n", credit*O);}
        else if(OPERATING_SYSTEM+CA+ATTENDENCE>=80 && OPERATING_SYSTEM+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
               credit_OPERATING_SYSTEM = credit*E;
               printf("CREDIT POINT = %f\n", credit*E);}
        else if(OPERATING_SYSTEM+CA+ATTENDENCE>=70 && OPERATING_SYSTEM+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
               credit_OPERATING_SYSTEM = credit*A;
               printf("CREDIT POINT = %f\n", credit*A);}
        else if(OPERATING_SYSTEM+CA+ATTENDENCE>=60 && OPERATING_SYSTEM+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
               credit_OPERATING_SYSTEM = credit*B;
               printf("CREDIT POINT = %f\n", credit*B);}
        else if(OPERATING_SYSTEM+CA+ATTENDENCE>=50 && OPERATING_SYSTEM+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
               credit_OPERATING_SYSTEM = credit*C;
               printf("CREDIT POINT = %f\n", credit*C);}
        else if(OPERATING_SYSTEM+CA+ATTENDENCE>=40 && OPERATING_SYSTEM+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
               credit_OPERATING_SYSTEM = credit*D;
               printf("CREDIT POINT = %f\n", credit*D);}
        else if(OPERATING_SYSTEM+CA+ATTENDENCE>0 && OPERATING_SYSTEM+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
               credit_OPERATING_SYSTEM = credit*F;
               printf("CREDIT POINT = %f\n", credit*F);} 
        else if(OPERATING_SYSTEM+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
               credit_OPERATING_SYSTEM = credit*I;
               printf("CREDIT POINT = %f\n", credit*I);}
    else{
        printf("You Have Entered Wrong Information\n");
        if(OPERATING_SYSTEM+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}
    }
printf("______________________________________________________________________________________________ \n");   

    printf("Enter the Marks of OBJECT_ORIENTED_PROGRAMMING in 70:\n");
    scanf("%d",&OBJECT_ORIENTED_PROGRAMMING);
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE>=90 && OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O \n");
               credit_OBJECT_ORIENTED_PROGRAMMING = credit*O;
               printf("CREDIT POINT = %f\n", credit*O);}
        else if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE>=80 && OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
               credit_OBJECT_ORIENTED_PROGRAMMING = credit*E;
               printf("CREDIT POINT = %f\n", credit*E);}
        else if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE>=70 && OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
               credit_OBJECT_ORIENTED_PROGRAMMING = credit*A;
               printf("CREDIT POINT = %f\n", credit*A);}
        else if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE>=60 && OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
               credit_OBJECT_ORIENTED_PROGRAMMING = credit*B;
               printf("CREDIT POINT = %f\n", credit*B);}
        else if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE>=50 && OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
               credit_OBJECT_ORIENTED_PROGRAMMING = credit*C;
               printf("CREDIT POINT = %f\n", credit*C);}
        else if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE>=40 && OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
               credit_OBJECT_ORIENTED_PROGRAMMING = credit*D;
               printf("CREDIT POINT = %f\n", credit*D);}
        else if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE>0 && OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
               credit_OBJECT_ORIENTED_PROGRAMMING = credit*F;
               printf("CREDIT POINT = %f\n", credit*F);} 
        else if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
               credit_OBJECT_ORIENTED_PROGRAMMING = credit*I;
               printf("CREDIT POINT = %d\n", credit*I);}
    else{
        printf("You Have Entered Wrong Information\n");
        if(OBJECT_ORIENTED_PROGRAMMING+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}

    }
printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of INDUSTRIAL_MANAGEMENT in 70:\n");
    scanf("%d",&INDUSTRIAL_MANAGEMENT);
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE>=90 && INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O \n");
               credit_INDUSTRIAL_MANAGEMENT = credit*O;
               printf("CREDIT POINT = %f\n", credit*O);}
        else if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE>=80 && INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
               credit_INDUSTRIAL_MANAGEMENT = credit*E;
               printf("CREDIT POINT = %f\n", credit*E);}
        else if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE>=70 && INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
               credit_INDUSTRIAL_MANAGEMENT = credit*A;
               printf("CREDIT POINT = %f\n", credit*A);}
        else if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE>=60 && INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
               credit_INDUSTRIAL_MANAGEMENT = credit*B;
               printf("CREDIT POINT = %f\n", credit*B);}
        else if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE>=50 && INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
               credit_INDUSTRIAL_MANAGEMENT = credit*C;
               printf("CREDIT POINT = %f\n", credit*C);}
        else if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE>=40 && INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
               credit_INDUSTRIAL_MANAGEMENT = credit*D;
               printf("CREDIT POINT = %f\n", credit*D);}
        else if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE>0 && INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
               credit_INDUSTRIAL_MANAGEMENT = credit*F;
               printf("CREDIT POINT = %f\n", credit*F);} 
        else if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
               credit_INDUSTRIAL_MANAGEMENT = credit*I;
               printf("CREDIT POINT = %f\n", credit*I);}
    else{
        printf("You Have Entered Wrong Information\n");
        if(INDUSTRIAL_MANAGEMENT+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}

    }
printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of AI in 70 :\n");
    scanf("%d",&AI);
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(AI+CA+ATTENDENCE>=90 && AI+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O\n");
               credit_AI = credit*O;
               printf("CREDIT POINT = %f\n", credit*O);}
        else if(AI+CA+ATTENDENCE>=80 && AI+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
               credit_AI = credit*E;
               printf("CREDIT POINT = %f\n", credit*E);}
        else if(AI+CA+ATTENDENCE>=70 && AI+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
               credit_AI = credit*A;
               printf("CREDIT POINT = %f\n", credit*A);}
        else if(AI+CA+ATTENDENCE>=60 && AI+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
               credit_AI = credit*B;
               printf("CREDIT POINT = %f\n", credit*B);}
        else if(AI+CA+ATTENDENCE>=50 && AI+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
               credit_AI = credit*C;
               printf("CREDIT POINT = %f\n", credit*C);}
        else if(AI+CA+ATTENDENCE>=40 && AI+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
               credit_AI = credit*D;
               printf("CREDIT POINT = %f\n", credit*D);}
        else if(AI+CA+ATTENDENCE>0 && AI+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
               credit_AI = credit*F;
               printf("CREDIT POINT = %f\n", credit*F);} 
        else if(AI+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
               credit_AI = credit*I;
               printf("CREDIT POINT = %f\n", credit*I);}     
    else{
        printf("You Have Entered Wrong Information\n");
        if(AI+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}

    }  
printf("______________________________________________________________________________________________ \n");
printf("TOTAL CREDIT: %f\n", credit*6);
TOTAL_CREDIT_POINTS = credit_SOFTWARE_ENGINEERING + credit_OPERATING_SYSTEM + credit_OBJECT_ORIENTED_PROGRAMMING + credit_INDUSTRIAL_MANAGEMENT + credit_COMPILER_DESIGN + credit_AI;
printf("TOTAL_CREDIT_POINT : %d \n", TOTAL_CREDIT_POINTS);
SGPA = (TOTAL_CREDIT_POINTS/(credit*6));
if(credit_SOFTWARE_ENGINEERING==6 ||credit_COMPILER_DESIGN==6|| credit_OPERATING_SYSTEM==6 || credit_OBJECT_ORIENTED_PROGRAMMING==6|| credit_INDUSTRIAL_MANAGEMENT ==6||credit_AI==6){
    printf("\nPromoted with XP (with active backlog)\n");}
else{

        if((int)SGPA==SGPA){
        printf("SGPA : %d \n",(int)SGPA);}
        else {
        printf("SGPA : %f \n",SGPA);}}
       
PERCENTAGE_TOTAL_CREDIT_POINTS = (TOTAL_CREDIT_POINTS/(credit*6)-0.7)*10;
if(credit_SOFTWARE_ENGINEERING==6 ||credit_COMPILER_DESIGN==6|| credit_OPERATING_SYSTEM==6 || credit_OBJECT_ORIENTED_PROGRAMMING==6|| credit_INDUSTRIAL_MANAGEMENT ==6||credit_AI==6){
    printf("\nPERCENTAGE NOT AVAILABLE \n");}
    else{
         printf("PERCENTAGE OF NUMBER IN 100 : %d \n", PERCENTAGE_TOTAL_CREDIT_POINTS);}
printf("______________________________________________________________________________________________ \n");

printf("*For the students who are failed to appear in the examination Grade obtained : I*\n");
printf("*Grade obtained for incomplete result : I*");
printf("If you have more quaries goto : https://makautexam.net/");
return 0;
}
