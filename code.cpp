#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
          //prince
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i){
			cin>>a[i];
		}
		int res[n];
		for (int i = n-1; i >=0; --i){
			res[i] = -1;
			for (int j = i+1; j < n; ++j){
				if (a[j] > a[i]){ res[i] = a[j]; break;
				}
			}
		}
		for (int i = 0; i < n; ++i){
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
