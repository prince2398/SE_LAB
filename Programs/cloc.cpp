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
	int count=0;
	while(getline(file,line)){
		bool isValid = true;
		if(line.length() == 0 ){
			isValid = false;
			continue;
		}
		for(int i=0;i<line.length()-1;i++){
			if(	(line[i] == '/' && line[i+1] == '/') || 
   				(line[i] == '/' && line[i+1] == '*') || 
   				(line[i] == '*' && line[i+1] == '/')	) {
					isValid = false;
					break;
			}
		}
		if(isValid){
			count++;
		}	
	}
	cout<<"The \""<<filename<<"\" file contains "<<count<<" lines of code."<<endl;
	return 0;
}
