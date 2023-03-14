// 10872.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int fibrecursion(int N)
{
    int current; //현재 값
    int last; //current 이전 값
    int temp; // 연산시 임시 저장 값
    if (N == 0 || N == 1)
    {
        return 1;
    }
    else
    {
        current = 1; last = 0;
        for (int i = 2; i < N ; i++)
        {
            temp = current;
            current = current + last;
            last = temp;
        }
    }
    return current;
}

int factorial(int N)
//팩토리얼은 입력이 5 라면 5*4*3*2*1 이다 순환을 사용하면 쉽게해결 가능하다
//종료조건은 N이 2일때이다 2! 는 2이기 때문이다 이런식으로 순환 종료 조건은 입력이 그대로 출력이 되는 것으로 설정하면 된다
//이 함수에서는 입력이 2일경우 결과또한 2이기때문에 2로 설정했다
// 입력이 4라면 호출 순서는 아래와 같다
//4*fac(3)
//  3*fac(2)
//      2 return
//  6return
//24return
{
    if (N > 2)
    {
        N = N * factorial(N - 1);
    }
    return N;
}
int main()
{
    int N;
    cin >> N;
    if (N == 0)
    {
        cout << 1;
    }
    else {
        cout << factorial(N);
    }
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
