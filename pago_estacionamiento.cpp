#include <iostream>

//Made, produced, and cooked by Anuar Jiménez

using namespace std;

/*
Function which works out the total to pay for parking
  1 - 5 hours = $10 each
  6 - 10 hours = $9 each
  10 > = $7
*/

float parkingPayment(int hours)
{
  int cant(0);
  if (hours>=0 && hours<=5)
    cant = hours*10;
  if (hours>=6 && hours<=10)
    cant = hours*9;
  if (hours>=10)
    cant = hours*7;

  return cant;
}

string hasPassed(int expected, int actual){
     return (expected==actual) ? "Passed":"Failed";   
}

void testCases(){

    int length;
    
    cout<<"How many data are you gonna evaluate?\n"<<endl;
    cin>>length;
    
    int hours[length];
    
    for(int i=0; i<length; i++){
       cout<<"Enter the hours: "; 
       cin>>hours[i];
    }
    
    system("cls");
    
  cout<<"\n--------------------------Test cases--------------------------\n"<<endl;
    
    cout<<"Test data"<<"    "<<"Expected result"<<"    "<<"Actual Result"<<"    "<<"Pass or Fail\n"<<endl;
    
    for(int row=0; row<length; row++){
            
       int hour=hours[row];
       float expected = parkingPayment(hour);
       float actual = parkingPayment(hour);
       string result = hasPassed(expected,actual); 
       
       cout<<"     "<<hour<<"             "<<expected<<"               "<<actual<<"             "<<result<<endl;
    }
    
    cout<<endl;
}

int main()
{
  testCases();
  
    system("pause");
    return 0;
}