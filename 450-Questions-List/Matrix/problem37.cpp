// Question 37 => Sprial traversal of a Matrix

#include<bits/stdc++.h>
using namespace std;

void spiralOreder(const vector<vector<int>> &a){
    int t, b, l, r, dir;
    t = 0;
    b = a.size() - 1;
    l = 0;
    r = a.size() - 1;
    dir = 0;
    int i;
    vector<int> ans;

    while(t<=b && l<=r){
        if(dir == 0){
            for(i=l; i<=r; i++)
                ans.push_back(a[t][i]);
            t++;
        }
        else if(dir == 1){
            for(i=t; i<=b; i++)
                ans.push_back(a[i][r]);
            r--;
        }
        else if(dir == 2){
            for(i=r; i>=l; i--)
                ans.push_back(a[b][i]);
            b--;
        }
        else if(dir == 3){
            for(i=b; i>=t; i--)
                ans.push_back(a[i][l]);
            l++;
        }
        dir = (dir + 1) % 4;
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
}

int main(){
    vector<vector<int> > a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };

    spiralOreder(a);
    
}