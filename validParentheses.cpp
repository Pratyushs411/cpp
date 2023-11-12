#include<iostream>
#include<stack>
using namespace std;
 void isValid(string s) {
    stack<char> a;
    for(int i=0; i<s.length(); i++) {
       char ch = s[i];
       if(ch == '(' || ch == '{' || ch == '['){
         a.push(ch);
       }
       else{
       if(!a.empty()) {
         char top = a.top();
         if( (ch == ')' && top == '(') || ( ch == '}' && top == '{') || (ch == ']' && top == '[') ) {
           a.pop();
           }
         else{
         cout<<"Not a Valid Parentheses"<<endl;
         return;
         }
       }
       else{
       cout<<"Valid Parentheses"<<endl;
       } 
    }  
    }
    if(a.empty())
        cout<<"Valid Parentheses"<<endl;
    else{
	 cout<<"Not a Valid Parentheses"<<endl;
	 return;
}
}
int main()
{
	string s;
	cout<<"enter string:";
	cin>>s;
	isValid(s);
	return 0;
}
