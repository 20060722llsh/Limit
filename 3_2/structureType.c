#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//�������е�0�Ƶ������
void moveZeroes(int* nums[], int numsSize) {
    int i,j=0,temp = 0;
    while(j++<numsSize)
    {
        for(i = 0;i<numsSize-1;i++)
        {
            if(nums[i] == 0)
            {
                temp = nums[i+1];
                nums[i+1] = nums[i];
                nums[i] = temp;
                temp = 0;
            }
        }
    }
    return *nums;
        
    
}
int main()
{
    int *num[] = {0,1,0,3,12};
    int size = sizeof(num)/sizeof(num[0]);
    int i,j;

    printf("�ƶ�ǰ��");
    for(i = 0;i<size;i++)
    {printf("%d ",num[i]);}
    printf("\n");

    moveZeroes(&num,size);

    printf("�ƶ���");
    for(i = 0;i<size;i++)
    {printf("%d ",num[i]);}
    printf("\n");

    system("pause");
}