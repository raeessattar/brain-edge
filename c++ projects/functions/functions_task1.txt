#include <iostream>
using namespace std;

char seat[14][7],column,c;
int number,clas,r,n;

void status();
void first_class();
void business_class();
void economy_class();

int main() {

  for(int i=0; i<14; i++){
    for(int j=0; j<7; j++){
      seat[i][j]='*';
    }
  }

  status();


jump:
  cout<<"Welcome to the King Fisher Airlines"<<endl; 
  cout<<"Please enter the desired class:"<<endl;
  cout<<" 1: First Class"<<endl;
  cout<<" 2: Business Class"<<endl;
  cout<<" 3: Economy Class"<<endl;
  cout<<" 4: For Status"<<endl;
  cin>>clas;

  switch(clas){
    case 1:
      first_class();
      break;
    case 2:
      business_class();
      break;
    case 3:
      economy_class();
      break;
    default:
      status();
      break;
  }
  cout<<"If you want to make another booking then press 'y'"<<endl;
  cin>>c;
  if(c=='y'){
    goto jump;
  }

    return 0;
}

void status(){
  column='A';
  number=1;

  for(int i=0; i<14; i++){
    if(i!=0){
      cout<<endl;
      cout<<"Row "<<number;
      number++;
    }
    for(int j=0; j<6; j++){
      if(i==0){
        if(j==0){
          cout<<"          "<<column;
        }
        else{
          column++;
          cout<<"     "<<column;
        }
      }
      else{
        if(number>10&&j==0){
          cout<<"    "<<seat[i][j];
        }
        else{
          cout<<"     "<<seat[i][j];
        }
        
      }
    }
    
  }
  cout<<endl;
}

void first_class(){
  column='A';
  number=1;

  for(int i=0; i<3; i++){
    if(i!=0){
      cout<<endl;
      cout<<"Row "<<number;
      number++;
    }
    for(int j=0; j<6; j++){
      if(i==0){
        if(j==0){
          cout<<"          "<<column;
        }
        else{
          column++;
          cout<<"     "<<column;
        }
      }
      else{
        if(number>10&&j==0){
          cout<<"    "<<seat[i][j];
        }
        else{
          cout<<"     "<<seat[i][j];
        }
        
      }
    }
    
  }
  cout<<endl;
  cout<<"Enter the column name: ";
  cin>>c;
  cout<<"Enter the row name: ";
  cin>>r;

  switch(c){
    case 'A':
      n=0;
      break;
    case 'B':
      n=1;
      break;
    case 'C':
      n=2;
      break;
    case 'D':
      n=3;
      break;
    case 'E':
      n=4;
      break;
    default:
      n=4;
      break;
  }

  if(seat[r][n]=='*'){
    seat[r][n]='X';
    cout<<"Your seat is booked!"<<endl;
    cout<<"Thanks for your trust"<<endl;
    
  }
  else{
    cout<<"Sorry! The seat is already booked."<<endl;
  }


}

void business_class(){
  
  column='A';
  number=1;

  for(int i=0; i<8; i++){
    if(i!=0){
      cout<<endl;
      cout<<"Row "<<number;
      number++;
    }
    for(int j=0; j<6; j++){
      if(i==0){
        if(j==0){
          cout<<"          "<<column;
        }
        else{
          column++;
          cout<<"     "<<column;
        }
      }
      else{
        if(i>2){
        if(number>10&&j==0){
          
          cout<<"    "<<seat[i][j];
        }
        else{
        
          cout<<"     "<<seat[i][j];
        }
            
          }
        
      }
    }
    
  }
  cout<<endl;
  cout<<"Enter the column name: ";
  cin>>c;
  cout<<"Enter the row name: ";
  cin>>r;

  switch(c){
    case 'A':
      n=0;
      break;
    case 'B':
      n=1;
      break;
    case 'C':
      n=2;
      break;
    case 'D':
      n=3;
      break;
    case 'E':
      n=4;
      break;
    default:
      n=4;
      break;
  }

  if(seat[r][n]=='*'){
    seat[r][n]='X';
    cout<<"Your seat is booked!"<<endl;
    cout<<"Thanks for your trust"<<endl;
    
  }
  else{
  cout<<"Sorry! The seat is already booked."<<endl;
  }


}

void economy_class(){
  
  column='A';
  number=1;

  for(int i=0; i<14; i++){
    if(i!=0){
      cout<<endl;
      cout<<"Row "<<number;
      number++;
    }
    for(int j=0; j<6; j++){
      if(i==0){
        if(j==0){
          cout<<"          "<<column;
        }
        else{
          column++;
          cout<<"     "<<column;
        }
      }
      else{
        if(i>7){
        if(number>10&&j==0){
          
          cout<<"    "<<seat[i][j];
        }
        else{
        
          cout<<"     "<<seat[i][j];
        }
            
          }
        
      }
    }
    
  }
  cout<<endl;
  cout<<"Enter the column name: ";
  cin>>c;
  cout<<"Enter the row name: ";
  cin>>r;

  switch(c){
    case 'A':
      n=0;
      break;
    case 'B':
      n=1;
      break;
    case 'C':
      n=2;
      break;
    case 'D':
      n=3;
      break;
    case 'E':
      n=4;
      break;
    default:
      n=4;
      break;
  }

  if(seat[r][n]=='*'){
    seat[r][n]='X';
    cout<<"Your seat is booked!"<<endl;
    cout<<"Thanks for your trust"<<endl;
  }
  else{
    cout<<"Sorry! The seat is already booked."<<endl;
  }


}