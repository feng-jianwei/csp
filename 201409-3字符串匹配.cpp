/*************************************************************************
    > File Name: 201409-3字符串匹配.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 12时32分24秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

string s;

void low(string &s){
	int i=0;
	while(s[i]){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]-'A'+'a';
		}
		i++;
	}
	return ;
}

string ss;

int main(){
	cin>>s;
	int tag;cin>>tag;
	int c;cin>>c;
	if(tag==0){
		low(s);
	}
	while(c--){
		cin>>ss;
		string m=ss;
		if(tag==0){
			low(ss);
		}
		if(ss.find(s)!=string::npos){
			cout<<m<<endl;
		}
	}
	return 0;
}

