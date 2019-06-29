/*************************************************************************
    > File Name: 201712-1最小差值.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月29日 星期六 18时15分13秒
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
	sl(i,0,n){
		cin>>a[i];
	}
	sort(a,a+n);
	int ret=1<<30;
	sl(i,0,n-1){
		if(a[i+1]-a[i]<ret){
			ret=a[i+1]-a[i];
		}
	}
	cout<<ret;
	return 0;
}

