//STRING SUBSTRING DELETION INSERTION
#include<bits/stdc++.h>
using namespace std;
string substring(string s, int start, int len)
{
    string sub = "";
    for(int i=start; i<=len; i++){
        sub += s[i];
    }
    return sub;
}
string delatetion(string text,int pos,int len)
{
    string s1=substring(text,0,pos);
    string s2=substring(text,pos+len,(text.size()-(pos+len)));
    return s1+s2;
}
string insert(string text,int pos,string sub)
{
    string s1=substring(text,0,pos);
    string s2=substring(text,pos,text.size()-pos);
    return s1+sub+s2;
} 
int main()
{
    string text,newtext;
    cout<<"Enter a string: ";
    cin>>text;
    int pos,len;
    cout<<"Enter position and length: ";
    cin>>pos>>len;
    string sub=substring(text,pos,len);
    cout<<"Substring: ";
    cout<<sub<<endl<<endl;
    string s1=delatetion(text,pos,len);
    cout<<"After deletion: ";
    cout<<s1<<endl<<endl;
    cout<<"Enter extra string: ";
    cin>>newtext;
    string s2=insert(text,pos,newtext);
    cout<<"After insertion: ";
    cout<<s2<<endl<<endl;
    return 0;
}  
