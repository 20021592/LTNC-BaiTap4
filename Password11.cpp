#include<iostream>
#include<string>
using namespace std;

string reverse(string s)
{
	int len = s.length();
	string ans="";
	for(int i=len-1;i>=0;i--)
	ans+=s[i];
	return ans;
}
int main()
{
	int t;
	cin >> t;
	string s[t], rs[t];
	for(int i=0;i<t;i++)
	{
	cin >> s[i];
	rs[i]=reverse(s[i]);
	}
	int flag=1;
	for(int i=0;i<t;i++){
		if(flag==0) break;
	for(int j=0;j<t;j++)
	{
	if(rs[j]==s[i])
	{
	int len=rs[i].length();
	cout << len<< " ";
	cout <<rs[i][len/2] <<endl;
	flag=0;
	break;
	}
	}
	}
}