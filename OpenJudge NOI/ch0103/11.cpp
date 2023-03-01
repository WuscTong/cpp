//
//  11.cpp
//  learning_cpp
//
//  Created by 吴曈 on 2023/2/25.
//

#include<cstdio>
using namespace std;
int main()
{
    double a, b, r;
    int k;
    scanf("%lf%lf", &a, &b);
    k = a / b;
    r = a - k * b;
    printf("%g", r);
    
    return 0;
}
