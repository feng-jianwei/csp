/*************************************************************************
    > File Name: 201703-4地铁修建.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月27日 星期四 15时28分59秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 200005
#define maxm 100005
int n,m;
int a,b,c;

struct node{
	int a,b,c;
	node(int a,int b,int c):a(a),b(b),c(c){}
};

int f[maxn];

int ff(int a){
	if(f[a]==a)return a;
	int k= f[a];
	f[a]=f[k];
	return ff(k);
}

int union_n(int a,int b){
	int k=ff(a),h=ff(b);
	if(k==h){
		return 0;
	}
	f[k]=h;
	return 1;
}

bool cmp(node a,node b){
	return a.c<b.c;
}

vector<node> ss;

void init(){
	sl(i,1,n+1){
		f[i]=i;
	}
	return ;
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin>>n>>m;
	init();
	while(m--){
		cin>>a>>b>>c;
		ss.push_back(node(a,b,c));
	}
	sort(ss.begin(),ss.end(),cmp);
	for(auto x:ss){
		if(union_n(x.a,x.b)){
			if(ff(1)==ff(n)){
				cout<<x.c<<endl;
				break;
			}
		}
	}
	return 0;
}

