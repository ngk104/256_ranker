#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip> //fixed << setprecision(10)

#include <sstream> // stringstream
#include <bitset>  // bitset<N>

using namespace std;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

typedef long long ll;
typedef vector<int> vi;

int main(){
    ll message_id;
    cin >> message_id; //175928847299117063

    stringstream ss;
    ss << bitset<64>(message_id);
    string message_id_bin = ss.str();
    cout << message_id_bin << endl;

    string timestamp_bin;
    for(int i = 0; i < 42; i++){
        timestamp_bin[i] = message_id_bin[i];
    }
    for(int i = 0; i < 42; i++){
        cout << timestamp_bin[i];
    }
    puts("");

    return 0;
}