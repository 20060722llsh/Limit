#include<stdio.h>
#include<Windows.h>
#include<stdbool.h>

void Now_Power(int Electricity)
{
    printf("Now Power£º%d%%",Electricity);
    Sleep(3);

}
int main()
{


    int Electricity = 0£»
    bool flag = false;
    printf("Welcome to My BMS system!\n");
    while(1)
    {
        Now_Power(Electricity);
        Electricity++;
    }




    return 0;
}
