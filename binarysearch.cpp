#include<iostream>
using namespace std;
int main()
{
    int size=0,keyrollno=0;
    cout<<"enter size of array"<<endl;
    cin>>size;
    //Now we will be creating two array
    char name[size];
    int rollno[size];
    //Now we will take input from user
    for(int loop=0;loop<size;loop++)
    {
        cout<<"Enter name of student "<<loop+1<<endl;
        cin>>name[loop];
        cout<<"Enter roll no of student "<<loop+1<<endl;
        cin>>rollno[loop];
    }
    //Now we will ask the user for the key which is the value he wants to search
    cout<<"Enter the roll of student you want name of ?"<<endl;
    cin>>keyrollno;
    for(int loop=0;loop<size;loop++)
    {
        if(keyrollno==rollno[loop])
        {
            cout<<"Name is found ! It is "<<name[loop]<<endl;
            break;
        }
    }
    return 0;
}
