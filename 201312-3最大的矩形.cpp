/*************************************************************************
    > File Name: 201312-3最大的矩形.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年07月04日 星期四 21时53分52秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i--)
#define pii pair<int,int>

int d[1005];

int main(){
	int n;cin>>n;
	sl(i,1,n+1){
		cin>>d[i];
	}
	int ret=0,now;
	sl(i,1,n+1){
		int m=n,k=1;
		for(int j=i+1;j<n+1;j++){
			if(d[j]<d[i]){
				m=j-1;break;
			}
		}
		for(int j=i-1;0<j;j--){
			if(d[j]<d[i]){
				k=j+1;
				break;
			}
		}
		now=(m-k+1)*d[i];
		if(ret<now){
			ret=now;
		}
	}
	cout<<ret;
	return 0;
}

