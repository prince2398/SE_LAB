#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float values[15][5] = { 0.75,   0.88,   1.00,   1.15,   1.40,
                            1.00,   0.94,   1.00,   1.08,   1.16,
                            0.70,   0.85,   1.00,   1.15,   1.30,
                            1.00,   1.00,   1.00,   1.11,   1.30,
                            1.00,   1.00,   1.00,   1.06,   1.21,
                            1.00,   0.87,   1.00,   1.15,   1.30,
                            1.00,   0.94,   1.00,   1.07,   1.15,
                            1.46,   1.19,   1.00,   0.86,   0.71,
                            1.29,   1.13,   1.00,   0.91,   0.82,
                            1.42,   1.17,   1.00,   0.86,   0.70,
                            1.21,   1.10,   1.00,   0.90,   1.00,
                            1.14,   1.07,   1.00,   0.95,   1.00,
                            1.24,   1.10,   1.00,   0.91,   0.82,
                            1.24,   1.10,   1.00,   0.91,   0.83,
                            1.23,   1.08,   1.00,   1.04,   1.10
                            };

    float kloc;
    int level,ch;
    cout<<"INTERMEDIATE MODEL";
    cout<<"Enter no. of lines of code(KLOC): ";
    cin>>kloc;
    cout<<"Enter level :\n";
    cout<<"1.Very Low 2.Low 3.Nominal 4.High 5.Very High  : ";
    cin>> level;
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

    float eaf =1 ;
    for(int i=0;i<15;i++){
        eaf *= values[i][level-1];
    }

    effort = a[ch-1] * pow(kloc,b[ch-1]) * eaf;
    prod = kloc / effort;
    cout<<"\nEffort calculated from Intermediate Model: "<<effort<<endl;
    cout<<"Productivity calculated from Intermediate Model: "<<prod<<endl;

    return 0;
}
