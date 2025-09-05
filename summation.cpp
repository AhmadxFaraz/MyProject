#include <iostream>
using namespace std;
int main()
{
    //My Aim, to calculate sum of first N positive numbers.
    int N;
    cout<<"Give me a natural number N, and I'll tell you the sum of numbers upto N.\n";
    cin>>N;
    int sum = 0;
    for(int i = 1; i <= N; i++)
    {
        sum += i;
    }
    cout<<"Here, I have calculated the sum of "<<N<<" natural numbers. \n"<<"And the sum is equal to "<<sum<<" ."<<endl;
}