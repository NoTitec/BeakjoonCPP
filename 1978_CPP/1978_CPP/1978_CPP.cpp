
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
    cin >> M;//start 
    cin >> N;//end
    //find prime number
    for (int i = 2; i <= sqrt(N); i++)//Eratosthenes 
        if (prime[i] == true)//index i 위치 소수면
            for (int j = i * 2; j <= N; j += i)// delete i*N
                prime[j] = false;
    //sum all primenumber
    for (int i = M; i <= N; i++)
        if (prime[i] == true)
        {
            if (min_value==-1)//소수가 1개라도 있으면 min값 그 수로 대치
                min_value = i;
            sum += i;//소수 합 갱신
        }
    if (min_value==-1)//소수가 1개도 없으면 -1출력
        cout << "-1";
    else
        cout << sum << '\n' << min_value;
    return 0;
}
