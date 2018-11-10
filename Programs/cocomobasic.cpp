#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int ch;
    float kloc;
    cout<<" BASIC MODEL";
    cout<<"\nEnter no. of lines of code(KLOC): ";
    cin>>kloc;
    cout<<"Category of System : ";
    if(kloc<50){
        cout<<"Oraganic";
        ch = 1;
    }else if(kloc<300){
        cout<<"Semidetached";
        ch = 2;
    }else{
        cout<<"Embedded";
        ch = 3;
    }
    float a[3] = {2.4,3.0,3.6};
    float b[3] = {1.05,1.12,1.20};
    float effort,prod;

    effort = a[ch-1] * pow(kloc,b[ch-1]);
    prod = kloc / effort;
    cout<<"\nEffort calculated from Basic Model: "<<effort<<endl;
    cout<<"Productivity calculated from Basic Model: "<<prod<<endl;

    return 0;
}
