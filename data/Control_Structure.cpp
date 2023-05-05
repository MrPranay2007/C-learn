#include<iostream>
using namespace std;
int main()
{
    
    //*************Sequence Structure****************
    //cout<<"It is the program we write normally";


    //*************Selection Structure***************
    
    //If-ELse if-Else Ladder
    
    /**
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"You cannot come to my party"<<endl;
        }
    else if(age==18)
    {
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else
    {
        cout<<"You can come to the party"<<endl;
    }

    */


    // Switch Case Statement
    
    /** 
    switch (age)
    {
    case 18:
    cout<<"You are 18";
        break;
    
    case 22:
    cout<<"You are 22";
    break;

    case 2:
    cout<<"You are 2";
    break;
    default:
    cout<<"No special Case";
        break;
    }

    cout<<"Done with switch case"<<endl;
    */


    //************Loop Structure*********************
    
    // for loop
    /**
    for (int i = 1; i <= 4; i++)
    {
        cout<<i<<endl;
    }
    */
    //While loop
    /**
    int i=10;
    while (i<=40)
    {
        cout<<i<<endl;
        i++;
    }
    */

    //Do-While Loop
    /**
    int i=10;
    do{
        cout<<i<<endl;
        i++;
    }
    while (false);
    */

   //Multiplications Table
   int j=6;
   for(int i=1;i<=10;i++)
   {
    cout<<j<<" * "<<i<<" is "<<(j*i)<<endl;   
   }

    return 0;
}