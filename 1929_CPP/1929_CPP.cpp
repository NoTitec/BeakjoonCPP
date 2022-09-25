// 1929_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int M, N;
    bool prime[1000000];
    fill_n(prime, 1000000, 1);
    prime[0] = false;
    prime[1] = false;//1 is not prime number
    cin >> M;//start 
    cin >> N;//end
    //find prime number
    for (int i = 2; i <= sqrt(N); i++) {//Eratosthenes 
        if (prime[i] == true) {//index i 위치 소수면
            for (int j = i * 2; j <= N; j += i)// delete i*N
                prime[j] = false;
        }
    }
    for (int i = M; i <= N; i++) {
        if (prime[i] == true)
            cout << i << '\n';
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
