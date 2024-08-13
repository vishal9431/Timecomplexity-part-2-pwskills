// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 1; i < n; i*=2) {
// for(int j = n; j > i; j--) {
// c++;
// }
// }
// SOLUTION - Tc = o(nlog(n));
#include<iostream>
using namespace std;
int main()
{
    int n=100;
    int c=0;
    for(int i=1;i<n;i*=2)
    {
        for(int j=n;j>i;j--)
        {
            c++;
        }
    }
    cout<<c<<endl;
}