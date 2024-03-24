// #include <iostream>
// using namespace std;
// int main()
// {
//     int s, v;
//     cin >> s >> v;
//     int time = 0;
//     if (s % v != 0) time = 1 + s / v;
//     time += 10;
//     int hour = 0, minute = 0;
//     hour = (8 * 60 - time ) / 60;
//     minute = (8 * 60 - time ) % 60;
//     printf("%02d:%02d", hour, minute); 

// }
#include <iostream>

using namespace std;
int main()
{
    int s, v;
    cin >> s >> v;
    int time = 0;
    if (s % v != 0) time = 1 + s / v;
    else time = s / v ;
    time += 10;
    int hour = 0, minute = 0;
    hour = (8 * 60 - time ) / 60;
    minute = (8 * 60 - time ) % 60;
    if (minute < 0)
    {
        minute += 60;
        hour -= 1;
    }
    if (hour < 0) hour += 24;

    printf("%02d:%02d", hour, minute); 

}