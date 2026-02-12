#include <bits/stdc++.h>
using namespace std;
class Student {
private:
    static int next_id; // Declaration of the shared counter
    int student_id;     // Unique ID for this specific student
    string Name;
    string Branch;
public:
    Student(string n, string b) : Name(n), Branch(b) {
        // Assign the current counter value and then increment it
        student_id = next_id++;
    }
    void display_record() const {
        cout << "ID: [" << student_id << "] | Name: " << Name 
             << " | Branch: " << Branch << endl;
    }
    void setBranch(string new_branch) {
        this->Branch = new_branch;
    }
    int getID() const {
        return student_id;
    }
    string getname(){
        return Name;
    }
};
// Initialize the static member outside the class
int Student::next_id = 1001; 
int main() {
    int n;
    cout << "Enter the number of friends to register: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // This vector is your "Independent Register"
    vector<Student> register_book;
    for (int i = 0; i < n; i++) {
        string temp_name, temp_branch;
        cout << "\nEnter name for friend " << i + 1 << ": ";
        getline(cin, temp_name);
        cout << "Enter branch: ";
        getline(cin, temp_branch);
        // Create object and store it directly in the register
        register_book.emplace_back(temp_name, temp_branch);
    }
    cout << "\n--- FINAL REGISTER ---\n";
    for (const auto& friend_obj : register_book) {
        friend_obj.display_record();
    }
    int target_id;
    cout << "Enter the ID of the friend whose branch you want to change: ";
    cin >> target_id;
    cin.ignore();
    bool found = false;
    for (auto &s : register_book) { // Use a reference (&) to modify the actual object
        if (s.getID() == target_id) {
            string new_b;
            cout << "Enter new branch for " << s.getname() << ": ";
            getline(cin, new_b);      
            s.setBranch(new_b); // The change happens here!
            found = true;
            break; 
        }
    }
    if (!found) cout << "ID not found in register.\n";
    return 0;
}