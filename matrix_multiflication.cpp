#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int multi[3][3];
    cout<<"Enter element of arr1 :"<<endl;
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cin>>arr1[r][c];
        }
    }
    cout<<"Enter element of arr2 :"<<endl;
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cin>>arr2[r][c];
        }
    }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            int sum=0;
            for(int z=0;z<3;z++)
            {
                sum=sum+(arr1[r][z]*arr2[z][c]);
            }
            multi[r][c]=sum;
        }
    }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout<<multi[r][c]<<" ";
        }
        cout<<endl;
    }
}
