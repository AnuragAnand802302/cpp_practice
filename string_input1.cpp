#include <bits/stdc++.h>
using namespace std;
int main() {
    string Movie, Year, Director;
    cout << "Enter the movie name: ";
    cin>>Movie;
    cout << "Enter the release year: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, Year);
    cout << "Enter the director's name: ";
    getline(cin, Director);
    cout<<Movie<<" was released in "<<Year<<" and directed by "<<Director<<".";
    return 0;
}