#include<iostream>
using namespace std;

    int bitwiseComplement(int n) {
        int m=n;
        int mask = 0;

        if(n==0){
            return 1;
        }
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;
        }
        int ans=(~n)&mask;
        return ans;
    }


int main(){
    int m;
    cout<<"Enter n: ";
    cin>>m;
    cout<<"Base 10  Complement of n is:  "<<bitwiseComplement(m);
    return 0;
}