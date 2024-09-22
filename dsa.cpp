#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter value of n" << endl;
    cin >> n ;
    int digit = 0;
    int ans = 0;
   
    while(n!=0){
        digit = n % 10 ;
        
        
            ans = (ans * 10) + digit ;
            n = n/10;
        if((ans>2147483647/10) || (ans<0.0000000002222/10)){
            cout << 0;
        }
        }
        cout << ans ;
        if(0){
            cout << 0;
        }
        return 0;
}
