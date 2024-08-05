//PROGRAM//
#include<stdio.h>
void sort(int array[],int size);
int main(){
    int size;
    printf("Enter The Size of The Array: ");
    scanf("%d",&size);
    int array[size];
    sort(array,size);
    return 0;
}
void sort(int array[],int size){
    for(int i=0;i<size;i++){
        printf("Enter The elements of The Array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("The Elements are: \n");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                int temp;
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
                count++;
            }
        }
    }
    printf("Elements After Sorting in Ascending order: \n");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("The Number of Swapping Require: %d times\n",count);
    int count1=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]<array[j]){
                int temp;
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
                count1++;
            }
        }
    }
    printf("Elements After Sorting in Descending order: \n");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("The Number of Swapping Require: %d times\n",count1);
}

//OUTPUT//

// Enter The Size of The Array: 10
// Enter The elements of The Array[0]: 2
// Enter The elements of The Array[1]: 4
// Enter The elements of The Array[2]: 6
// Enter The elements of The Array[3]: 8
// Enter The elements of The Array[4]: 0
// Enter The elements of The Array[5]: 1
// Enter The elements of The Array[6]: 3
// Enter The elements of The Array[7]: 7
// Enter The elements of The Array[8]: 9
// Enter The elements of The Array[9]: 5
// The Elements are: 
// 2       4       6       8       0       1       3       7       9       5
// Elements After Sorting in Ascending order: 
// 0       1       2       3       4       5       6       7       8       9
// The Number of Swapping Require: 16 times
// Elements After Sorting in Descending order: 
// 9       8       7       6       5       4       3       2       1       0
// The Number of Swapping Require: 45 times