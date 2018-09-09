#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int ch; // choice for system 1. organic 2.semidetached 3. embedded
    float kloc;
    cout<<" BASIC MODEL";
    cout<<"\nEnter Category of System : \n";
    cout<<"1. Organic 2. Semidetached 3. Embedded : ";
    cin>>ch;
    cout<<"Enter no. of lines of code(KLOC): ";
    cin>>kloc;
    float a[3] = {2.4,3.0,3.6};
    float b[3] = {1.05,1.12,1.20};
    float effort,prod;

    effort = a[ch-1] * pow(kloc,b[ch-1]);
    prod = kloc / effort;
    cout<<"Effort calculated from Basic Model: "<<effort<<endl;
    cout<<"Productivity calculated from Basic Model: "<<prod<<endl;

    return 0;
}
