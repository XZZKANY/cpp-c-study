// def min_days_to_test_hypothesis(n, initial_position, desired_position):
//     add_cat = remove_cat = move_cat = 0

//     for i in range(n):
//         if initial_position[i] == '0' and desired_position[i] == '1':
//             add_cat += 1
//         elif initial_position[i] == '1' and desired_position[i] == '0':
//             remove_cat += 1
//         elif initial_position[i] == '1' and desired_position[i] == '1':
//             move_cat += 1

//     return max(add_cat, remove_cat, move_cat)

// # Input reading
// t = int(input())
// for _ in range(t):
//     n = int(input())
//     initial_position = input()
//     desired_position = input()

//     # Output
//     print(min_days_to_test_hypothesis(n, initial_position, desired_position))
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int min_days_to_test_hypothesis(int n, const string& initial_position, const string& desired_position) {
//     int add_cat = 0, remove_cat = 0, move_cat = 0;

//     for (int i = 0; i < n; ++i) {
//         if (initial_position[i] == '0' && desired_position[i] == '1') {
//             add_cat++;
//         } else if (initial_position[i] == '1' && desired_position[i] == '0') {
//             remove_cat++;
//         } else if (initial_position[i] == '1' && desired_position[i] == '1') {
//             move_cat++;
//         }
//     }

//     return max(move_cat, max(remove_cat - move_cat, add_cat - move_cat));
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string initial_position, desired_position;
//         cin >> initial_position >> desired_position;

//         int result = min_days_to_test_hypothesis(n, initial_position, desired_position);
//         cout << result << endl;
//     }

//     return 0;
//
#include <iostream>

using namespace std;
 
int main()
{
   for (int i = 0; i < 10 ;i ++)
   {
     cout << i << ' ' ;
   }
}