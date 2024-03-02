#include<stdio.h>

int fun(int *arr[],int *brr[],int lena,int lenb)
{
    char *a = "奇";
    char *b = "偶";
    int temp[100] = {0};
    int i=0,j=0,k=0;

    for(i = 0,j = 0;i<lena||j<lenb;){
        if(i<5){
            temp[k++] = arr[i++];
        }
        if(j<5){
            temp[k++] = brr[j++];
        }
    }

    for(i = 0;i<lena+lenb;i++){
        if(i%2==0){
            printf("%s",a);
        }
        else
            printf("%s",b);
        printf("%d ",temp[i]);
        if(i == lena+lenb-1){
            printf("\n");
        }
    }
}

int main()
{
    int arr[5] = {1,3,5,7,9};
    int brr[5] = {2,4,6,8,10};
    char *a = "奇";
    char *b = "偶";
    int temp[100] = {0};
    int i,j,lena = sizeof(arr)/sizeof(arr[0]),lenb = sizeof(brr)/sizeof(brr[0]);
    int k = 0;
    printf("数组A：");
    for(i = 0;i<lena;i++){
        printf("%d ",arr[i]);
        if(i == lena-1){
            printf("\n");
        }
    }
    printf("数组B：");
    for(i = 0;i<lenb;i++){
        printf("%d ",brr[i]);
        if(i == lenb-1){
            printf("\n");
        }
    }
    fun(&arr,&brr,lena,lenb);
    
    while(1){}
    return 0;
}