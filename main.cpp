//
//  main.cpp
//  algorithm
//
//  Created by Lee Sooming on 2021/11/09.
//

#include <iostream>
using namespace std;
string a;
string revA;
void rev(){
    for (int x=a.length(); x>=0; x--){
        revA[x] =a[x];
    }
    cout <<revA;
}
void sum(){
    int sum=0;
    int a=0;
    for(int x=0; x<revA.length(); x++){
        a = ()(revA[x])+"0";
        sum+=a;
    }
    cout << sum;
    cout<<endl;
}
int main(int argc, const char * argv[]) {
    
    for (int x=0; x<10; x++){
        cin >> a;
        if (a=="0") return 0;
        rev();
        sum();
    }
    return 0;
}
