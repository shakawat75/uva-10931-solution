#include<iostream>
#include<vector>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long c,num,n,bin,i;
    vector<int>a;
    while(scanf("%lld",&num)==1){
        a.clear();n = num;i=1;bin=0;
            if(num==0)
                return 0;
            c = 0;
    while(num){
        if(num%2==1)
            ++c;
            a.push_back(num%2);
        num = num/2;
    }
       cout<<"The parity of ";
       for(int j = a.size()-1; j>=0; j-- )
        cout<<a[j];
       printf(" is %lld (mod 2).\n",c);



    }
    return 0;
}
