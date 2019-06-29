/*************************************************************************
    > File Name: 201712-2游戏.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月29日 星期六 18时20分52秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

list<int> l;
int n,k;
void init(){
	sl(i,1,n+1){
		l.push_back(i);
	}
	return ;
}

int main(){
	cin>>n>>k;
	int t=1;
	init();
	while(l.size()!=1){
		int now=l.front();
		l.pop_front();
		if(t%k==0||t%10==k){
			t++;
			continue;
		}
		t++;
		l.push_back(now);
	}
	cout<<l.front();
	return 0;	
}
