#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    int value = power(a,b/2);
    if(b%2==0) return value*value;
    else return value*value*a;
}