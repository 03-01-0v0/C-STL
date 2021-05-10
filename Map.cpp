//
// Created by HP on 5/10/2021.
//
#include <bits/stdc++.h>
using namespace std;


int main()
{
//  Khoi tao map voi key kieu du lieu string va mapped kieu du lieu int
    map<string, int> mp;
//  Chen phan tu vao map
    mp["CLB"] = 1;
    mp["GTLT"] = 2;
    mp.insert({"FITHOU", 3});
//  Lay ra so phan tu cua map
    cout << mp.size() << "\n";
// Duyet map
    for(auto e : mp)
        cout << e.first << " " << e.second << "\n";
    map<string, int> ::iterator it = mp.begin();
// Xoa phan tu theo iterator or key
    mp.erase(it);
    mp.erase("GTLT");
// Kiem tra xem map co rong hay khong
    if(mp.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
// Tim phan tu
    it = mp.find("CLB");
    cout << it -> first << " " << it -> second << "\n";
    it = mp.lower_bound("CLB");
    cout << it -> first << " " << it -> second << "\n";
    it = mp.upper_bound("CLB");
    cout << it -> first << " " << it -> second << "\n";
// Clear map
    mp.clear();

    return 0;
}
