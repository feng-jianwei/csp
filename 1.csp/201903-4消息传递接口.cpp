/*************************************************************************
    > File Name: 201903-4消息传递接口.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月26日 星期三 23时17分16秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

int T,n;

struct node{
	char c;
	int cnt;
	node(string &s){
		c=s[0];
		int k=1,temp=0;
		while(s[k]!=' '){
			temp=(temp<<3)+(temp<<1)+s[k++]-'0';
		}
	}
};
queue<node> q;
vector<queue<node> > arr;

int cnt;

int main(){
	cin>>T>>n;
	string str;
	stringstream sss;
	getchar();
	while(T--){
		sl(i,0,n){
			getline(cin,str);
			sss<<str;
			while(sss>>str){
				q.push(node(str));
			}
			arr.push_back(q);
			while(!q.empty())q.pop();
			sss.clear();
		}
		while(1){
			cnt=0;
			for(int i=0;i<arr.size();i++){
				if(arr[i].empty())continue;
				node k=arr[i].front();
				int l=k.cnt;
				node d=arr[l].front();
				if((k.c!=d.c)&&(d.cnt==i)){
					cnt+=1;
					arr[i].pop();
					arr[l].pop();
				}
			}
			if(cnt==0)break;
		}
		for(int i=0;i<arr.size();i++){
			if(arr[i].empty())continue;
			puts("1");
			goto loop;
		}
		puts("0");
loop:	while(arr.size())arr.pop_back();
		sss.str("");
	}
	return 0;
}


