#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   int C=0, i,acm=0; string F; 
   cin >> C; cin >> F;
    
    for(i=0; i<C; i++){
       
        if(F[i]=='P')
           acm = acm + 2;
        else if(F[i]=='C')
           acm = acm + 2; 
        else if(F[i]=='A')
           acm = acm + 1;
        else
          acm = acm + 0;  
    }
 
   cout << acm << endl;
      
   return 0;
}
