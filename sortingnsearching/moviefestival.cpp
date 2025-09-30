#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ll n, count = 0, currentend = 0;
    cin>>n;
    vector<pair<ll, ll>> movies(n);
    for(ll i =0; i<n; i++){
        cin>>movies[i].first>>movies[i].second;
    }
    sort(movies.begin(), movies.end(), [](auto& p1, auto& p2){
        return p1.second<p2.second;
    });
    for(auto& movie: movies){
        ll start = movie.first;
        ll end = movie.second;
        if(start>=currentend){
            count++;
            currentend = end;
        }
    }
    cout<<count<<endl;
}
