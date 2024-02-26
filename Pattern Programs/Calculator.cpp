#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
void calculator(int x, int y);
int main()
{
    system("CLS");
    string Id,Password,uId,uPassword;
    cout<<"\t\t\t\t----- SIGN UP -----";
    cout<<"\n\tSet your ID Name : ";
    cin>>Id;
    cout<<"\n\tSet your PassWord Name : ";
    cin>>Password;
    cout<<"\n\tWait 3 seconds";
    for(int i=1;i<=3;i++)
    {
        cout<<". ";             //1000 is means 1000 mili seconds = 1 second
        Sleep(1000);            //Sleep is used to print the statement acc. to your given time
    }
    system("CLS");              //system("CLS") this function is used to clear the above buffer screen
    login:                      // using goto statement  (login is a lable)
    cout<<"\t\t\t\t----- LOG IN -----";
    cout<<"\n\tID Name : ";
    cin>>uId;
    cout<<"\n\tPassWord Name : ";
    cin>>uPassword;
    if(Id==uId && Password==uPassword)
    {
        system("CLS");
        cout<<"Log In Successful ! ! !"<<endl;
        cout<<"\t\t\t\t~~~~~ Calculator~~~~~";
        int x,y;
        cout<<"\n\tEnter two number : "<<endl;
        cin>>x>>y;
        calculator(x,y);
    }
    else if(Id!=uId)
    {
        cout<<"\nID is not Available";
        Beep(400,1000);
        Sleep(2000);
        goto login;
    }
    else if(Password!=uPassword)
    {
        cout<<"\nPassword is incorrect";
        Beep(400,1000);
        Sleep(2000);
        goto login;
    }
    else
    {
        cout<<"\nYour entered Id and Password both are wrong";
        goto login;
    }
    return 0;
}
void calculator(int a, int b)
{
        again:  // goto statement
        cout<<"\n\t1.Addition ";
        cout<<"\n\t2.Multiplication ";
        cout<<"\n\t3.Substration ";
        cout<<"\n\t4.Division ";
        cout<<"\n\t5.Modulation ";
        cout<<"\n\t6.Exit "<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\tAddition Result = "<<a+b;
            goto again;
            break;
            case 2:
            cout<<"\tMultiplication Result = "<<a*b;
            goto again;
            break;
            case 3:
            cout<<"\tSubstraction Result = "<<a-b;
            goto again;
            break;
            case 4:
            cout<<"\tDivision Result = "<<a/b;
            goto again;
            break;
            case 5:
            cout<<"\tResult = "<<a%b;
            goto again;
            break;
            case 6:
            system("CLS");
            exit(0);
            break;
            default:
            cout<<"\n\tWrong choice Try again ! ! !";
            for(int i=1;i<=3;i++)
            {
                cout<<". ";             
                Sleep(1000);            
            }
            goto again;
            break;
        }
}


// Output
//                         ----- SIGN UP -----
// Set your ID Name : Dinesh

// Set your PassWord Name : 1596

// Wait 3 seconds. . . 
                  
//                         ----- LOG IN -----
// ID Name : Dinesh

// PassWord Name : 1596

// Log In Successful ! ! !
//                                 ~~~~~ Calculator~~~~~
//         Enter two number :
// 5
// 6

//         1.Addition 
//         2.Multiplication 
//         3.Substration 
//         4.Division 
//         5.Modulation 
//         6.Exit 
// 1
//         Addition Result = 11