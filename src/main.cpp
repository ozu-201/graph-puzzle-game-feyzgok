//
// Created by fg028327 on 12/14/2023.
//
using  namespace std;
#include <iostream>
#include <vector>
#include <filesystem>

using namespace std;
int main() {

    //scan files into vectors
    //loop vectors and add edge them
    //implying dijktras algorithm

    vector<int> num {1, 2, 3, 4, 5};

    cout << "Initial Vector: ";

    for (const int& i : num) {
        cout << i << "  ";
    }

    // add the integers 6 and 7 to the vector
    num.push_back(6);
    num.push_back(7);

    cout << "\nUpdated Vector: ";

    for (const int& i : num) {
        cout << i << "  ";
    }

    return 0;

}