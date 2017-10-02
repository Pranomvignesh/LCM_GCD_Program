#include<stdio.h>
int GCD(int num1,int num2)
{
    if(num2==0)return num1;
    return GCD(num2,num1%num2);
}
int main()
{
    int size;
    scanf("%d",&size);
    int array[size],i;
    for(i=0;i<size;i++)scanf("%d",&array[i]);
    int result_GCD=array[0];
    int result_LCM=array[0];
    for(i=1;i<size;i++)
        {
            result_GCD=GCD(array[i],result_GCD);
            result_LCM=((result_LCM*array[i])/GCD(array[i],result_LCM));
        }
    printf("\nGCD:%d",result_GCD);
    printf("\nLCM:%d",result_LCM);
    return 0;
}
