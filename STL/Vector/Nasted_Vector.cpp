#include<bits/stdc++.h>
using namespace std;

 void vector_print(vector<int> &v){
   cout<<"size"<<" "<<v.size()<< endl;
    for(int i=0;i<v.size();++i){
      cout<<v[i]<<" ";
    }
    cout<<endl;
  } 

int main(){

  int N;
  cin >> N;

  //main vector
  vector< vector<int> > v;
  for(int i = 0; i < N ; ++i){
   int n;
   cin>> n;

  //nasted vector
   vector<int> temp;
   for(int j = 0;j<n;++j){
      int x;
      cin>>x;
      temp.push_back(x);
   }

   v.push_back(temp);
  }
  //v[0].push_back(10);
  
  for(int i =0; i<v.size();++i){
   vector_print(v[i]);
  }

 }
