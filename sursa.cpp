#include <iostream>
#include <fstream>
using namespace std;
int viz[50], n, a[50][50];

void df(int vf)
{
	int k;
	viz[vf]=1;
	cout<<vf<<" ";
	for(k=1;k<=n;k++)
		if(a[vf][k]==1 && viz[k]==0)
			df(k);
}

void citire(int &n,int a[50][50])
{
    int i,j;
    ifstream f("in.txt");
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
}

int main()
{
	int vf;
	cout<<"vf=";cin>>vf;
    citire(n,a);
    for(int i=1;i<=n;i++)
        viz[i]=0;
	df(vf);
    return 0;
}
