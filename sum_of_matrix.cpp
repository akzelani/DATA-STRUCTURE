#include<iostream>
using namespace std;
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    cout<<"Enter element of matrix1 :"<<endl;
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cin>>matrix1[r][c];
        }
    }
    cout<<"Enter element of matrix2 :"<<endl;
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cin>>matrix2[r][c];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

          result[i][j]=matrix1[i][j]+matrix2[i][j];

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

                cout<<result[i][j]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}
