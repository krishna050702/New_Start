#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        cout<<1<<" "<<n-3<<" "<<1<<" "<<1<<endl;
    }
    return 0;
}






// A. GCD vs LCM

// You are given a positive integer n. You have to find 4 positive integers a,b,c,d such that

// a+b+c+d=n, and
// gcd(a,b)=lcm(c,d).
// If there are several possible answers you can output any of them. It is possible to show that the answer always exists.

// In this problem gcd(a,b) denotes the greatest common divisor of a and b, and lcm(c,d) denotes the least common multiple of c and d.

// Input
// The input consists of multiple test cases. The first line contains a single integer t (1≤t≤104) — the number of test cases. Description of the test cases follows.

// Each test case contains a single line with integer n (4≤n≤109) — the sum of a, b, c, and d.

// Output
// For each test case output 4 positive integers a, b, c, d such that a+b+c+d=n and gcd(a,b)=lcm(c,d).