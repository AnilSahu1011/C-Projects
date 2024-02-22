#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class A
{
    public:
    int total;
    string name[100],roll[100],stream[100],add[100],ph[100];
    public:
    void entry();       //Function declaration
    void show();
    void search();
    void update();
    void del();
};
void A:: entry()
{
    system("CLS");
    cout<<"Enter how many student's data you want to insert : "<<endl;
    cin>>total;
        for(int i=0;i<total;i++)
        {
            cout<<"--- Enter the Data of students ---"<<endl;
            cout<<"Enter the Roll No : "<<endl;
            cin>>roll[i];
            cout<<"Enter the Name : "<<endl;
            cin>>name[i];
            cout<<"Enter the stream : "<<endl;
            cin>>stream[i];
            cout<<"Enter the Phone No : "<<endl;
            cin>>ph[i];
        }
    
}

void A::show()
{
    if(total==0)
    {
        cout<<"Data is not Available";
    }
    else
    {
        cout<<"***********************"<<endl;
        cout<<"*     STUDENT DATA    *"<<endl;
        cout<<"***********************"<<endl;
        for(int i=0;i<total;i++)
        {
            cout<<"Student ~ "<<(i+1)<<endl;
            cout<<"Roll No : "<<roll[i]<<endl;
            cout<<"Name : "<<name[i]<<endl;
            cout<<"stream : "<<stream[i]<<endl;
            cout<<"Phone No : "<<ph[i]<<endl<<endl;
        }
    }


}

void A::search()
{
    string rollNo;
    cout<<"Enter his/her Roll No. you want to search : ";
    cin>>rollNo;
    for(int i=0;i<total;i++)
    {
        if(roll[i] == rollNo)
        {
            system("CLS");
            cout<<"Student ~ "<<(i+1)<<endl;
            cout<<"Roll No : "<<roll[i]<<endl;
            cout<<"Name : "<<name[i]<<endl;
            cout<<"stream : "<<stream[i]<<endl;
            cout<<"Phone No : "<<ph[i]<<endl;
            cout<<"\v";
        }
    }
}

void A :: update()
{
    string rollNo;
    cout<<"Enter his/her Roll No. you want to update : ";
    cin>>rollNo;
    for(int i=0;i<total;i++)
    {
        if(roll[i] == rollNo)
        {
            system("CLS");
            cout<<"Previous Data";
            cout<<"Student ~ "<<(i+1)<<endl;
            cout<<"Roll No : "<<roll[i]<<endl;
            cout<<"Name : "<<name[i]<<endl;
            cout<<"stream : "<<stream[i]<<endl;
            cout<<"Phone No : "<<ph[i]<<endl;
            cout<<"\v";
            
            cout<<"Enter new Data"<<endl;

            cout<<"Enter the Roll No : "<<endl;
            cin>>roll[i];
            cout<<"Enter the Name : "<<endl;
            cin>>name[i];
            cout<<"Enter the stream : "<<endl;
            cin>>stream[i];
            cout<<"Enter the Phone No : "<<endl;
            cin>>ph[i];
        }
    }
}
void A :: del()
{
    int a ;
    cout<<"\n Full record delete press 1 ";
    cout<<"\n Delete specific record press 2 ";
    cin>>a;
    if(a==1)
    {
        total=0;
        cout<<"All record are delete ! ";
    }
    else if(a==2)
    {
        string rollNo;
        cout<<"Enter his/her Roll No. you want to Delete : ";
        cin>>rollNo;
        for(int i=0;i<total;i++)
        {
            if(roll[i] == rollNo)
            {
                for(int j=i;j<=total;j++)
                {
                roll[i]=roll[i+1];
                name[i]=name[i+1];
                stream[i]=stream[i+1];
                ph[i]=ph[i+1];
                }
            }
            total--;
        }
    }
    else
    {
        cout<<"\nwrong choice";
    }
}
int main()
{
    system("CLS");
    int val;
    A obj;
    while(true)
    {
        cout<<"\v\v";
        cout<<"\t\t\t*************************************"<<endl;
        cout<<"\t\t\t*  WELCOME TO THE STUDENT DATABASE  *"<<endl;
        cout<<"\t\t\t*************************************"<<endl;
        cout<<"\t\t\t1.Data Entry"<<endl;
        cout<<"\t\t\t2.Show Data"<<endl;
        cout<<"\t\t\t3.Search Data"<<endl;
        cout<<"\t\t\t4.Update Data"<<endl;
        
        cout<<"\t\t\t5.Delete Data"<<endl;
        cout<<"\t\t\t6.Exit "<<endl;
        cin>>val;
        switch(val)
        {
            case 1:
                obj.entry();
                break;
            case 2:
                obj.show();
                break;
            case 3:
                obj.search();
                break;
            case 4:
                obj.update();
                break;
            case 5:
                obj.del();
                break;
            case 6:
               exit(0);
                break;
            default:
            cout<<"Wrong coice ! ! !";
            break;
        }
    }
    return 0;
}