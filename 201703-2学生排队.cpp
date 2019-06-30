/*************************************************************************
    > File Name: 201703-2学生排队.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月30日 星期日 18时10分08秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 1005

vector<int> ss;

int n,k,num,cnt;

void init(){
	sl(i,1,n+1){
		ss.push_back(i);
	}
	return ;
}
int main(){
	cin>>n>>k;
	init();
	while(k--){
		cin>>num>>cnt;
		auto x=ss.begin();
		for(x=ss.begin();x!=ss.end();x++){
			if(*x==num)break;
		}
		ss.erase(x);
		ss.insert(x+cnt,num);
	}
	sl(i,0,n){
		i==0||cout<<" ";
		cout<<ss[i];
	}
	return 0;
}
