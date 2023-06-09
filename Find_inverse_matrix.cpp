#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int row,column;
    cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;
    int arr[row][column];
    int arr2[column][row];
    cout<<"Enter element of matrix :"<<endl;
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<column;c++)
        {
            cin>>arr[r][c];
        }
    }
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<column;c++)
        {
             arr2[c][r]=arr[r][c];
        }
    }
    for(int r=0;r<column;r++)
   {
       for(int c=0;c<row;c++)
       {
          cout<<arr2[r][c]<<" ";
       }
       cout<<endl;
   }
}
