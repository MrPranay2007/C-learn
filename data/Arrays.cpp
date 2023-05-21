#include<iostream>
using namespace std;
int main()
{
    //Basic Array Input/Output
    int marks[4]={23,45,56,89};
    
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    
    /**
    //for loop to print array
    cout<<"Printing using for loop"<<endl;
    for(int i=0;i<4;i++)
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;

    //while loop
    cout<<"Printin using while loop"<<endl;
    {
    int i=0;
    while(i<4)
    {
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    i++;
    }
    }
    
    {
    //Do-While loop
    cout<<"Printing using do-whileloop"<<endl;
    int i=0;
    do
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
}
    */

   
    //Pointer with array
    int* p=marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}