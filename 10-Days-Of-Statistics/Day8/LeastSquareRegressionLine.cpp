#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

vector<float> RunRegression(vector<int>& v1,vector<int>& v2,float m,float b)
{
    int num_iter = 10000;
    float alpha = 1e-5;
    for(int i=0;i<num_iter;i++)
    {
        int gm = 0,gb = 0;
        for(int j=0;j<5;j++)
        {
            gm += 2*(v2[j] - m*v1[j] - b)*(-v1[j]);
            gb += -2*(v2[j] - m*v1[j] - b);
        }
        m -= alpha*gm;
        b -= alpha*gb;
    }
    vector<float> v{m,b};
    return v;
}
int main() 
{
    vector<int> v1(5),v2(5);
    for(int i=0;i<5;i++)
    {
        cin >> v1[i];
        cin >> v2[i];
    }  
    vector<float> p = RunRegression(v1,v2,0.0,0.0);
    int x = 80;
    cout << fixed << setprecision(3) << p[0]*x + p[1] << endl;
    return 0;
}

