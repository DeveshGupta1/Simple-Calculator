#include<iostream>
using namespace std;

int main()
{
    char c='n';
    do{
        int ch=0;
        cout<<"1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.EXIT";
        cin>>ch;

        if(ch==1){
            int a=0,b=0;
            cout<<"Enter First No.  - ";
            cin>>a;
            cout<<"Enter Second No. - ";
            cin>>b;
            cout<<"Sum is - "<<a+b;
        }
        else if(ch==2){
            int a=0,b=0;
            cout<<"Enter First No.  - ";
            cin>>a;
            cout<<"Enter Second No. - ";
            cin>>b;
            cout<<"Diffrence is - "<<a-b;
        }
        else if(ch==3){
            int a=0,b=0;
            cout<<"Enter First No.  - ";
            cin>>a;
            cout<<"Enter Second No. - ";
            cin>>b;
            cout<<"Product is - "<<a*b;
        }
        else if(ch==4){
            int a=0,b=0;
            cout<<"Enter First No.  - ";
            cin>>a;
            cout<<"Enter Second No. - ";
            cin>>b;
            cout<<"Quotient is - "<<a/b;
        }
        else if(ch==5)
            exit(0);
        
        cout<<"Do you want to continue (y/n) - ";
        cin>>c;
    }
    while(c=='y');
    return 0;
}