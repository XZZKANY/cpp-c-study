#include<iostream>
#include <cmath>
const double pi=3.141593;
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << 3 << '\n' << 12 << '\n' << 2 << '\n';
    } else if (T == 4) {
        printf("%.3lf", 166.667);
    } else if (T == 5) {
        cout << 15 << '\n';
    } else if (T == 6) {
       cout << sqrt(36 + 81) << '\n';
    } else if (T == 7) {
        cout << 110 << '\n' << 90 << '\n' << 0 << '\n';
    } else if (T == 8) {
        printf("31.4159\n78.5398\n523.599");
    } else if (T == 9) {
        cout<<22 ;
    } else if (T == 10) {
        cout << 9 << endl;
    } else if (T == 11) {
        cout<<1.0*100/3;
    } else if (T == 12) {
        cout<<(int)('M'-'A')+1<<endl<<(char)(18+'A'-1);
    } else if (T == 13) {
        cout << 16 << endl;
    } else if (T == 14) {
        cout << 50 << endl;
    }
    return 0;
}