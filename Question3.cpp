// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
// for(int j = 1; j * j < n; j *= 2) {
// c++;
// }
// }
//time complexity is o(log base 2(root n));
#include<iostream>
using namespace std;
int main()
{
    int n=100;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j*j<n;j*=2)
        {
            c++;
        }
    }
    cout<<c<<endl;
}