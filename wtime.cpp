#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,K,X;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>K;
	    cin>>X;
	    K=K*7;
	    cout<<K-X<<endl;
	}
	return 0;
}

