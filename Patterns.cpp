#include<iostream>
using namespace std;
int main()
{
    const int n = 10;
    
    //Aim: To print a n*n grid of #.
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"# ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Aim: To print a right angled triangle of base = height = n, with hypotenuse on right side.
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Aim: To print a reverse pyramid/Triangle.
    for(int i = 0; i<n; i++)
    {
        for(int j=0;j<i;j++)
        {
           cout<<" ";
        }
        for(int k = 0; k<n-i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}