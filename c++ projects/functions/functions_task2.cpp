#include <iostream>
#include <string>
using namespace std;
int main() {
  string player[5];
  int miles[7][5],sum[5],l;

for(int i=0; i<5; i++){
  cout<<"Enter the name of player "<<i+1<<" ";
  cin>>player[i];
}


for(int i=0; i<7; i++){
  cout<<"Enter the number of miles during day "<<i+1<<endl;
  for(int j=0; j<5; j++){
    cout<<"By player "<<j+1<<" ";
    cin>>miles[i][j];
  }
}

for(int i=0; i<5;i++){
  l=0;
  for(int j=0; j<7; j++){
    l=l+miles[j][i];
  }
  sum[i]=l;
}

for(int i=0; i<5;i++){
    cout<<"The total number of miles run by player "<<i+1<<" are: "<<sum[i]<<endl;
    cout<<"The average number of miles per day run by player "<<i+1<<" are: "<<sum[i]/7<<endl;
}


  return 0;
}