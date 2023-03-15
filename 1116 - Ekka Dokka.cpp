

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
        ll w;
        cin >> w;
        
        if(w % 2 == 1){
            cout << "Case " << i << ": Impossible" << endl;
        }
        else{
            bool z = false;
            ll temp,j;
            for(j = 2; j <= w; j+=2){
                temp = w / j;
                if(temp * j == w){
                    if(temp % 2 == 1){
                        z = true;
                        break;
                    }
                }
            }
            if(z){
                cout << "Case " << i << ": " << temp << " " << j << endl;
            }
            else{
                cout << "Case " << i << ": Impossible" << endl;
            }
        }
    }
}

int main(){
    solution();
    return 0;
}