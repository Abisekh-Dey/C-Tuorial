#include<stdio.h>
#include<math.h>
void calculator();
void recurssive_function(float result,float c);
void sum(float a, float b);
void subtract(float a, float b);
void multiplication(float a, float b);
void divition(float a, float b);
void allinone(float a,float b);
void square(float a);
void cube(float a);
void multiplicationwith10power(float a, float x);
void cuberoot(float a);
void squareroot(float a);
void percentage(float a);
void factorial(float a);
void circlearea(float a);
void circlevolume(float a);
void circlecircumference(float a);
void squarearea(float a);
void squareperimeter(float a);
void squarevolume(float a);
void rectanglearea(float a, float b);
void rectanglevolume(float a, float b, float h);
void rectangleperimeter(float a, float b);
int main(){
    int n;
    printf("Enter Password: ");
    scanf("%d",&n);
    if(n==2000)
    {
        calculator();
    }
    if(n!=2000){
        printf("You have entered Wrong Password\n");
        for(int i=1;i<=2;i++){
        printf("Re-enter Password: ");
        scanf("%d",&n);
        if(n!=2000){
        printf("You have entered Wrong Password\n");}
        if(n==2000){
        calculator();
        }}}
        else{
            return 0;
        }
    return 0;
}

void calculator(){
    printf("~~~~~~~~~~~~~~~~~~~~#*#:WELCOME TO CALCULATOR:#*#~~~~~~~~~~~~~~~~~~~~\n");
    printf("|-------------------------------------------------------------------|\n");
    float a,b,h,x,c,result;
    int operation,choice;
    printf("|___________________________________________________________________|\n");
    //getchar();//it is used to avoid newline buffer"\n" in scanf, without this the code will not excecute because "\"is also a character.
    //in c language enter key work as newline character "\n" so when we try to store characters instantafter float or integer datatype the program will not excecute because when we press enter this "\n"automatically generated;
    //so it confuses the scanf function because it tends to take the enter key(\n) as a character input so it generates unexpected result.
    //**caharacter after int or float datatype is not allowed without using getchar(); but character before float or int datatype is allowed.   
    printf("|~~~~~~~~~~~~~~~~~~~~~~#*#:OPERATION PANEL:#*#~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|___________________________________________________________________| \n");
    printf("|1. |Addition                             [ press 1] > |    (+)     |\n");
    printf("|2. |Subtraction                          [ press 2] > |    (-)     |\n");
    printf("|3. |Multiplication                       [ press 3] > |    (*)     |\n");
    printf("|4. |Divition                             [ press 4] > |    (/)     |\n");
    printf("|5. |Square                               [ press 5] > |   (x^2)    |\n");
    printf("|6. |Squareroot                           [ press 6] > |  (x^1/2)   |\n");
    printf("|7. |Percentage                           [ press 7] > |    (%%)     |\n");
    printf("|8. |Factorial                            [ press 8] > |    (!)     |\n");
    printf("|9. |Cube                                 [ press 9] > |   (x^3)    |\n");
    printf("|10.|Number multliplied with 10^x         [press 10] > |  (a*10^x)  |\n");
    printf("|11.|Cube root                            [press 11] > |  (x^1/3)   |\n");
    printf("|___|__________________________________________________|____________|\n");
    printf("|20.|Circle area                          [press 20] > |  (pi*r^2)  |\n");
    printf("|21.|Circle volume                        [press 21] > |(4/3*pi*r^3)|\n");
    printf("|22.|Circle circumference                 [press 22] > |  (2*pi*r)  |\n");
    printf("|23.|Square area                          [press 23] > |    (x^2)   |\n");
    printf("|24.|Squarevolume                         [press 24] > |    (a^3)   |\n");
    printf("|25.|Square perimeter                     [press 25] > |    (4*x)   |\n");
    printf("|26.|Rectangle area                       [press 26] > |    (x*y)   |\n");
    printf("|27.|Rectanglevolume                      [press 27] > |   (a*b*h)  |\n");
    printf("|28.|Rectangle Perimeter                  [press 28] > |  (2*(x+y)) |\n");
    printf("|___|__________________________________________________|____________|\n");
    printf("|50.|Exit                                 [press 50]   |            |\n");
    printf("|___|__________________________________________________|____________|\n");
    printf("|Enter The First Value: ");
    scanf("%f",&a);
    printf("|Enter Your Operation: ");
    scanf("%d",&operation);
    if(operation >50){
        printf("|You Have Enetred Wrong Number\n");
        return;}
    printf("|___________________________________________________________________|\n");
    if(operation == 1){
        printf("|Enter The Second Value:  ");
    scanf("%f",&b);
    sum(a,b);}
    if(operation == 2){
        printf("|Enter The Second Value: ");
    scanf("%f",&b);
    subtract(a,b);}
    if(operation == 3){
        printf("|Enter The Second Value: ");
    scanf("%f",&b);
    multiplication(a,b);}
    if(operation == 4){
        printf("|Enter The Second Value: ");
    scanf("%f",&b);
    if(b==0){
        printf("|Can not Divided by 0\n");
        return;
    }
    divition(a,b);}
    if(operation == 5){
    square(a);}
    if(operation == 6){
    squareroot(a);}
    if(operation == 7){
    percentage(a);}
    if(operation == 8){
    factorial(a);}
    if(operation == 9){
    cube(a);}
    if(operation == 10){
        printf("Enter the Value of x: ");
        scanf("%f",&x);
        multiplicationwith10power(a,x);}
        if(operation == 11){
        cuberoot(a);}
    if(operation == 12){
        printf("|Enter The Second Value: ");
        scanf("%f",&b);
        allinone(a,b);}
    if(operation == 20){
        circlearea(a);}
        if(operation == 21){
        circlevolume(a);}
    if(operation == 22){
        circlecircumference(a);}
    if(operation == 23){
        squarearea(a);}
    if(operation == 24){
        squarevolume(a);}
    if(operation == 25){
        squareperimeter(a);}
    if(operation == 26){
        printf("Enter the Second Value: ");
        scanf("%f",&b);
        rectanglearea(a,b);}
    if(operation == 27){
        printf("Enter The Value of b: ");
        scanf("%f",&b);
        printf("Enter The Value of h: ");
        scanf("%f",&h);
        rectanglevolume(a,b,h);
    }
    if(operation == 28){
        printf("Enter The Second Value: ");
        scanf("%f",&b);
        rectangleperimeter(a,b);}
    if(operation == 50){
        return;
    }
}
void recurssive_function(float result,float c){
    int operation;
    for(int i=1;i<=100;i++){ 
        printf("|Enter The Value: ");
        scanf("%f",&c);
        printf("|Enter Your Operation [PRESS THE KEYS AS MENTIONED IN THE OPERATION PANEL]: ");
        scanf("%d",&operation); 
        if(c==0 && operation==0){
            return;
        }
        else{
            if(operation==1){
            result=result+c;
            printf("|Result: %f\n",result);}
                if(operation==2){
                result=result-c;
                printf("|Result: %f\n",result);}
                    if(operation==3){
                    result=result*c;
                        printf("|Result: %f\n",result);}
                        if(operation==4){
                        if(c==0){
                        return;}
                        else{
                        result=result/c;
                        printf("|Result: %f\n",result);}}
                        if(operation==5){
                            result=pow(c,2);
                            printf("|Result: %f\n",result);}
                        if(operation==6){
                            result=sqrt(c);
                            printf("|Result: %f\n",result);
                        }
                        if(operation==7){
                            result=(result*c/100);
                            printf("|Result: %f\n",result); 
                        }
                        if(operation==8){
                        float factorial = 1;
                            for(float i=1;i<=result;i++){
                            factorial = factorial*i;}
                            result=factorial;
                            printf("|Result: %f\n",result);}
                        if(operation==9){
                            result=pow(c,3);
                            printf("|Result: %f\n",result);}
                        if(operation==10){
                            result=result*pow(10,c);
                            printf("|Result: %f\n",result);}
                        if(operation==11){
                            result=cbrt(c);
                            printf("|Result: %f\n",result);
                        }
                        }}}
void sum(float a, float b){
    printf("|Result: %f\n",a+b);
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=a+b;
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }
}
    
void subtract(float a, float b){
    printf("|Result: %f\n",a-b);
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=a-b;
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }
}

void multiplication(float a, float b){
    printf("|Result: %f\n",a*b);
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=a*b;
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }
}

void divition(float a, float b){
    printf("|Result: %f\n",a/b);
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=a/b;
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }
}

void square(float a){
    printf("|Result: %f\n",pow(a,2));
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=pow(a,2);
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }}
void squareroot(float a){
    printf("|Result: %f\n",sqrt(a));
int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=sqrt(a);
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }}
void percentage(float a){
    float n;
    printf("|Enter The Percentage: ");
    scanf("%f",&n);
    printf("|Result: %f\n",(a*n/100));
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=(a*n/100);
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }}
void factorial(float a){
    float factorial = 1;
    for(float i=1;i<=a;i++){
        factorial = factorial*i;}
        printf("|Result: %f\n",factorial);
        int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=factorial;
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }}
void cube(float a){
    printf("|Result: %f\n",pow(a,3));
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=pow(a,3);
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }}
void multiplicationwith10power(float a, float x){
    printf("|Result: %f\n",a*pow(10,x));
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=a*pow(10,x);
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }}
void cuberoot(float a){
    printf("|Result: %f\n",cbrt(a));
    int choice;
    float c;
    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        scanf("%d",&choice);
        if(choice==1){
            float result=cbrt(a);
        recurssive_function(result,c);}
        else{
            return;
        printf("|__________________________________________________________________________________|\n");    
        }}
void allinone(float a,float b){
    float c;
    int operation,choice;
        printf("|Enter The Operation: [PRESS THE KEYS AS MENTIONED IN THE OPERATION PANEL]");
        scanf("%d",&operation);
        switch (operation)//switch case operation
        {
        case 1:     printf("|Result: %f\n",a+b);
                    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
                    scanf("%d",&choice);
                    float sum = a+b;
                    for(int i=1;i<=100;i++){
                    printf("|Enter The Value: ");
                    scanf("%f",&c);
                    printf("|Enter The Operation [press 1 for (+)],[press 2 for (-)],[press 3 for (*)],[press 4 for (/)]: ");
                    scanf("%d",&operation);
                    if(c == 0 && operation == 0){
                    return;}
                    else{
                    if(operation==1){
                    sum=sum+c;
                    printf("|Result: %f\n",sum);}
                    if(operation == 2){
                        sum=sum-c;
                        printf("|Result: %f\n",sum);}
                        if(operation == 3){
                            sum = sum*c;
                            printf("|Result: %f\n",sum);}
                            if(operation == 4){
                                if(c==0){
                                    return;
                                }
                                else{
                                sum = sum/c;
                                printf("|Result: %f\n",sum);}}
                    }}break;
        case 2:     printf("|Result: %f\n",a-b);
                    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
                    scanf("%d",&choice);
                    float subtract = a-b;
                    for(int i=1;i<=100;i++){
                    printf("|Enter The Value: ");
                    scanf("%f",&c);
                    printf("|Enter The Operation [press 1 for (+)],[press 2 for (-)],[press 3 for (*)],[press 4 for (/)]: ");
                    scanf("%d",&operation);
                    if(c == 0 && operation == 0){
                    return;}
                    else{
                    if(operation==1){
                    subtract=subtract+c;
                    printf("|Result: %f\n",subtract);}
                    if(operation == 2){
                        subtract=subtract-c;
                        printf("|Result: %f\n",subtract);}
                        if(operation == 3){
                            subtract = subtract*c;
                            printf("|Result: %f\n",subtract);}
                            if(operation == 4){
                                if(c==0){
                                    return;
                                }
                                else{
                                subtract = subtract/c;
                                printf("|Result: %f\n",subtract);}}
                                }}
                                break;
        case 3:     printf("|Result: %f\n",a*b);
                    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
                    scanf("%d",&choice);
                    float multiplication = a*b;
                    for(int i=1;i<=100;i++){
                    printf("|Enter The Value: ");
                    scanf("%f",&c);
                    printf("|Enter The Operation [press 1 for (+)],[press 2 for (-)],[press 3 for (*)],[press 4 for (/)]: ");
                    scanf("%d",&operation);
                    if(c == 0 && operation == 0){
                    return;}
                    else{
                    if(operation==1){
                    multiplication=multiplication+c;
                    printf("|Result: %f\n",multiplication);}
                    if(operation == 2){
                        multiplication=multiplication-c;
                        printf("|Result: %f\n",multiplication);}
                        if(operation == 3){
                            multiplication = multiplication*c;
                            printf("|Result: %f\n",multiplication);}
                            if(operation == 4){
                                if(c==0){
                                    return;
                                }
                                else{
                                multiplication = multiplication/c;
                                printf("|Result: %f\n",multiplication);}}
                                }}break;
        case 4:     if(b==0){
                    printf("|Can Not Divided By 0");
                    return;}
                    else{
                    printf("|Result: %f\n",a/b);
                    printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
                    scanf("%d",&choice);
                    float divition = a/b;
                    for(int i=1;i<=100;i++){
                    printf("|Enter The Value: ");
                    scanf("%f",&c);
                    printf("|Enter The Operation [press 1 for (+)],[press 2 for (-)],[press 3 for (*)],[press 4 for (/)]: ");
                    scanf("%d",&operation);
                    if(c == 0 && operation == 0){
                    return;}
                    else{
                    if(operation==1){
                    divition=divition+c;
                    printf("|Result: %f\n",divition);}
                    if(operation == 2){
                        divition=divition-c;
                        printf("|Result: %f\n",divition);}
                        if(operation == 3){
                            divition = divition*c;
                            printf("|Result: %f\n",divition);}
                            if(operation == 4){
                                if(c==0){
                                    return;
                                }
                                else{
                                divition = divition/c;
                                printf("|Result: %f\n",divition);}}
                                }}}break;
            default: printf("|Invalid Operation");
            }}
        //  if(operation == 1){
        //      printf("|Result: %f\n",a+b);
        //      printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
        //      scanf("%d",&choice);
        //      float sum = a+b;
        //      for(int i=1;i<=100;i++){
        //         printf("|Enter The Value: ");
        //         scanf("%f",&c);
        //         printf("|Enter The Operation [press 1 for (+)],[press 2 for (-)],[press 3 for (*)],[press 4 for (/)]: ");
        //         scanf("%d",&operation);
        //         if(c == 0 && operation == 0){
        //             return;
        //         }
        //         else{
        //         if(operation==1){
        //             sum=sum+c;
        //             printf("|Result: %f\n",sum);}
        //             if(operation == 2){
        //                 sum=sum-c;
        //                 printf("|Result: %f\n",sum);}
        //                 if(operation == 3){
        //                     sum = sum*c;
        //                     printf("|Result: %f\n",sum);}
        //                     if(operation == 4){
        //                         if(c==0){
        //                             return;
        //                         }
        //                         else{
        //                         sum = sum/c;
        //                         printf("|Result: %f\n",sum);}}
        //     }}}
    //          if(operation == 2){
    //          printf("|Result: %f\n",a-b);
    //          printf("|Do You Want Add more Numbers? [if YES [press 1] else press any key to Exit]: ");
    //          scanf("%d",&choice);
    //          float subtract = a-b;
    //          for(int i=1;i<=100;i++){
    //             printf("|Enter The Value: ");
    //             scanf("%f",&c);
    //             printf("|Enter The Operation [press 1 for (+)],[press 2 for (-)],[press 3 for (*)],[press 4 for (/)]: ");
    //             scanf("%d",&operation);
    //             if(c == 0 && operation == 0){
    //                 return;}
    //             else{
    //             if(operation==1){
    //                 subtract=subtract+c;
    //                 printf("|Result: %f\n",subtract);}
    //                 if(operation == 2){
    //                     subtract=subtract-c;
    //                     printf("|Result: %f\n",subtract);}
    //                     if(operation == 3){
    //                         subtract = subtract*c;
    //                         printf("|Result: %f\n",subtract);}
    //                         if(operation == 4){
    //                             if(c==0){
    //                                 return;
    //                             }
    //                             else{
    //                             subtract = subtract/c;
    //                             printf("|Result: %f\n",subtract);}}
    //                             }}}
    // }
void circlearea(float a){
    float pi = 3.14;
    printf("Result: %f\n",pi*pow(a,2));}
void circlevolume(float a){
    float pi = 3.14;
    printf("Result: %f\n",(4*pi*pow(a,3))/3);}              
void circlecircumference(float a){
    float pi = 3.14;
    printf("Result: %f",2*pi*a);}
void squarearea(float a){
    printf("Result: %f\n",pow(a,2));}
void squarevolume(float a){
    printf("Result: %f",pow(a,3));}
void squareperimeter(float a){
    printf("Result: %f\n",4*a);}
void rectanglearea(float a, float b){
    printf("Result: %f\n",a*b);}
void rectanglevolume(float a,float b,float h){
    printf("Result: %f\n",a*b*h);}
void rectangleperimeter(float a, float b){
    printf("Return %f\n",2*(a+b));}
