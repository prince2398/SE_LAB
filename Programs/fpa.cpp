#include <bits/stdc++.h>

using namespace std;

int main(){
    int weights[5][3] = {3,4,6,4,5,7,3,4,6,7,10,15,5,7,10} ;
    int UFP = 0, tdi=0,rating;

    string f[] = {"External Inputs","external Outputs","External Inqueries","internal logical files","external interface files"};
    string c[] = {"low","avearage","high"};
    int input[5][3];

    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 3; ++j){
            cout<<"Enter no. of "<<f[i]<<"("<<c[j]<<") : ";
            cin>>input[i][j];
            UFP += input[i][j]*weights[i][j];
        }
    }
    int val;
    cout<<"Enter values for 14 characteristics on scale of 0-5 : ";
    for (int i = 0; i < 14; ++i){
        cin>>val;
        tdi += val;
    }
    float VAF = (tdi* 0.01) + 0.65;
    float FPC = UFP*VAF;

    cout<<"UFP = "<<UFP<<endl;
    cout<<"TDI = "<<tdi<<endl;
    cout<<"VAF = "<<VAF<<endl;
    cout<<"FPC = "<<FPC<<endl;
    return 0;

}
