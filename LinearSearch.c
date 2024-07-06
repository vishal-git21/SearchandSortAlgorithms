#include <stdio.h>


int linearSearch(int *arr,int len,int val){
    int i = 0;
    while(i<len){
        if(arr[i] == val)return i;
        i++;
    }
    return -1;
}

int main() {
    int arr[100];
    int len;
    int val;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&len);
    printf("Enter the elements\n");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element you want to search for\n");
    scanf("%d",&val);
    printf("%d\n",linearSearch(arr,len,val));
    return 0;
}