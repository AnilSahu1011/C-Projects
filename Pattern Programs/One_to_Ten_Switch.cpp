#include<iostream>
#include<windows.h>
using namespace std;


class Number
{
    public:
    int i,j;
    public:
    void a()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(j==3)
                {
                    cout<<"*";
                }
                else 
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void b()
    {
        for(i=1;i<=7;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( i==1 || i==4 || i==7 || (j==5 && i<=4) || (j==1 && i>=4))
                {
                    cout<<"*";
                }
                else 
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void c()
    {
        for(i=1;i<=7;i++)
        {
            for(j=1;j<=4;j++)
            {
                if(j==4 || i==1 ||i==4 || i==7 )
                {
                    cout<<"*";
                }
                else 
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void d()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(i==3 || j==5 || (j==1 && i<=3) )
                {
                    cout<<"*";
                }
                else 
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void e()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( i==1 || i==3 || i==5 || (j==1 && i<=3) || (j==5 && i>=3))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void f()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( j==1 || i==3 || i==1 || i==5 || (j==5 && i>=3))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void g()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( i==1 || j==5 || (i==3 && j!=1 && j!=2))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void h()
    {
        for(i=1;i<=7;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( i==1 || i== 7 || j==1 || j==5 || i==4 )
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void ii()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=7;j++)
            {
                if( (j==1 && i<=3) || i==3 || j==7 || i==5 || i==1)
                {
                    cout<<"*";
                }
                else 
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void k()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=7;j++)
            {
                if( j==1 || j==3 || j==7 || (i==1 && j>=3) || (i==5 && j>=3)  )
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void space()
    {
        for(i=1;i<=2;i++)
        {
            for(j=1;j<=2;j++)
            {
                cout<<"    ";
            }
            cout<<endl;
        }   
    }
};

int main()
{
    system("CLS");
    Number obj;
    int w;
    cout<<"\t\t   Enter any no. from 1 to 10 "<<endl;
    cout<<"\t\tIt will display pattern format : ";
    cin>>w;
    obj.space();
    switch(w)
    {
        case 1:
            obj.a();
            break;
        case 2:
            obj.b();
            break;
        case 3:
            obj.c();
            break;
        case 4:
            obj.d();
            break;
        case 5:
            obj.e();
            break;
        case 6:
            obj.f();
            break;
        case 7:
            obj.g();
            break;
        case 8:
            obj.h();
            break;
        case 9:
            obj.ii();
            break;
        case 10:
            obj.k();
            break;
        default:
            cout<< " Your choice is wrong \n Try Again...";
            break;
    }
    return 0;
}



// Output

//                    Enter any no. from 1 to 10
//                 It will display pattern format : 7

// *****
//     *
//   ***
//     *
//     *

//                    Enter any no. from 1 to 10
//                 It will display pattern format : 10
        
        
// * *****
// * *   *
// * *   *
// * *   *
// * *****