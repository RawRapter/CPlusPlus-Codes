/*
Defense Kingdom
*/

#include<bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
    vector<int> x;
    x.push_back(0);
    for (auto var : position)
    {
        x.push_back(var.first);
    }
    x.push_back(W + 1);
    sort(x.begin(), x.end());
    int x_max = 0;
    for (int i = 0; i < x.size() - 1; i++)
    {
        x_max = max(x_max, abs(x[i] - x[i + 1]));
    }
 
    vector<int> y;
    y.push_back(0);
    for (auto var : position)
    {
        y.push_back(var.second);
    }
    y.push_back(H + 1);
    sort(y.begin(), y.end());
    int y_max = 0;
    for (int i = 0; i < y.size() - 1; i++)
    {
        y_max = max(y_max, abs(y[i] - y[i + 1]));
    }
    return (x_max - 1) * (y_max - 1);
    
}

int main(){
    int w,h,y;
    vector<pair<int,int>> p = {{3,8},{11,2},{8,6}};
    cin>>w>>h;
    y = defkin(w,h,p);
    cout<<y;
}