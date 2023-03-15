
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

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
        string url;
        cin >> url;
        if(url[4] != 's'){
            url.insert(4,"s");
        }
        cout << "Case " << i << ": " << url << endl;
    }
}

int main(){
    solution();
    return 0;
}
