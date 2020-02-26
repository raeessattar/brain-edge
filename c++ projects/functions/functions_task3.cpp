#include <iostream>
using namespace std;
double temp[12][2],avg_high,avg_low,index_high,index_low,ind_high,ind_low,value;
void getData();
double avgHigh(double [12][2]);
double avgLow(double [12][2]);
double indexHigh(double [12][2]);
double indexLow(double [12][2]);
int main() {
  getData();
  cout<<endl;
  cout<<"The average high temperature is "<<avgHigh(temp)<<endl;
  cout<<"The average low temperature is "<<avgLow(temp)<<endl;
  value=indexHigh(temp);
  cout<<"The high temperature of month "<<ind_high<<" is "<<value<<endl;
  value=indexLow(temp);
  cout<<"The low temperature of month "<<ind_low<<" is "<<value<<endl;
  return 0;
}
void getData(){
  for(int i=0; i<12; i++){
    switch(i){
      case 0:
        cout<<"Enter the temperature of January "<<endl;
        break;
      case 1:
        cout<<"Enter the temperature of February "<<endl;
        break;
      case 2:
        cout<<"Enter the temperature of March "<<endl;
        break;
      case 3:
        cout<<"Enter the temperature of April "<<endl;
        break;
      case 4:
        cout<<"Enter the temperature of May "<<endl;
        break;
      case 5:
        cout<<"Enter the temperature of June "<<endl;
        break;
      case 6:
        cout<<"Enter the temperature of July "<<endl;
        break;
      case 7:
        cout<<"Enter the temperature of August "<<endl;
        break;
      case 8:
        cout<<"Enter the temperature of September "<<endl;
        break;
      case 9:
        cout<<"Enter the temperature of October "<<endl;
        break;
      case 10:
        cout<<"Enter the temperature of November "<<endl;
        break;
      case 11:
        cout<<"Enter the temperature of December "<<endl;
        break;  
    }
    for(int j=0; j<2; j++){
      if(j==0){
        cout<<"Highest: ";
        cin>>temp[i][j];
      }
      else{
        cout<<"Lowest: ";
        cin>>temp[i][j];
      }
    }
  }
}
double avgHigh(double t[12][2]){
  avg_high=0;
  for(int i=0; i<12; i++){
    for(int j=0; j<2; j++){
      avg_high=avg_high+t[i][j];
      j++;
    }
  }
  avg_high=avg_high/12;
  return avg_high;
}
double avgLow(double t[12][2]){
  avg_low=0;
  for(int i=0; i<12; i++){
    for(int j=0; j<2; j++){
      j++;
      avg_low=avg_low+t[i][j];
    }
  }
  avg_low=avg_low/12;
  return avg_low;
}
double indexHigh(double t[12][2]){
  index_high=t[0][0];
  for(int i=0; i<12; i++){
    for(int j=0; j<2; j++){
      if(index_high<=t[i][j]){
        index_high=t[i][j];
        ind_high=i+1;
        j++;
      }
    }
  }
  return index_high;
}
double indexLow(double t[12][2]){
  index_low=t[0][0];
  for(int i=0; i<12; i++){
    for(int j=0; j<2; j++){
      if(index_low>=t[i][j]){
        j++;
        index_low=t[i][j];
        ind_low=i+1;
      }
    }
  }
  return index_low;
}

