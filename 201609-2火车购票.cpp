/*************************************************************************
    > File Name: 201609-2火车购票.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月30日 星期日 09时38分46秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

int n;
int d[25];
void init(){
	sl(i,0,21){
		d[i]=5;
	}
	return ;
}

int main(){
	init();
	cin>>n;
	int b;
	while(n--){
		cin>>b;
		int k=0;
		sl(i,1,22){
			if(b==0){
				cout<<endl;break;
			}
			if(d[i]>=b){
				k=1;
			while(b){
				cout<<5*i-d[i]+1<<" ";
				b--;d[i]--;
			}
			}
		}
		if(k)continue;
		sl(i,1,21){
			if(b==0)break;
			while(d[i]&&b){
				cout<<5*i-d[i]+1<<" ";
				b--;d[i]--;
			}
		}
		cout<<endl;
	}
	return 0;
}

