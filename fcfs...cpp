#include<iostream>
using namespace std;
int main()
{
	int pn,i,next=0;
	cout<<"enter number of processes";
	cin>>pn;
	int p[pn],at[pn],ct[pn],tr[pn],wt[pn];
	float avgtr=0.0,avgwt=0.0;
	cout<<"enter burst time for easch process";
	for(i=0;i<pn;i++)
	{
		cin>>p[i];
		at[i]=0;
	}
	cout<<"completion time="<<endl;
		for(i=0;i<pn;i++)
		{
			next=next+p[i];
			ct[i]=next;
			cout<<"ct"<<i<<"="<<ct[i]<<endl;
		}
			cout<<"turn around time="<<endl;
				for(i=0;i<pn;i++)
				{
					tr[i]=ct[i]-at[i];
					avgtr=avgtr+tr[i];
						cout<<"tr"<<i<<"="<<tr[i]<<endl;
				}
				cout<<"average turn around time="<<avgtr/pn<<endl;
				cout<<"waiting  time="<<endl;
				for(i=0;i<pn;i++)
				{
					wt[i]=tr[i]-p[i];
					avgwt=avgwt+wt[i];
					cout<<"wt"<<i<<"="<<wt[i]<<endl;
				}
				cout<<"average waiting time="<<avgwt/pn<<endl;
				
}
