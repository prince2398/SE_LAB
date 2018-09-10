#include <bits/stdc++.h>

using namespace std;
float log2(int n){
    return log(n)/log(2);
}
int length(int N1,int N2){
    return N1 + N2;
}
int vocabulary(int n1,int n2){
    return n1 + n2;
}
int volume(int n,int N){
    return N*log2(n);
}
float dificulty(int n1,int n2,int N1,int N2){
    return (float(n1)/2)*(N2/n2);
}
float effort(float D,float V){
    return D*V;
}
float level(int n1,int n2,int N1,int N2){
    return (2*float(n2))/(n1*N2);
}
float intelligence(float V,float D){
    return V/D;
}
float ptime(float E){
    int f = 60;
    int S = 18;
    return E/(f*S);
}
int main(){
    int n1,n2,N1,N2;
    cout<<"Enter Number of distict operators(n1): ";
    cin>>n1;
    cout<<"Enter Number of distict operands(n2): ";
    cin>>n2;
    cout<<"Enter total Number of occurences of operators: ";
    cin>>N1;
    cout<<"Enter total Number of occurences of operands: ";
    cin>>N2;
    int N = length(N1,N2);
    int n = vocabulary(n1,n2);
    float D = dificulty(n1,n2,N1,N2);
    int V = volume(n,N);
    float e = effort(D,V);
    float l = level(n1,n2,N1,N2);
    float i = intelligence(V,D);
    float t = ptime(e);

    cout<<"Halstead Parameters :";
    cout<<"\nProgram Length: "<<N;
    cout<<"\nVocablary: "<<n;
    cout<<"\nVolume: "<<V;
    cout<<"\nDifficulty: "<<D;
    cout<<"\nEffort: "<<e;
    cout<<"\nLevel: "<<l;
    cout<<"\nIntelligence: "<<i;
    cout<<"\nTime: "<<t;

    cout<<endl;
    return 0;
}
