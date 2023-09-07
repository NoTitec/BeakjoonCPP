// 8393.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int result;//결과 
int inputnum;//입력 수
int main()
{
    cin >> inputnum;
    for (int i = 1; i <= inputnum; i++) {
        result = result + i;
       
    }
    cout << result;
}


