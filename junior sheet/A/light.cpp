// C implementation of Naive method to count all 
// divisors 
#include <bits/stdc++.h> 
using namespace std; 

// function to count the divisors 
long long countDivisors(long long n) 
{ 
	long long cnt = 0; 
	for (long long i = 1; i <= sqrt(n); i++) { 
		if (n % i == 0) { 
			// If divisors are equal, 
			// count only one 
			if (n / i == i) 
				cnt++; 

			else // Otherwise count both 
				cnt = cnt + 2; 
		} 
	} 
	return cnt; 
} 

/* Driver program to test above function */
int main() 
{ 
	long long n = -1;
    
    while(cin >> n)
    {
        if(n == 0) break;

        long long divisors = countDivisors(n);

        if (divisors % 2 == 0)
        {
            cout << "no";
        }
        else cout << "yes";

        cout << endl;
    }

	return 0; 
} 
