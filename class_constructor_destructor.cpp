#include <bits/stdc++.h>
using namespace std;

class nitwit {
    string name;
    int age;
    vector<int> data;   

public:
    nitwit(string Name, int Age) : name(Name), age(Age) {}

    void setdata(int s) {
        data.resize(s);
    }

    void setelements(int idx, int id) {
        if (idx >= 0 && idx < data.size()) {
            data[idx] = id;
        }
    }

    int showid(int idx) const {
        if (idx >= 0 && idx < data.size()) {
            return data[idx];
        }
        return -1; 
    }
};

int main() {
    nitwit n1("Anant Yadav", 24);
    int id, n;

    cout << "Enter the amount of ids:\n";
    cin >> n;

    n1.setdata(n);

    cout << "Enter the ids:\n";
    for (int i = 0; i < n; i++) {
        cin >> id;
        n1.setelements(i, id);
    }

    cout << "The ids in a row are:\n";
    for (int i = 0; i < n; i++) {
        cout << n1.showid(i) << " ";
    }
}
