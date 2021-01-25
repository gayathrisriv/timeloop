#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if((1 <= n)and(n <= 100 ))
    {
        for(int i=1;n>=i;i++)
        {
            cout << i <<  " Abracadabra" << endl;
        }
    }
}