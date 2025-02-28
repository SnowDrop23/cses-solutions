
#include<iostream>
#include<vector>
using namespace std;
 // এই কোয়েশ্চান টি observation ছাড়া আর কিছুই নাহ ,
 // every row & column ভালোভাবে অবজার্ভ করলে desired ভ্যালু ইজিলি বের করা যাবে  
 // if anyone observe properly they can find the relations between row and column and then perform the operations

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int y, x;
        cin >> y >> x;

        if(y >= x) //when row is dominant (row >= column)
        {
            long long int a = (y * y) - (x - 1); // when row is even, 
            long long int b = ((y - 1) * (y - 1)) + x; // when row is odd

            if(y % 2 == 0) cout << a << endl;
            else cout << b << endl;
        } 
        else //when column is dominant (column > row) 
        {
            long long int c = ((x - 1)*(x - 1)) + y; // for even row
            long long int d = x * x  - (y - 1); // for odd row

            if(x % 2 == 0) cout << c << endl;
            else cout << d << endl;
        }
    }
}
