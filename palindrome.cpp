#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
	string s;
	if(argc>1){
		s = argv[1];
	}else{
		cin>>s;
	}
	int i=0,j=s.length()-1;
	bool flag = true;
	while(i<=j){
		if(s[i] != s[j]){
			flag = false;
			break;
		}
		i++;
		j--;
	}
	if(flag){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 1;
}