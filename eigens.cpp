#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    //Aim: To create N*N square matrix.
    const int N = 2;
    cout<<"This is a program to calculate eigensvalues for a 2*2 square Matrix.\n";
    //Aim: To get input for elements of matrix.
    float M[N][N];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<"Enter the ("<<i+1<<","<<j+1<<")th element for your Matrix: ";
            cin>>M[i][j];
        }
    }
    
    //Aim: To display the Matrix to the user.
    for(int i=0; i<N; i++)
    {
        cout<<"| ";
        for(int j=0; j<N; j++)
        {
            cout<<setw(3)<<M[i][j];
            cout<<" ";
        }
        cout<<"|";
        cout<<endl;
    }

    //Aim: To start the calculation for the eigen values.
    float a, b, c, d, x, y;
    a = M[0][0];
    b = M[0][1];
    c = M[1][0];
    d = M[1][1];

    //Aim: To check if given matrix is singular.
    if(a*d-b*c==0)
    {
        cout<<"The given matrix is singular.\n";
    }
    //Aim: To calculate the eigen values.
    x = ((a+d) + sqrt((a+d)*(a+d) -4*(a*d - b*c)))/2.0;
    y = ((a+d) - sqrt((a+d)*(a+d) -4*(a*d - b*c)))/2.0;

    //Aim: To display the eigen values to the user.
    cout<<"The eigen values for the given 2*2 square matrix is: "<<x<<" & "<<y<<".";
    cout<<endl;
}