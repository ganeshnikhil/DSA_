#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareByGrade(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<pair<string, int>> students;

    cout << "Enter student name and grade:\n";
    for (int i = 0; i < n; i++) {
        string name;
        int grade;
        cin >> name >> grade;
        students.push_back({name, grade});
    }

    sort(students.begin(), students.end(), compareByGrade);

    cout << "\nStudents sorted by grade (highest to lowest):\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].first << " " << students[i].second << endl;
    }

    return 0;
}
