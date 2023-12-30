#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string animals[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
    vector<pair<string, int>> years;
    int maplen = 1;
    years.push_back({"Bessie", 0});
    for (int i = 0; i < n; i++) {
        string cowa, born, in, time, year, yr, from, cowb;
        cin >> cowa >> born >> in >> time >> year >> yr >> from >> cowb;
        int yearNum = distance(animals, find(animals, animals + 12, yr));
        int yearNumB = 0;
        for (int j = 0; j < maplen; ++j) {
            if (years[j].first == cowb) {
                yearNumB = years[j].second;
                break;
            }
        }
        pair<string, int> newcow;
        if (time == "previous") {
            newcow.second = yearNum - 12 + yearNumB;
        }
        newcow.first = cowa;
        years.push_back(newcow);
        maplen++;
    }
    int ans = 0;
    for (int i = 0; i < maplen; i++) {
        if (years[i].first == "Elsie") {
            ans = abs(years[i].second);
        }
    }
    cout << ans << endl;
}