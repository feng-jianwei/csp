/*************************************************************************
    > File Name: 2017031分蛋糕.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月30日 星期日 18时02分52秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 1005
int n,k;
int d[maxn];


int main(){
	cin>>n>>k;
	int cnt=0;
	int ret=0;
	sl(i,0,n){
		cin>>d[i];
		cnt+=d[i];
		if(cnt<k)continue;
		ret++;
		cnt=0;
	}
	if(cnt>0)ret++;
	cout<<ret;
	return 0;
}

