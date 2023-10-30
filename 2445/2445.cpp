// 2445.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    //반복 N 입력
    int N;
    cin >> N;
    
    
    for (int i = 0; i < N; i++)
    {
        //첫번째 1개씩 늘어나는 별 출력문
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        //첫번재 2개씩 줄어드는 공백 출력문
        for (int j = 0; j < 2 * (N - i - 1); j++)
            cout << " ";
        //첫번째 1개씩 늘어나는 별 뒤쪽 출력문
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < N; i++)
    {
        //두 번째 4부터 1개씩 줄어드는 별 앞쪽 출력문
        for (int j = 0; j <N-i-1; j++)
        {
            cout << "*";
        }
        //두 번째 2부터 2개씩 늘어나는 공백 출력문
        for (int j = 0; j < (2 * i) + 2; j++)
        {
            cout << " ";
        }
        //두 번째 4부터 2개씩 줄어드는 별 뒤쪽 출력문
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

