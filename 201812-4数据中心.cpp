/*************************************************************************
    > File Name: 201812-4数据中心.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月26日 星期三 18时43分02秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
struct node{
	int s,t,w;
};

int f[maxn];

vector<node> ss;

function<void(int,int,int)> add=[](int s,int t,int w){
	node a=(node){s,t,w};
	ss.push_back(a);
	return;
};

function<bool(node,node)> cmp=[](node a,node b){
	return a.w<b.w;
};

function<void(function<bool(node,node)>)> px=[](function<bool(node,node)> cmp){
	sort(ss.begin(),ss.end(),cmp);
	return;
};

function<int(int)> ff=[](int x){
	if(f[x]==x)return x;
	int b=f[x];
	f[x]=f[b];
	return ff(b);
};

function<int(int,int)> un=[](int a,int b){
	int x=ff(a),y=ff(b);
	if(x==y)return 0;
	else{
		f[x]=y;
		return 1;
	}
};

auto init=[](){
	for(int i=0;i<maxn;i++){
		f[i]=i;
	}	
	return 0;
};

int n,m,root;
int main(){
	cin>>n>>m>>root;
	init();
	int s,t,w;
	while(m--){
		cin>>s>>t>>w;
		add(s,t,w);
	}
	px(cmp);
	int cnt=0;
	for(auto x:ss){
		cnt+=un(x.s,x.t);
		if(cnt==n-1){
			cout<<x.w<<endl;
			break;
		}
	}
	return 0;
}
