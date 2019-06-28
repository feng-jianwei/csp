/*************************************************************************
    > File Name: 201409-4最优配餐.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 13时48分55秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 1005

struct node{
	int x,y;
};
int n,m,k,h;
queue<node> q;

int vis[maxn][maxn];
int d[maxn][maxn];
void bfs(){
	while(!q.empty()){
	node now=q.front();q.pop();
	int x=now.x,y=now.y;
	if(x>n||x<1||y<1||y>n)continue;
	if(!vis[x+1][y]){
		q.push({x+1,y});
		d[x+1][y]=d[x][y]+1;
		vis[x+1][y]=1;
	}
	if(!vis[x][y+1]){
		q.push({x,y+1});
		d[x][y+1]=d[x][y]+1;
		vis[x][y+1]=1;
	}
	if(!vis[x-1][y]){
		q.push({x-1,y});
		d[x-1][y]=d[x][y]+1;
		vis[x-1][y]=1;
	}
	if(!vis[x][y-1]){
		q.push({x,y-1});
		d[x][y-1]=d[x][y]+1;
		vis[x][y-1]=1;
	}
	}
	return ;
}

struct node2{
	int x,y,t;
};

vector<node2> ss;

int main(){	
	cin>>n>>m>>k>>h;
	int a,b,c;
	while(m--){
		cin>>a>>b;
		q.push({a,b});
		d[a][b]=0;
		vis[a][b]=1;
	}
	long long ret=0;
	while(k--){
		cin>>a>>b>>c;
		ss.push_back({a,b,c});
	}
	while(h--){
		cin>>a>>b;
		vis[a][b]=1;
	}
	bfs();
	for(auto x:ss){
		ret+=d[x.x][x.y]*x.t;
	}
	cout<<ret;
	return 0;
}

