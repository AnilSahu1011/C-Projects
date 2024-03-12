/* Every person getting the lucky number wins yje lottery. A number is said to be 
lucky number if and only of if the 1st half of the digit is equal to the 2nd half.
Note : Given number will always have even length.
Your task is determine whether the entered number is lucky number or not. */

#include<iostream>
using namespace std;
int length(int n);       //count the length of the given number
int main()
{
    system("CLS");
    int n,l,a[100],rem,i=0;
    int f=0,e=0;
    cout<<"Enter your Number : ";
    cin>>n;
    l=length(n);
    if(l%2==0)
    {
        while(n>0)
        {
            rem=n%10;
            a[i]=rem;
            n=n/10;
            i++;
        }
        for(int j=0;j<l;j++)
        {
            if(j<l/2)
            {
                f=f+a[j];
            }
            else
            {
                e=e+a[j];
            }
            
        }
        cout<<endl;
        cout<<e<<" "<<f;
        if(f==e)
        {
            cout<<"\nYes\nLucky number ! ! !";
        }
        else
        {
            cout<<"\nNo\nBetter luck next time";
        }
    }
    else
    {
        cout<<"\nEntered number is odd length";
    }
}
int length(int x)
{
    int count=0;
    while(x>0)
    {
        x=x/10;
        count++;
    }
    return count;
}