// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 0; i /= 2) {
// for(int j = 0; j < i; j ++) {
// c++;
// }
// }
//
#include<iostream>
using namespace std;
int main()
{
    int n=100;
    int c=0;
    for(int i=n;i>0;i/=2)
    {
        for(int j=0;j<i;j++)
        {
            c++;
        }
    }
    cout<<c<<endl;
}