/*************************************************************************
    > File Name: 201709-4通信网络.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月27日 星期四 18时59分44秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 1005
int N,M;
vector<int> ss[maxn];
void add(int a,int b){
	ss[a].push_back(b);
	return ;
}
int a,b;


int vis[maxn][maxn];

void tx(int x,int p[],int y){
	p[y]=1;
	vis[x][y]=1;
	vis[y][x]=1;
	for(auto m: ss[y]){
		if(p[m]==0){
			tx(x,p,m);
		}
	}
	return ;
}

int main(){
	cin>>N>>M;
	while(M--){
		cin>>a>>b;
		add(a,b);
	}
	for(int i=1;i<N+1;i++){
		int visit[maxn]={0};
		tx(i,visit,i);
	}
	int j,cnt=0;
	for(int i=1;i<N+1;i++){
		for(j=1;j<N+1;j++){
			if(vis[i][j]==0){
				break;
			}
		}
		if(j==N+1){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

