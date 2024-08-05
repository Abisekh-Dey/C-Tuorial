//Write a C program to implement Binary Search Technique using array
#include<stdio.h>
int main(){
    int n,ub,lb,mid;
    printf("Enter the Size of the array: ");
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        printf("%d. Enter the element of array[%d]: ",i+1,i);
        scanf("%d",&x[i]);
    }
    printf("The Elements are: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    int search_element;
    int count =0;
    printf("Enter the element You want to search: ");
    scanf("%d",&search_element);
    lb=0;
    ub=n-1;
    while(lb<=ub){
        mid=(lb+ub)/2;
        if(x[mid]==search_element){
            count=1;
            break;
        }
        if(search_element<x[mid]){
            ub=mid-1;
        }
        else{
            lb=mid+1;
        }
    }
    if(count==1){
        printf("Search element found in array[%d]=%d",mid,search_element);
    }
    else{
        printf("Element not found in the array!");
        return 0;
    }
    return 0;
}