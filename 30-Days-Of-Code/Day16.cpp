#include <map>                                  //~D4V1NC1_C0D3
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    string S;
    cin >> S;
    int n;
    try {
    n=stoi(S);
    cout<<n<<endl;
    } 
    catch (exception e) {
    cout<<"Bad String";
    }
    return 0;
}


