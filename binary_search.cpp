#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	int f; cin>>f;
	int low=0,high=n-1;
	int mid;
	while(low<high)
	{
		if(low==high)
		{
			if(a[low]==f)
				cout << "Found\n";
			else
				cout << "Not Found\n";
			return 0;
		}
		mid=(low+high)/2;
		if(f<a[mid])
		{
			high=mid-1;
		}
		else if(f==a[mid])
		{
			cout << "Found\n";
			return 0;
		}
		else
		{
			low=mid+1;
		}
	}
	if(n==1&&a[0]==f)
	{
		cout << "Found\n";
			return 0;
	}
	cout << "Not Found\n";
}