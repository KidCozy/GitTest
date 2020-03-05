// GitStudy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 정수 출력 함수
// 주소 연산자 제거
void PrintInteger(int Data)
{
	std::cout << Data << std::endl;
}

void PrintString(const char* Str)
{
    std::cout << Str << std::endl;
}

int main()
{
    PrintString("Hello World");
    PrintInteger(5);
    return 0;
}