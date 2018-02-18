#include <iostream>
using namespace std;
class Sum
{
int n,k,ar[10000],s=0;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	    }
	}
int sum()
{
    	cout<<"OUTPUT"<<endl;
for(int i=0;i<k;i++)
    {
s=s+ar[i];
}
return s;
}
};
int main()
{
Sum s;
s.get();
cout<<s.sum();
return 0;
}