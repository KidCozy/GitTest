﻿// GitStudy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void PrintString(const char* Str)
{
    std::cout << Str << std::endl;
}

int main()
{
    PrintString("Hello World");

    return 0;
}