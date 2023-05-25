#include<iostream>
using namespace std;
void add(int (*a)[10],int (*b)[10],int r,int c)
{
    int d[20][20];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"the addition is"<<endl;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<d[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void subtract(int (*a)[10],int (*b)[10],int r,int c)
{
    int d[20][20];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"the subtraction is"<<endl;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<d[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void multiply(int (*a)[10],int (*b)[10],int r,int c)
{
    int d[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            d[i][j]=0;
            for(int k=0;k<r;k++)
            {
                d[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"the multiplication is"<<endl;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<d[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void transpose(int (*a)[10],int (*b)[10],int r,int c)
{
    int d[20][20];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            a[i][j]=a[j][i];
            b[i][j]=b[i][j];
        }
    }
    cout<<"the transpose of 1st matrix is"<<endl;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"the transpose of 2nd matrix"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int row,col;
    cout<<"enter row"<<endl;
    cin>>row;
    cout<<"enter column"<<endl;
    cin>>col;
    int a[10][10];
    int b[10][10];
    cout<<"enter nos of 1st matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter nos of 2nd matrix"<<endl;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>b[i][j];
        }
    }
    multiply(a,b,row,col);
    add(a,b,row,col);
    subtract(a,b,row,col);
    transpose(a,b,row,col);
    return 0;
}