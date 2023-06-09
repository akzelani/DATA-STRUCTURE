#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter array element :";
    cin>>num;
    // declaration of the variables and array
    int arr[num];
    int n,f,l,m,i;
    //input array element
    for (i = 0; i < num; i++)
    {
        cout << " arr [" << i << "] = ";
        cin >> arr[i];
    }
    cout<<"Enter element for search :";
    cin>>n;
    // initialize the starting variable as f and ending variable as l
    f=0;
    l=num-1;// size of array (num) - 1
    // use while loop to check 'st', should be less than equal to 'end'.
    while(l>=f)
    {
        // get middle value by splitting into half
        m=(f+l)/2;
        if(arr[m]==n)
        {
            cout<<"found at index "<<m<<endl;
            break;// use for exit program the program

        }
        else if(n>arr[m])
        {
            f=m+1;// set the new value for st variable

        }
        // check the value of target element is less than the mid element' value
        else if(n<arr[m])
        {
            l=m-1;// set the new value for st variable

        }

    }

    }
