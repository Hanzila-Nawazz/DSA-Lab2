#include<iostream>
using namespace std;

void analyze_pointer(int* ptr)
{
    cout<<"Memory location pointed by pointer : "<<ptr<<endl; 
    cout<<"Value of integer : "<<*ptr<<endl;
}

int main()
{
    int iValue = 10;
    analyze_pointer(&iValue);
    int *iValue2 = new int;
    *iValue2 = 10;
    analyze_pointer(iValue2); 
}