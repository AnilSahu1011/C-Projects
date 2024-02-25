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
    cout<<"\n\tSet your PassWord : ";
    cin>>Password;         
    
    cout<<"\n\tYour Id is Created \n";

    cout<<"\t\t----- LOG IN -----";
    cout<<"\n\tID Name : ";
    cin>>uId;
    cout<<"\n\tPassWord : ";
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
    else if(Id!=uId && Password!=uPassword)
    {
        cout<<"\nPassword is incorrect";
        Beep(300,500);
    }
    else
    {
        cout<<"\nYour entered Id not Available";
        Beep(500,500);
    }
    return 0;
}


// Output

// Case-1

//                               ----- SIGN UP -----
//         Set your ID Name : Asish#2056

//         Set your PassWord : Anil337

//         Your Id is Created 

//                 ----- LOG IN -----
//         ID Name : Asish#2056

//         PassWord : Anil337

// Log In successfull

// Case-2

//                               ----- SIGN UP -----
//         Set your ID Name : Asish#2056

//         Set your PassWord : Anil337

//         Your Id is Created 

//                 ----- LOG IN -----
//         ID Name : Asish#2056

//         PassWord : Anil346

// Password is incorrect

// Case-3

//                               ----- SIGN UP -----
//         Set your ID Name : Asish#2056

//         Set your PassWord : Anil337

//         Your Id is Created 

//                 ----- LOG IN -----
//         ID Name : asish#2056

//         PassWord : Anil346

// ID is not Available
