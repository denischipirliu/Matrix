#include<iostream>
using namespace std;
int main()
{
    int A[100][100];
    int n,counter,d;
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
cout<<"Matricea se va roti spre dreapta daca apasati 1 sau se va roti spre stanga daca apasati -1"<<endl;
cin>>d;
cout<<"De cate ori se va roti matricea?"<<endl;
cin>>counter;
//spre stanga
if(d==-1)
{
    do{
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
counter--;
}
while(counter);
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
//spre dreapta
if(d==1)
{
    do
    {
    for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        swap(A[i][j],A[j][i]);
    }
}
    for (int i = 0;i<n;i++)
    {


    for(int j=0,k=n-1;j < k;j++,k--)
    {
        swap(A[i][j],A[i][k]);
    }
    }
    counter--;
    }

while(counter);
cout<<"Matrix A rotita spre dreapta:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<' ';
        }
        cout<<endl;
    }
}
return 0;
}
