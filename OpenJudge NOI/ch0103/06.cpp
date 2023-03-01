//
//  06.cpp
//  learning_cpp
//
//  Created by 吴曈 on 2023/2/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << fixed << setprecision(3) << (float)b / (float)a * 100 << "%";
    return 0;
}
