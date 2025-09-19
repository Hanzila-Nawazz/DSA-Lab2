#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter the length of array you want to enter : ";
    cin>>length;
    cin.ignore();
    char *myString = new char[length];
    cout<<"Enter the string : ";
    cin.getline(myString , length+1); 
    int start = 0 , end = length-1;
    while(start < end)
    {
        swap(myString[start] , myString[end]);
        start++;
        end--;
    }
    for(int i = 0 ; i < length ; i++)
    {
        cout<<myString[i];
    }
}