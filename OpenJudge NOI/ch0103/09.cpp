//
//  08.cpp
//  learning_cpp
//
//  Created by 吴曈 on 2023/2/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.14159;
    double r;
    cin >> r;
    cout << fixed << setprecision(4) << 2 * r << " " << 2 * PI * r << " " << PI * r * r;
    return 0;
}
