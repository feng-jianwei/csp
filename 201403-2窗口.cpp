/*************************************************************************
    > File Name: 201403-2窗口.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年07月04日 星期四 20时08分08秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i--)
#define pii pair<int,int>

struct node{
	int x1,y1,x2,y2;	
};

vector<node> ss;

int d[2600][1440];

int main(){
	int n,m;cin>>n>>m;
	int x1,y1,x2,y2;
	int x,y;
	sl(i,1,n+1){
		cin>>x1>>y1>>x2>>y2;
		sl(p,x1,x2+1){
			sl(q,y1,y2+1){
				d[p][q]=i;
			}
		}
		ss.push_back({x1,y1,x2,y2});
	}
	sl(i,0,m){
		cin>>x>>y;
		int m=d[x][y];
		if(m==0){
			cout<<"IGNORED"<<endl;
			continue;
		}else{
			cout<<m<<endl;
			node k=ss[m-1];
			sl(p,k.x1,k.x2+1){
				sl(q,k.y1,k.y2+1){
					d[p][q]=m;
				}
			}
		}
	}
	return 0;
}

