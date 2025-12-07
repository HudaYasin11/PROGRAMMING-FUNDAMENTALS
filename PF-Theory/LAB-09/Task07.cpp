#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    int count=0;
    cout<<"enter two strings :";
    cin>>s1>>s2;
     bool used[100] = {false}; 

    for(int i=0; i<s1.length();i++)
    { for(int j=0; j<s2.length();j++)
     {
            if (!used[j] && s1[i] == s2[j])
            {
                used[j] = true;
                count++;        
                break;          
            }
     }     
    
    }

    
cout<<"strins have "<<count<<" common elements";
return 0;

}