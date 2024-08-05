#include<stdio.h>
int push(int top,int n,int stack[]);
int pop(int top,int stack[]);
void display(int top,int stack[]);
int main(){
    int n,choice,top=-1;
    printf("Enter The Size of The Stack: ");
    scanf("%d",&n);
    int stack[n];
    for(int i=0;i<n;i++){
        printf("Enter The Choice: ");
        scanf("%d",&choice);
        if(choice==1){
           top= push(top,n,stack);
        }
        if(choice==2){
            top=pop(top,stack);
        }
        if(choice==3){
            display(top,stack);
        }
        if(choice==4){
            return 0;
        }
    }
    return 0;
}
int push(int top,int n,int stack[]){
    int ch;
    if(top==n-1){//Here Top is the array index; if n=10 then array index should be n-1 = 9 because array starts from 0
        printf("Stack Overflow!");
    }
    else{
        printf("Enter The Element You want to insert in the Stack: ");
        scanf("%d",&ch);
        top++;
        stack[top]=ch;
    }
    return top;
}
int pop(int top,int stack[]){
    if(top==-1){
        printf("Stack Underflow!");
    }
    else{
        printf("The Deleted Element is: %d\n",stack[top]);
        top--;
    }
    return top;
}
void display(int top,int stack[]){
    if (top == -1) {
        printf("Stack is empty.\n");}
        else{
    for(int i=0;i<=top;i++){
        printf("Element of The Stack at position Stack[%d]: %d\n",i,stack[i]);
    }
}}

#include<stdio.h>
void push(int top,int n,int stack[]);
void pop(int top,int stack[]);
void display(int top,int stack[]);
int main(){
    int n,choice,top=-1;
    printf("Enter The Size of The Stack: ");
    scanf("%d",&n);
    int stack[n];
    for(int i=0;i<n;i++){
        printf("Enter The Choice: ");
        scanf("%d",&choice);
        if(choice==1){
            push(top,n,stack);
        }
        if(choice==2){
            pop(top,stack);
        }
        if(choice==3){
            display(top,stack);
        }
        if(choice==4){
            return 0;
        }
    }
    return 0;
}
void push(int top,int n,int stack[]){
    int ele;
    if(top==n-1){
        printf("Stack Overflow!\n");
    }
    else{
    printf("Enter the Element you want to enter: ");
    scanf("%d",&ele);
    stack[top]=ele;
    top++;
}}
void pop(int top,int stack[]){
    if(top==-1){
        printf("Stack Underflow!\n");
    }
    else{
        printf("The Deleted Element is: %d\n",stack[top]);
        top--;
    }
}
void display(int top,int stack[]){
    if(top==-1){
        printf("Stack is Empty!\n");
    }
    else{
        printf("Elements of The Stack is: \n");
        for(int i=0;i<top;i++){
            printf("%d.Stack[%d] is %d\n",i+1,i,stack[i]);
        }
    }
}