#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    string Id,Password,uId,uPassword;
    system("CLS");
    cout<<"\t\t\t\t----- SIGN UP -----";
    cout<<"\n\tSet your ID Name : ";
    cin>>Id;
    cout<<"\n\tSet your PassWord Name : ";
    cin>>Password;         
    
    cout<<"\n\tYour Id is Created ";

    cout<<"\t\t\t\t----- LOG IN -----";
    cout<<"\n\tID Name : ";
    cin>>uId;
    cout<<"\n\tPassWord Name : ";
    cin>>uPassword;
    if(Id==uId && Password==uPassword)
    {
        cout<<"\nLog In successfull";
    }
    else if(Id!=uId)
    {
        cout<<"\n ID is not Available";
        Beep(500,500);
    }
    else if(Password!=uPassword)
    {
        cout<<"\nPassword is incorrect";
        Beep(300,500);
    }
    else
    {
        cout<<"\nYour entered Id and Password both are wrong";
        Beep(500,500);
    }
    return 0;
}
