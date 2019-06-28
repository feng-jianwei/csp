/*************************************************************************
    > File Name: 201503-4网络延时.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 09时45分18秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 20005

vector<int> ss[maxn];

void add(int a,int b){
	ss[a].push_back(b);
	ss[b].push_back(a);
	return ;
}

int n,m;
int vis[maxn];
int deep,sum,node;
void dfs(int k){
	if(deep>sum){
		node=k;
		sum=deep;
	}
	vis[k]=1;
	int l=deep;
	for(auto x:ss[k]){
		if(!vis[x]){
			deep+=1;
			dfs(x);
			deep=l;
			vis[x]=0;
		}

	}
}

int main(){
	cin>>n>>m;
	int b;
	sl(i,2,n+1){
		cin>>b;
		add(i,b);
	}
	sl(i,n+1,n+m+1){
		cin>>b;
		add(b,i);
	}
	dfs(1);
	memset(vis,0,sizeof(vis));
	dfs(node);
	cout<<sum;
	return 0;
}

