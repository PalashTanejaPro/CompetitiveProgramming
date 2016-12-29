#include <bits/stdc++.h>

using namespace std;
int LSbit(int x){
    return (x&(-x));
}
class FenwickTree
{
private:vector<int> ft;
public:
    FenwickTree(int n){ 
        ft.assign(n+1,0); //initialize n+1 zeros
    }

    int rsq(int b){
        int sum = 0;
        for(;b;b-=LSbit(b)){
            sum+=ft[b];
        }
        return sum;
    }
    int rsq(int a,int b){
        return rsq(b)-((a==1)?0:rsq(a-1));
    }
    void update(int a,int b){
        for(;k<ft.size();k+=LSbit(k)){
            ft[k]+=b;
        }
    }
};
int main(){
    
}
