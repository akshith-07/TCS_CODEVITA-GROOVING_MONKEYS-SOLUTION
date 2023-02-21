//@autor:akshith-07(AKSHITH JOBIRIN S)
#include<stdio.h>
void func(int n,int arr[],int brr[],int crr[],int temp[])
{
    static int t=0;
    for(int i=0;i<n;i++)
    {
        crr[arr[i]-1]=brr[i];
    }
    int count=0;

    for(int i=0;i<n;i++)
    {
        brr[i]=crr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(brr[i]==temp[i])
        {
            count++;
        }
    }
    t++;
    
    if(count==n)
    {
        printf("%d is the minimum number of seconds after all the monkeys will be in their initial position.",t);
    }
    else
    {
        func(n,arr,brr,crr,temp);
    }
    
}
int main()
{
    
    int n;
    scanf("%d",&n);//no of monkeys
    int arr[n];//array to store the dancing pattern
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int brr[n];//initial poisition 
    for(int i=0;i<n;i++)
    {
        brr[i]=i+1;
    }
    int temp[n];
    for(int i=0;i<n;i++ )
    {
        temp[i]=brr[i];
    }
    int crr[n];//empty array for the new positions
    for(int i=0;i<n;i++)
    {
        crr[i]=0;
    }

	int t=0;
	func(n,arr,brr,crr,temp);//function calling 
	
}
