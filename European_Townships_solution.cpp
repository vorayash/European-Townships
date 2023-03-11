#include <bits/stdc++.h>
using namespace std;

void extractInteger(vector<int> &data)
{
    string str;
    getline(cin, str);

    stringstream ss(str);

    while (ss.good())
    {
        string substr;
        getline(ss, substr, ',');
        data.push_back(stoi(substr));
    }
}

int main(int argc, char const *argv[])
{
    freopen("./Dataset/ET_large.txt", "r", stdin);
    freopen("ET_large_output.txt", "w", stdout);

    int township;
    string temp;

    getline(cin, temp);
    township = stoi(temp);

    for (int i = 0; i < township; i++)
    {
        int house, walls = 0;
        double total_hours, accent_qty, regular_qty;

        getline(cin, temp);
        house = stoi(temp);

        while(house--)
        {
            vector<int> data;

            extractInteger(data);
            walls += (data[1] * 3 + data[2] * 4 + data[3] * 6); // Count total walls
        }

        total_hours = (double)walls * 3;
        accent_qty = (double)walls * 0.5;
        regular_qty = (double)walls * 1.5;

        printf("Case #%d: %.2lf, %.2lf, %.2lf\n", i + 1, total_hours, accent_qty, regular_qty);
    }
    return 0;
}