/*************************************************************************
    > File Name: 201512-2Z字形扫描.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年07月05日 星期五 22时34分12秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i--)
#define pii pair<int,int>
#define maxn 600
int n;
int d[maxn][maxn];

struct node{
	int x,y,t;
};

vector<node> ss;

bool cmp(node &a,node &b){
	if(a.x+a.y!=b.x+b.y){
		return a.x+a.y<b.x+b.y;
	}
	if((a.x+a.y)&1){
		return a.x<b.x;
	}
	return a.x>b.x;
}

int main(){
	cin>>n;
	sl(i,1,n+1){
		sl(j,1,n+1){
			cin>>d[i][j];
			ss.push_back({i,j,d[i][j]});
		}
	}
	sort(ss.begin(),ss.end(),cmp);
	for(auto x:ss){
		cout<<x.t<<" ";
	}
	return 0;
}

