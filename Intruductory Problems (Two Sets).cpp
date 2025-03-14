

#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ll n, curSum = 0, count = 0;
	cin >> n;
	vector<int>aa;
	vector<int>bb;

	ll sum = (n*(n+1))/2;
	ll sum2 = sum/2;
	if(sum % 2 != 0) 
	{
		cout << "NO" << endl;
		return 0;
	}
	else
	{
		int start = 1, end = n;
        
		while(start <= end)
		{
			if(curSum + end <= sum2)
			{
				aa.push_back(end);
				curSum += end;
				count++;
				end--;
			}

			if(curSum + start <= sum2)
			{
				aa.push_back(start);
				curSum += start;
				count++;
				start++;
			}

			if(curSum == sum2) break;
		}

		//remaining elements will store in this vector
		while(start <= end)
		{
			bb.push_back(start);
			start++;
		}
	}
	cout << "YES" << endl;
	cout << (n-count) << endl;
	for(int i : bb) cout << i << " ";
	cout << endl;
	cout << count << endl;
	for(int i : aa) cout << i << " ";
	
	
} 
