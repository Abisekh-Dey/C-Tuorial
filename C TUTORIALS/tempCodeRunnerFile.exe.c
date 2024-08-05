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
