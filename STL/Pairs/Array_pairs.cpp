#include<bits/stdc++.h>
using namespace std;

int main(){

   int a[]={1,2,3};
   int b[]={2,3,4};
   pair<int,int> p_ary[3];
   p_ary[0]={1,2};
   p_ary[1]={2,3};
   p_ary[2]={3,4};

   swap(p_ary[0],p_ary[2]);

   for(int i=0;i<3;++i){
      cout<<p_ary[i].first <<" "<<p_ary[i].second<<endl;
   }
}
