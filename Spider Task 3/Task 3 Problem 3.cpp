#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int b, i, j, flag; 
    int count = 0;
    int a=2;
    cin >> b; 
  

    for (i = a; i <= b; i++) { 
        flag=1;
        for (j = 2; j <= i / 2; ++j) { 
            if (i % j == 0) { 
                flag = 0; 
                break; 
            } 
        } 
        if (flag == 1) 
            count ++;
    } 
    cout<<(count*(count+1)/2);
  
    return 0; 
} 