#include<iostream>
using namespace std;
int main()
{
    int s,el;
    cout<<"ENTER SIZE OF ARRAY"<<endl;
    cin>>s;
    int arr[s];
    cout<<"Enter Array Elements"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER ELEMENT TO SEARCH"<<endl;
    cin>>el;
    for(int i=0;i<s;i++)
    {
        if(arr[i]==el)
        {
            cout<<"ELEMENT AT "<<i<<" index"<<endl;
        cout<<"Total comparisions "<<(i+1)<<endl;
        break;
        }
    }
}
