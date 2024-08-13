// Calculate the time complexity for the following code snippet.
// for(int i = 0; i < n; i++) {
// for(int j = 0; j * j < n; j++) {
// cout << “PhysicsWallah ”;
// }
// }
// SOLUTION OF THIS CODE IS - O(N^3/2)~ O(N^2)
#include<iostream>
using namespace std;
int main()
{
    int n=100;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j*j<n;j++)
        {
            cout<<"PhysicsWallah";
        }
    }
}