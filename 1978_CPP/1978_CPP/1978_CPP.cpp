
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int M, N, sum = 0;
    int min_value=-1;
    bool prime[10000];
    fill_n(prime, 10000, 1);
    prime[0] = false;
    prime[1] = false;//1 is not prime number
    cin >> M;
    cin >> N;
    //find prime number
    for (int i = 2; i <= sqrt(N); i++)//Eratosthenes 
        if (prime[i] == true)
            for (int j = i * 2; j <= N; j += i)// delete i*N
                prime[j] = false;

    for (int i = M; i <= N; i++)
        if (prime[i] == true)
        {
            if (min_value==-1)
                min_value = i;
            sum += i;
        }
    if (min_value==-1)
        cout << "-1";
    else
        cout << sum << '\n' << min_value;
    return 0;
}
