#include<iostream>
#include<windows.h>
using namespace std;
                    //--------Print 1 to 10 print pattern format--------//

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
        cout<<"\v\v";
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
        cout<<"\v\v";
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
        cout<<"\v\v";
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
        cout<<"\v\v";
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
        cout<<"\v\v";
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
        cout<<"\v\v";
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
        cout<<"\v\v";
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
        cout<<"\v\v";
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
        cout<<"\v\v";
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
        cout<<"\v\v";
    }
   /* void space()
    {
        for(i=1;i<=2;i++)
        {
            for(j=1;j<=2;j++)
            {
                cout<<"    ";
            }
            cout<<endl;
        }   
    }*/
};

int main()
{
    system("CLS");
    Number object;
    object.a();
    object.b();
    object.c();
    object.d();
    object.e();
    object.f();
    object.g();
    object.h();
    object.ii();
    object.k();
    return 0;
}

// Output

//   *
//   *
//   *
//   *
//   *


// *****
//     *
//     *
// *****
// *
// *
// *****


// ****
//    *
//    *
// ****
//    *
//    *
// ****


// *   *
// *   *
// *****
//     *
//     *


// *****
// *
// *****
//     *
// *****


// *****
// *
// *****
// *   *
// *****


// *****
//     *
//   ***
//     *
//     *


// *****
// *   *
// *   *
// *****
// *   *
// *   *
// *****


// *******
// *     *
// *******
//       *
// *******


// * *****
// * *   *
// * *   *
// * *   *
// * *****