/*************************************************************************
    > File Name: 201609-1最大波动.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月30日 星期日 09时29分21秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

int n;
int a[1005];

int main(){
	cin>>n;
	int cnt=0;
	sl(i,0,n){
		cin>>a[i];
	}
	sl(i,0,n-1){
		if(cnt<abs(a[i+1]-a[i])){
			cnt=abs(a[i]-a[i+1]);
		}
	}
	cout<<cnt;
	return 0;
}

