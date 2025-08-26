#include <stdio.h>
int main(){
    int n; //ask array size
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n]; //declare array size n

    //taking input from user
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //find max value
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum value in the array is:%d\n",max);
    return 0;
}
