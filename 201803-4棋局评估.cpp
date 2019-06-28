/*************************************************************************
    > File Name: 201803-4棋局评估.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 19时29分27秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

int n,a[5][5],x;
bool judge(int k)//判断k是否赢了，k=1代表alice，k=2代表bob；
{
	for(int i=1;i<=3;i++)
	{
	  if((a[i][1]==a[i][2])&&(a[i][2]==a[i][3])&&(a[i][3]==k))return true;
	  if((a[1][i]==a[2][i])&&(a[2][i]==a[3][i])&&(a[3][i]==k))return true;
  	}
  	if((a[1][1]==k)&&(a[2][2]==k)&&(a[3][3]==k))return true;
  	if((a[1][3]==k)&&(a[2][2]==k)&&(a[3][1]==k))return true;
	return false;
}
int dfs(int k){
	int t=0;
	for(int i=1;i<=3;i++)
	for(int j=1;j<=3;j++)if(a[i][j]==0)t++;	//计算出棋盘中空格数
	if((k==1)&&judge(2))return -t-1;  //因为bob赢了，要加上一个负号；
	if((k==2)&&judge(1))return t+1;
	if(t==0)return 0;
	int mn=10000000,mx=-1000000;
	for(int i=1;i<=3;i++)
	for(int j=1;j<=3;j++)
	if(a[i][j]==0)//对每一个空格进行模拟；
	{
	  	a[i][j]=k;
	  	if(k==1)mx=max(mx,dfs(2));//这个就是为了要满足最优下棋策略的语句，就是alice会选择下一步最优的解；
	  	if(k==2)mn=min(mn,dfs(1));//同理
	  	a[i][j]=0;//回溯前面的状态；
	}
	if(k==1)return mx;
	if(k==2)return mn;

}

int main(){
	cin>>n;
	while(n--)
	{
		for(int i=1;i<=3;i++)
		for(int j=1;j<=3;j++)cin>>a[i][j];
		x=dfs(1);
		cout<<x<<endl;
	}
	return 0;
}
