#include <iostream>
#include <string>
using namespace std;

int display();
void getData(int);
void conversion();
void displayResults();

int b;
int hour,min;
string t;

int main() {

  b=display();
  getData(b);   
  
  conversion();

  displayResults();
  
  return 0;
}

int display(){
  int c;
  cout<<"Enter your choice: "<<endl;
  cout<<"1: 24-hour notation to 12-hour notation"<<endl;
  cout<<"2: 12-hour notation to 24-hour notation"<<endl;
  cin>>c;

  return c;
}

void getData(int c){
  switch(c){
    case 1:
      cout<<"Enter the time in 24-hour notation: "<<endl;
      cout<<"hour ";
      cin>>hour;
      cout<<"minute ";
      cin>>min;
      t="bb";
      cout<<endl;
      break;
    case 2:
      cout<<"Enter the time in 12-hour notation: ";
      cout<<"hour ";
      cin>>hour;
      cout<<"minute ";
      cin>>min;
      cout<<"enter AM or PM ";
      cin>>t;
      cout<<endl;
      break;
  }

}

void conversion(){
  if(b==1){
    if(hour<13){
      t="am";
    }
    if else(hour>13){
      hour=hour-12;
      t="pm";
    }
    
  }
  if else(b==2){
    if(t[0]==b){
      hour=hour+12;
    }
  }
}

void displayResults(){
if(b==1){
  cout<<"The time in 12-hour format is as follows: "<<endl;
  cout<<hour<<" : "<<min<<" : "<<t;
}
if else(b==2){
  cout<<"The time in 24-hour format is as follows: "<<endl;
  cout<<hour<<" : "<<min<<;
}
}