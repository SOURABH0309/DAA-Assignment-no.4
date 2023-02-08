#include<iostream>
#include<string>
#include<conio.h>

using namespace std;
int main()
{
    string t;
    getline(cin,t);
    string search;
    cout<<"Enter the substring to find in given string:-> ";
    cin>>search;
    int temp,flag=0,pos=-1;
    for (int i = 0; i < t.length(); i++)
    {
        temp=i;
        for (int j = 0; j < search.length(); j++)
        {
            if (search[j]==t[temp])
            {
                if (j==0)
                {
                    pos=temp;
                }
                temp++;
                if (j==(search.length()-1))
                {
                    flag=1;
                }
            }
            else
            {
                break;
            }
            if (flag==1)
            {
                break;
            }
            
        }
    }
        if (flag==1)
        {
            cout<<"The string found at position:-> "<<pos<<endl;
        }
        else
        {
            cout<<"The string not found"<<endl;
        }
        
        
    
return 0;
}