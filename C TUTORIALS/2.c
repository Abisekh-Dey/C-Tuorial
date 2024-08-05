//GRADE GENERATION SYSTEM//

#include<stdio.h>
#include<math.h>
int main ()
{
    int CA,PERCENTAGE_TOTAL_CREDIT_POINTS,ATTENDENCE,TOTAL_CREDIT_POINTS,O=10,E=9,A=8,B=7,C=6,D=5,F=2,I=2, COMPUTER_ARCHITECTURE, DIGITAL_COMMUNICATION, DIGITAL_SIGNAL_PROCESSING, POWER_ELECTRONICS, ELECTROMAGNATIC_WAVES, SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION;
    float credit = 3;
    float SGPA;
    int credit_COMPUTER_ARCHITECTURE ;
    int credit_DIGITAL_COMMUNICATION ;
    int credit_DIGITAL_SIGNAL_PROCESSING ;
    int credit_POWER_ELECTRONICS ;
    int credit_ELECTROMAGNATIC_WAVES ;
    int credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION ;
printf("HOOGHLY ENGINEERING & TECHNOLOGY COLLEGE \n");
printf("ABISEKH DEY \n");
printf("ROLL NO : 17632322013 \n");
printf("ELECTRONICS AND COMMUNICATION ENGINEERING \n");
printf("______________________________________________________________________________________________ \n");

    printf("Enter the Marks of COMPUTER ARCHITECTURE in 70:\n");
    scanf("%d",& COMPUTER_ARCHITECTURE);
    if(COMPUTER_ARCHITECTURE>70){
        printf(" THIS CAN NOT BE ABOVE 70 \n");}
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    if(CA>25){
        printf(" THIS CAN NOT BE ABOVE 25 \n");}
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(ATTENDENCE>5){
        printf(" THIS CAN NOT BE ABOVE 5 \n");}
    if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE>=90 && COMPUTER_ARCHITECTURE+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O\n "); 
                credit_COMPUTER_ARCHITECTURE = credit * O;
                printf("CREDIT POINT = %f\n", credit*O);}
        else if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE>=80 && COMPUTER_ARCHITECTURE+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
                credit_COMPUTER_ARCHITECTURE = credit * E;
                printf("CREDIT POINT = %f\n", credit*E);}
        else if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE>=70 && COMPUTER_ARCHITECTURE+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
                credit_COMPUTER_ARCHITECTURE = credit *A;
                printf("CREDIT POINT = %f\n", credit*A);}
        else if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE>=60 && COMPUTER_ARCHITECTURE+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
                credit_COMPUTER_ARCHITECTURE = credit * B;
                printf("CREDIT POINT = %f\n", credit*B);}
        else if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE>=50 && COMPUTER_ARCHITECTURE+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
                credit_COMPUTER_ARCHITECTURE = credit * C;
                printf("CREDIT POINT = %f\n", credit*C);}
        else if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE>=40 && COMPUTER_ARCHITECTURE+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
                credit_COMPUTER_ARCHITECTURE = credit * D;
                printf("CREDIT POINT = %f\n", credit*D);}
        else if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE>0 && COMPUTER_ARCHITECTURE+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
                credit_COMPUTER_ARCHITECTURE = credit * F;
                printf("CREDIT POINT = %f\n", credit*F);} 
        else if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
                credit_COMPUTER_ARCHITECTURE = credit * I;
                printf("CREDIT POINT = %f\n", credit*I);}
    else{
        printf("YOU HAVE ENTERED WRONG INFORMATION \n");
        if(COMPUTER_ARCHITECTURE+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}
        
    }
printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of DIGITAL_SIGNAL_PROCESSING in 70:\n");
    scanf("%d",&DIGITAL_SIGNAL_PROCESSING);
    if(DIGITAL_SIGNAL_PROCESSING>70){
        printf(" THIS CAN NOT BE ABOVE 70 \n");}
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    if(CA>25){
        printf(" THIS CAN NOT BE ABOVE 25 \n");}
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(ATTENDENCE>5){
        printf(" THIS CAN NOT BE ABOVE 5 \n");}
    if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE>=90 && DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O\n ");
                credit_DIGITAL_SIGNAL_PROCESSING  = credit * O;
                printf("CREDIT POINT = %f\n", credit*O);}
        else if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE>=80 && DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
                credit_DIGITAL_SIGNAL_PROCESSING  = credit * E;
                printf("CREDIT POINT = %f\n", credit*E);}
        else if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE>=70 && DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
                credit_DIGITAL_SIGNAL_PROCESSING  = credit * A;
                printf("CREDIT POINT = %f\n", credit*A);}
        else if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE>=60 && DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
                credit_DIGITAL_SIGNAL_PROCESSING  = credit * B;
                printf("CREDIT POINT = %f\n", credit*B);}
        else if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE>=50 && DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
                credit_DIGITAL_SIGNAL_PROCESSING  = credit * C;
                printf("CREDIT POINT = %f\n", credit*C);}
        else if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE>=40 && DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
                credit_DIGITAL_SIGNAL_PROCESSING  = credit * D;
                printf("CREDIT POINT = %f\n", credit*D);}
        else if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE>0 && DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
                credit_DIGITAL_SIGNAL_PROCESSING  = credit * F;
                printf("CREDIT POINT = %f\n", credit*F);} 
        else if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
                credit_DIGITAL_SIGNAL_PROCESSING  = credit * I;
                printf("CREDIT POINT = %f\n", credit*I);}
    else{
        printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
        if(DIGITAL_SIGNAL_PROCESSING+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}
    }
printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of DIGITAL_COMMUNICATION in 70:\n");
    scanf("%d",&DIGITAL_COMMUNICATION);
    if(DIGITAL_COMMUNICATION>70){
        printf(" THIS CAN NOT BE ABOVE 70 \n");}
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    if(CA>25){
        printf(" THIS CAN NOT BE ABOVE 25 \n");}
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(ATTENDENCE>5){
        printf(" THIS CAN NOT BE ABOVE 5 \n");}
    if(DIGITAL_COMMUNICATION+CA+ATTENDENCE>=90 && DIGITAL_COMMUNICATION+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O \n");
               credit_DIGITAL_COMMUNICATION = credit*O;
               printf("CREDIT POINT = %f\n", credit*O);}
        else if(DIGITAL_COMMUNICATION+CA+ATTENDENCE>=80 && DIGITAL_COMMUNICATION+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
               credit_DIGITAL_COMMUNICATION = credit*E;
               printf("CREDIT POINT = %f\n", credit*E);}
        else if(DIGITAL_COMMUNICATION+CA+ATTENDENCE>=70 && DIGITAL_COMMUNICATION+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
               credit_DIGITAL_COMMUNICATION = credit*A;
               printf("CREDIT POINT = %f\n", credit*A);}
        else if(DIGITAL_COMMUNICATION+CA+ATTENDENCE>=60 && DIGITAL_COMMUNICATION+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
               credit_DIGITAL_COMMUNICATION = credit*B;
               printf("CREDIT POINT = %f\n", credit*B);}
        else if(DIGITAL_COMMUNICATION+CA+ATTENDENCE>=50 && DIGITAL_COMMUNICATION+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
               credit_DIGITAL_COMMUNICATION = credit*C;
               printf("CREDIT POINT = %f\n", credit*C);}
        else if(DIGITAL_COMMUNICATION+CA+ATTENDENCE>=40 && DIGITAL_COMMUNICATION+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
               credit_DIGITAL_COMMUNICATION = credit*D;
               printf("CREDIT POINT = %f\n", credit*D);}
        else if(DIGITAL_COMMUNICATION+CA+ATTENDENCE>0 && DIGITAL_COMMUNICATION+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
               credit_DIGITAL_COMMUNICATION = credit*F;
               printf("CREDIT POINT = %f\n", credit*F);} 
        else if(DIGITAL_COMMUNICATION+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
               credit_DIGITAL_COMMUNICATION = credit*I;
               printf("CREDIT POINT = %f\n", credit*I);}
    else{
        printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
        if(DIGITAL_COMMUNICATION+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}
    }
printf("______________________________________________________________________________________________ \n");   

    printf("Enter the Marks of POWER_ELECTRONICS in 70:\n");
    scanf("%d",&POWER_ELECTRONICS);
    if(POWER_ELECTRONICS>70){
        printf(" THIS CAN NOT BE ABOVE 70 \n");}
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    if(CA>25){
        printf(" THIS CAN NOT BE ABOVE 25 \n");}
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(ATTENDENCE>5){
        printf(" THIS CAN NOT BE ABOVE 5 \n");}
    if(POWER_ELECTRONICS+CA+ATTENDENCE>=90 && POWER_ELECTRONICS+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O \n");
               credit_POWER_ELECTRONICS = credit*O;
               printf("CREDIT POINT = %f\n", credit*O);}
        else if(POWER_ELECTRONICS+CA+ATTENDENCE>=80 && POWER_ELECTRONICS+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
               credit_POWER_ELECTRONICS = credit*E;
               printf("CREDIT POINT = %f\n", credit*E);}
        else if(POWER_ELECTRONICS+CA+ATTENDENCE>=70 && POWER_ELECTRONICS+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
               credit_POWER_ELECTRONICS = credit*A;
               printf("CREDIT POINT = %f\n", credit*A);}
        else if(POWER_ELECTRONICS+CA+ATTENDENCE>=60 && POWER_ELECTRONICS+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
               credit_POWER_ELECTRONICS = credit*B;
               printf("CREDIT POINT = %f\n", credit*B);}
        else if(POWER_ELECTRONICS+CA+ATTENDENCE>=50 && POWER_ELECTRONICS+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
               credit_POWER_ELECTRONICS = credit*C;
               printf("CREDIT POINT = %f\n", credit*C);}
        else if(POWER_ELECTRONICS+CA+ATTENDENCE>=40 && POWER_ELECTRONICS+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
               credit_POWER_ELECTRONICS = credit*D;
               printf("CREDIT POINT = %f\n", credit*D);}
        else if(POWER_ELECTRONICS+CA+ATTENDENCE>0 && POWER_ELECTRONICS+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
               credit_POWER_ELECTRONICS = credit*F;
               printf("CREDIT POINT = %f\n", credit*F);} 
        else if(POWER_ELECTRONICS+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
               credit_POWER_ELECTRONICS = credit*I;
               printf("CREDIT POINT = %d\n", credit*I);}
    else{
        printf("YOU HAVE ENTERED WRONG INFORMATION \n");
        if(POWER_ELECTRONICS+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}

    }
printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of ELECTROMAGNATIC_WAVES in 70:\n");
    scanf("%d",&ELECTROMAGNATIC_WAVES);
    if(ELECTROMAGNATIC_WAVES>70){
        printf(" THIS CAN NOT BE ABOVE 70 \n");}
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    if(CA>25){
        printf(" THIS CAN NOT BE ABOVE 25 \n");}
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(ATTENDENCE>5){
        printf(" THIS CAN NOT BE ABOVE 5 \n");}
    if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE>=90 && ELECTROMAGNATIC_WAVES+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O \n");
               credit_ELECTROMAGNATIC_WAVES = credit*O;
               printf("CREDIT POINT = %f\n", credit*O);}
        else if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE>=80 && ELECTROMAGNATIC_WAVES+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
               credit_ELECTROMAGNATIC_WAVES = credit*E;
               printf("CREDIT POINT = %f\n", credit*E);}
        else if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE>=70 && ELECTROMAGNATIC_WAVES+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
               credit_ELECTROMAGNATIC_WAVES = credit*A;
               printf("CREDIT POINT = %f\n", credit*A);}
        else if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE>=60 && ELECTROMAGNATIC_WAVES+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
               credit_ELECTROMAGNATIC_WAVES = credit*B;
               printf("CREDIT POINT = %f\n", credit*B);}
        else if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE>=50 && ELECTROMAGNATIC_WAVES+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
               credit_ELECTROMAGNATIC_WAVES = credit*C;
               printf("CREDIT POINT = %f\n", credit*C);}
        else if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE>=40 && ELECTROMAGNATIC_WAVES+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
               credit_ELECTROMAGNATIC_WAVES = credit*D;
               printf("CREDIT POINT = %f\n", credit*D);}
        else if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE>0 && ELECTROMAGNATIC_WAVES+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
               credit_ELECTROMAGNATIC_WAVES = credit*F;
               printf("CREDIT POINT = %f\n", credit*F);} 
        else if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
               credit_ELECTROMAGNATIC_WAVES = credit*I;
               printf("CREDIT POINT = %f\n", credit*I);}
    else{
        printf("YOU HAVE ENTERED WRONG INFORMATION \n");
        if(ELECTROMAGNATIC_WAVES+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}

    }
printf("______________________________________________________________________________________________ \n");
    
    printf("Enter the Marks of SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION in 70 :\n");
    scanf("%d",&SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION);
    if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION>70){
        printf(" THIS CAN NOT BE ABOVE 70 \n");}
    printf("Enter the Marks of CA IN 25:\n");
    scanf("%d",& CA);
    if(CA>25){
        printf(" THIS CAN NOT BE ABOVE 25 \n");}
    printf("Enter the Marks OF ATTENDENCE IN 5:\n");
    scanf("%d",& ATTENDENCE);
    if(ATTENDENCE>5){
        printf(" THIS CAN NOT BE ABOVE 5 \n");}
    if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE>=90 && SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE<=100) {
        printf("Grade obtained : O\n");
               credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION = credit*O;
               printf("CREDIT POINT = %f\n", credit*O);}
        else if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE>=80 && SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE<=89) {
        printf("Grade obtained : E\n");
               credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION = credit*E;
               printf("CREDIT POINT = %f\n", credit*E);}
        else if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE>=70 && SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE<=79) {
        printf("Grade obtained : A\n");
               credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION = credit*A;
               printf("CREDIT POINT = %f\n", credit*A);}
        else if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE>=60 && SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE<=69) {
        printf("Grade obtained : B\n");
               credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION = credit*B;
               printf("CREDIT POINT = %f\n", credit*B);}
        else if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE>=50 && SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE<=59) {
        printf("Grade obtained : C\n");
               credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION = credit*C;
               printf("CREDIT POINT = %f\n", credit*C);}
        else if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE>=40 && SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE<=49) {
        printf("Grade obtained : D\n");
               credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION = credit*D;
               printf("CREDIT POINT = %f\n", credit*D);}
        else if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE>0 && SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE<=39){
        printf("The Grade obtained: F\n");
               credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION = credit*F;
               printf("CREDIT POINT = %f\n", credit*F);} 
        else if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE ==0){
        printf("The Grade obtained: I\n");
               credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION = credit*I;
               printf("CREDIT POINT = %f\n", credit*I);}     
    else{
        printf("YOU HAVE ENTERED WRONG INFORMATION \n");
        if(SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION+CA+ATTENDENCE>100){
              printf("PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED \n");
              return 0;}

    }  
printf("______________________________________________________________________________________________ \n");

printf("THE FINAL SCORE \n");
printf("TOTAL CREDIT: %f\n", credit*6);
TOTAL_CREDIT_POINTS = credit_COMPUTER_ARCHITECTURE + credit_DIGITAL_COMMUNICATION + credit_DIGITAL_SIGNAL_PROCESSING + credit_POWER_ELECTRONICS + credit_ELECTROMAGNATIC_WAVES + credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION;
printf("TOTAL_CREDIT_POINT : %d \n", TOTAL_CREDIT_POINTS);
SGPA = (TOTAL_CREDIT_POINTS/(credit*6));
if(credit_COMPUTER_ARCHITECTURE==6 ||credit_DIGITAL_COMMUNICATION==6|| credit_DIGITAL_SIGNAL_PROCESSING==6 || credit_POWER_ELECTRONICS ==6|| credit_ELECTROMAGNATIC_WAVES ==6||credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION==6){
    printf("\nPromoted with XP (with active backlog)\n");}
else{

        if((int)SGPA==SGPA){
        printf("SGPA : %d \n",(int)SGPA);}
        else {
        printf("SGPA : %f \n",SGPA);}}
       
PERCENTAGE_TOTAL_CREDIT_POINTS = (TOTAL_CREDIT_POINTS/(credit*6)-0.7)*10;
if(credit_COMPUTER_ARCHITECTURE==6 ||credit_DIGITAL_COMMUNICATION==6|| credit_DIGITAL_SIGNAL_PROCESSING==6 || credit_POWER_ELECTRONICS ==6|| credit_ELECTROMAGNATIC_WAVES ==6||credit_SOFTSKILLS_AND_INTER_PERSONAL_COMMUNICATION==6){
    printf("\nPERCENTAGE NOT AVAILABLE \n");}
    else{
         printf("PERCENTAGE OF NUMBER IN 100 : %d \n", PERCENTAGE_TOTAL_CREDIT_POINTS);}
printf("______________________________________________________________________________________________ \n");

printf("***For the students who are failed to appear in the examination Grade obtained : I***\n");
printf("***Grade obtained for incomplete result : I\n***");
printf("If you have more quaries goto : https://makautexam.net/");
return 0;
}