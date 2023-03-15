

/* 
    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Institution :   University of Rajshahi
*/


#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0
#define gcd __gcd

void solution(){
    ll t;
    cin >> t;
    
    for(ll i = 1; i <= t; i++){
        ll x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        ll cows;
        cin >> cows;
        ll temp = cows;
        cout << "Case " << i << ":" << endl;
        while(cows--){
            ll x,y;
            cin >> x >> y;
        
            if(x <= x1 || x >= x2){
                cout << "No" << endl;
            }
            else if(y <= y1 || y >= y2){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
        }
    }
}

int main(){
    solution();
    return 0;
}