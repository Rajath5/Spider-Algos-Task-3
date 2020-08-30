#include <iostream>

using namespace std;

int calculateRepetitions(string);

int main() 
{ 
    string number;
    cin>>number;
    cout << calculateRepetitions(number); 
    return 0; 
} 

int calculateRepetitions(string number) 
{ 
 
    int sum = 0, count = 0; 
    while (number.length() > 1) 
    { 
        sum = 0; 
  
     
        for (int i = 0; i < number.length(); i++) 
        {
          sum += ( number[ i ] - '0' ) ; 
        }
     
        number = to_string(sum) ; 
        count++; 
    } 
  
    return count; 
} 