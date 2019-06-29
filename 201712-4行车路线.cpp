/*************************************************************************
    > File Name: 201712-4行车路线.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月29日 星期六 22时07分23秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 505
int n,m;
struct node{
	int tag,to,l;
};

vector<node> ss[maxn];

void add(int t,int a,int b,int c){
	ss[a].push_back({t,b,c});
	ss[b].push_back({t,a,c});
	return ;
}

struct status{
	long long s,l;
};

status d[maxn];

void init(){
	sl(i,0,n+1){
		d[i].l=1<<30;
		d[i].s=0;
	}
	return ;
}

int vis[maxn];

priority_queue<pii> q;
int main(){
	cin>>n>>m;
	int t,a,b,c;
	while(m--){
		cin>>t>>a>>b>>c;
		add(t,a,b,c);
	}
	init();
	d[1].s=0;d[1].l=0;
	q.push({-d[1].l,1});
	while(!q.empty()){
		int now=q.top().second;q.pop();
		if(vis[now])continue;
		if(now==n)break;
		vis[now]=1;
		for(auto x:ss[now]){
			if(vis[x.to])continue;
			if(x.tag==1){
				long long k=d[now].l-d[now].s*d[now].s+(d[now].s+x.l)*(d[now].s+x.l);
				if(k<d[x.to].l)d[x.to].l=k,d[x.to].s=d[now].s+x.l,q.push({-d[x.to].l,x.to});
			}else{
				long long k=d[now].l+x.l;
				if(k<d[x.to].l)d[x.to].l=k,d[x.to].s=0,q.push({-d[x.to].l,x.to});
			}
		}
	}
	cout<<d[n].l;
	return 0;
}

