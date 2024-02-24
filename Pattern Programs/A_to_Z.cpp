#include<iostream>
using namespace std;

                /*---------PATTERN PROGRAMM A to Z----------*/

class Alpha
{
    public:
    int i,j,n;
    public:
    void aa()
    {
        cout<<"\v\v";
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=9;j++)
            {
                if( (i+j==6) || (i==4 && j>=3 && j<=8) || (i==2 && j==6) || (i==3 && j==7) || (i==5 && j==9))
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
               if(j==1 || (i==1 && j<5) || (i==2 && j==5) || (i==5 && j==5) || (i==4 && j==5) || (i==6 && j==5) || (i==4 && j<5) || (i==7 && j<5) || (i==3 && j==5))
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
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                if( (j==1 && i>=2 && i<=5) || ( i==1 && j>=3) || ( i==6 && j>=3))
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
        for(i=1;i<=7;i++)
        {
            for(j=1;j<=6;j++)
            {
                if(j==1 || (i==1 && j<5) || (i==7 && j<5 ) || ( j==6 && (i>=3 && i<=5) ) || (i==2 && j==5) ||(i==6 && j==5) )
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
                if( j==1 || i==1 || i==3 || i==5)
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
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( j==1 || i==1 || i==4 )
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
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                if( (i==1 && j>=2) || (j==1 &&  i>=2 && i<=5) || (i==4 && j!=2) || (j==6 &&i>=5) || (i==6 && j>=2 && j<=4) || (i==5 && j==5) )
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
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( j==1 || j==5 || i==3 )
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
            for(j=1;j<=5;j++)
            {
                if( j==3 || (i==1 && (j<=4 || j>=2)) || (i==5 && (j<=4 || j>=2)) )
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
    void jj()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( i==1 || j==3 || (i==4 && j==1 ) || (i==5 && j==2) )
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
            for(j=1;j<=5;j++)
            {
                if( j==1 || (i+j)==5 || (i+j==7 && i==4) || (i+j==9 && i==5) )
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
    void l()
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                if( j==1 || i==6 )
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
    void m()
    {
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( j==1 || j==5 || ( (i+j==4 || i+j==6) && i==2) || (i+j==6 && i==3) )
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
    void nn()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( j==1 || j==5 || (i==j) )
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
    void o()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=6;j++)
            {
                if( i==1 || i==5 || j==1 || j==6 )
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
    void p()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( j==1 || i==1 || i==3 || (j==5 && i<=3) )
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
    void q()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( (i==1 && j!=5) || (j==1 & i!=5) || (i==4 && j!=5) || (j==4 && i!=5) || (i==5 && j==5) )
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
    void r()
    {
        for(i=1;i<=7;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( i==1 || j==1 || i==4 || (j==5 && i>=1 && i<=4) || (i==5 && j==3) || (i==6 && j==4) || (i==7 &&j==5) )
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
    void s()
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
    void t()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=7;j++)
            {
                if( i==1 || j==4)
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
    void u()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if( j==1 || j==5 || i==5 )
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
    void v()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=9;j++)
            {
                if( i==j || (i+j==10) )
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
    void w()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=13;j++)
            {
                if( i==j || (i+j==14) || (i==3 && j==7) || (i==4 && j==6) || (i==4 && j==8) )
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
    void x()
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                if(i==j || (i+j)==7 )
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
    void y()
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=7;j++)
            {
                if( (j==4 && i<=7 && i>=4) || (i==j && i<=4) || ((i+j)==8 && i<=3) )
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
    void z()
    {
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=6;j++)
            {
                if(i==1 || i==5 || (i+j)==7 )
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
   
};

int main ()
{
    Alpha aaa;
    aaa.aa();
    aaa.b();
    aaa.c();
    aaa.d();
    aaa.e();
    aaa.f();
    aaa.g();
    aaa.h();
    aaa.ii();
    aaa.jj();
    aaa.k();
    aaa.l();
    aaa.m();
    aaa.nn();
    aaa.o();
    aaa.p();
    aaa.q();
    aaa.r();
    aaa.s();
    aaa.t();
    aaa.u();
    aaa.v();
    aaa.w();
    aaa.x();
    aaa.y();
    aaa.z();
    return 0;
    
}