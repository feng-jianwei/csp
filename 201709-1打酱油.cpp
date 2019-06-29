/*************************************************************************
    > File Name: 201709-1打酱油.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月29日 星期六 22时57分28秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

int N;

int main(){
	cin>>N;
	int ret=0;
	for(int i=0;i*10<=N;i=i+5){
		int k=(N-i*10)/10;
		int sum=i/5 *7+k/3*4+k%3;
		if(sum>ret)ret=sum;
	}
	cout<<ret;
	return 0;
}

