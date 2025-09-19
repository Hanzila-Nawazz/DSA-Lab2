#include<iostream>
using namespace std;
int main()
{
    int* salArray = new int[20];
    int size =20;
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter the salary for the employee "<<(i+1)<<" : ";
        cin>>salArray[i];
    }

    for(int i = 0 ; i < size ; i++)
    {
        salArray[i] = salArray[i] + salArray[i] / (i+1);
    }
    cout<<"\n Updated salaries : ";
    for(int i = 0 ; i < size ; i++)
    {
        cout<<salArray[i]<<" ";
    }
    cout<<endl;
    return 0; 
}