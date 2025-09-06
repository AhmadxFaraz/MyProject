#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Tell me what do you want the height of the triangle to be?\n";
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout<<"\n\n\n";
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<" ";
        }
    for(int k = 0; k < N - i; k++)
    {
        cout<<"* ";
    }
    cout<<endl;
   }
}