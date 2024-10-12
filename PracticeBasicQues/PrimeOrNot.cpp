// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter a number ";
//   cin>>n;

// bool flag=true; // yes prime
//   for(int i=2; i<n; i++)
//   {
//     if(n%i==0)
//     {
//         flag=false;
//             break;
//     }
//   }
//   if(flag==true)
//   cout<<"prime no";
// else
// cout<<"not a prime no";

// }


// no. is prime or not if prime print yes prime no else print no not a prime no.

// use boolean check mark

#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter a no to check";
    cin>>n;

    bool flag=true;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
        flag=false;
        break;
    }
    }
    if(flag==true)
    {
        cout<<"prime no ";
    }
    else
    cout<<"not a prime no";
 }
