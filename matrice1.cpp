#include<iostream>
using namespace std;
int main()
{
    int A[100][100];
    int n;
cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Matrix A:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<' ';
        }
        cout<<endl;
}
//spre stanga
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        swap(A[i][j],A[j][i]);
    }
}
for (int i = 0;i<n;i++)
{
    for(int j=0,k =n-1;j < k;j++,k--)
    {
        swap(A[j][i],A[k][i]);
    }
}
cout<<"Matrix A rotita spre stanga:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<' ';
        }
        cout<<endl;
}
}
