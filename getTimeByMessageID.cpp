#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip> //fixed << setprecision(10)

#include <sstream> // std::stringstream
#include <bitset>  // std::bitset<N>
#include <stdlib.h>
#include <ctime>

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

    char timestamp_bin[42];
    for(int i = 0; i < 42; i++){
        timestamp_bin[i] = message_id_bin[i];
    }
    cout << timestamp_bin << endl;
    
    long timestamp = strtol(timestamp_bin, NULL, 2);
    cout << timestamp << endl;

    ll timestamp_ms = ll(timestamp + 1420070400000);
    cout << timestamp_ms << endl;

    time_t previous_time = 1462015105;
    tm *tm_previous = gmtime(&previous_time);
	cout << asctime(tm_previous);

    return 0;
}