/*N monkeys are invited to a party where they start dancing. They dance in a circular formation, very similar to a Gujarati Garba or a Drum Circle. The dance requires the monkeys to constantly change positions after every 1 second.

The change of position is not random & you, in the audience, observe a pattern. Monkeys are very disciplined & follow a specific pattern while dancing.

Consider N = 6, and an array monkeys = {3,6,5,4,1,2}.

This array (1-indexed) is the dancing pattern. The value at monkeys[i], indicates the new of position of the monkey who is standing at the ith position.

Given N & the array monkeys[ ], find the time after which all monkeys are in the initial positions for the 1st time.

Constraints

1<=t<=10 (test cases)
1<=N<=10000 (Number of monkeys)

Input Format

First line contains single integer t, denoting the number of test cases.
Each test case is as follows –
Integer N denoting the number of monkeys.
Next line contains N integer denoting the dancing pattern array, monkeys[].

Output

t lines,
Each line must contain a single integer T, where T is the minimum number of seconds after which all the monkeys are in their initial position.

*/


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
