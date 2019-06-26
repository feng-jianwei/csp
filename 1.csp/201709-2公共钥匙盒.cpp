/*************************************************************************
    > File Name: 201709-2公共钥匙盒.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月26日 星期三 22时10分09秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 1005
struct act{
	int idx,num,t;
};

vector<act> arr;
int ys[maxn];
int rys[maxn];
auto cmp=[](act &a,act &b){
	if(a.t!=b.t)return a.t<b.t;
	if(a.idx!=b.idx)return a.idx>b.idx;
	return a.num<b.num;
};

auto init=[](){
	sl(i,0,maxn){
		ys[i]=i;
		rys[i]=i;
	}
	return ;
};

int main(){
	int n,k;
	cin>>n>>k;
	int w,s,t;
	init();
	while(k--){
		cin>>w>>s>>t;
		int sum=s+t;
		arr.push_back({0,w,s});
		arr.push_back({1,w,sum});
	}
	sort(arr.begin(),arr.end(),cmp);
	for(auto x:arr){
		int cnt=x.num;
		if(x.idx==0){
			int j=rys[cnt];
			ys[j]=0;
			rys[cnt]=0;		
		}else{
			sl(i,1,n+1){
				if(ys[i]==0){
					ys[i]=cnt;
					rys[cnt]=i;
					break ;
				}
			}
		}
	}
	sl(i,1,n+1){
		i==1||cout<<" ";
		cout<<ys[i];
	}
	return 0;
}


