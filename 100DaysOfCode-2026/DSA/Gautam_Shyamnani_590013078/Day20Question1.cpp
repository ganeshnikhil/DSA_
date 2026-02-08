#include <iostream>
#include <vector>
#include <algorithm>

int main() {
   
    std::vector<std::pair<std::string, int>> students = {
        {"Jatin", 88}, {"Sarah", 95}, {"Mona", 82}, {"Aadi", 95}
    };

    std::sort(students.begin(), students.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
    for (const auto& student : students) {
        std::cout << "(" << student.first << ", " << student.second << ")\n";
    }

    return 0;
}
