//
//  03.cpp
//  learning_cpp
//
//  Created by 吴曈 on 2023/2/21.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << right << setw(8) << a << " ";
    cout << right << setw(8) << b << " ";
    cout << right << setw(8) << c;
    return 0;
}
