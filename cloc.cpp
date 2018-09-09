#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char *argv[]){
	string filename ;
	if(argc>1){
		filename = argv[1];
	}else{
		filename = "code.cpp";
	}
	ifstream file(filename,ios::in);
	string line;
	int i=0;
	while(getline(file,line)){
		int flag=0;
		if(line[0] == '/' && line[1] == '/'){
			continue;
		}
		int space = 0;
		for(auto a:line){
			if(a != ' '){
				space = 1 ;
				break;
			}
		}
		if(space == 0) continue;	
		i++;	
	}
	cout<<"The \""<<filename<<"\" file contains "<<i<<" lines of code."<<endl;
	return 0;
}
