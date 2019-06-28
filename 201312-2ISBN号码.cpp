/*************************************************************************
    > File Name: 201312-2ISBN号码.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 14时29分05秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

struct node{
	int num[9];
	int sum;
	char c;
	node(string &s){
		sum=0;
		int ind=0,i=0;
		while(s[ind]){
			if(ind==12){
				c=s[ind];
				break;
			}
			if(s[ind]!='-'){
				num[i++]=s[ind]-'0';
			}
			ind++;
		}
		for(int i=0;i<9;i++){
			sum+=(i+1)*num[i];
		}
	}
};

int main(){
	string s;
	cin>>s;
	char x;
	node k(s);
	int m=k.sum%11;
	if(m==10){
		x='X';
	}else{
		x=m+'0';
	}
	if(x==k.c){
		cout<<"Right";
	}else{
		s[12]=x;
		cout<<s;
	}
	return 0;
}

