/*************************************************************************
    > File Name: 201412-4最优灌溉.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月27日 星期四 23时12分09秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxm 100005
#define maxn 1005

int f[maxn];
int ff(int a){
	if(f[a]==a)return a;
	int k=f[a];
	f[a]=f[k];
	return ff(k);
}

void init(){
	sl(i,0,maxn){
		f[i]=i;
	}
	return ;
}

int union_n(int a,int b){
	int k=ff(a),h=ff(b);
	if(k==h)return 0;
	f[k]=h;
	return 1;
}

struct node{
	int s,t,w;
	node(int s,int t,int w):s(s),t(t),w(w){}
};

bool cmp(node a,node b){
	return a.w<b.w;
}

vector<node> ss;

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int n,m;cin>>n>>m;
	int s,t,w;
	init();
	while(m--){
		cin>>s>>t>>w;
		ss.push_back(node(s,t,w));
	}
	sort(ss.begin(),ss.end(),cmp);
	int cnt=0,ret=0;
	for(auto x:ss){
		if(union_n(x.s,x.t)){
			cnt++;ret+=x.w;
		}
		if(cnt==n-1){
			break;
		}
	}
	cout<<ret;
	return 0;
}

