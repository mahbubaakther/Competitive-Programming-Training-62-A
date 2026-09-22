#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, pair<string, double> > student_data;
    student_data.first =35;
student_data.second.first="Mahbuba"; 
student_data.second.second= 3.75;

    
    cout << "ID: " << student_data.first << "\n";
    cout << "Name: " << student_data.second.first << "\n";
    cout << "CGPA: " << student_data.second.second << "\n";
    
    return 0;
}
