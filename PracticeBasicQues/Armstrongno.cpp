// this is incorrect code try to correct them 


// 153 is a armstrong number
// when we do cube of each digit of a no. after sum of the no return same no

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10; // 3          // 5 //1
        sum += pow(lastdigit, 3);
    //    n = n / 10; // 15 
       lastdigit++;         // 1 // 0
         n = n / 10; // 15 
    }
    if (sum == originaln)
    {
        cout << "YES";
    }
    else
    {
        cout << "no";
    }
}




// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n ";
//     cin >> n;

//     int sum = 0;
//     int originaln = n;
//     while (n > 0)
//     {
//         int lastdigit = n % 10; // 3          // 5 //1
//         sum += pow(lastdigit, 3);
//         n=n / 10; // 15          // 1 // 0
//     }
//     if (sum == originaln)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "no";
//     }

// }