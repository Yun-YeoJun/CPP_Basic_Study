#include <iostream> //표준 라이브러리 iostream을 불러옴
#include "filename.h"	 //직접 만든 filename.h 헤더 파일을 불러옴

int addTwo(int a, int b) //return 값이 정수이고, 정수형 매개변수 a와 b를 받는 함수 addTwo 선언
{
	return a + b;	//두 매개변수의 합을 return 함
}

int main() //main함수
{
	std::string name{""}; //std namespace 안에 있는 string 자료형 변수 name을 선언 후 ""로 초기화

	int number{ 0 }; //정수형 변수 number 선언 후 0으로 초기화
	int age = 0; //정수형 변수 age 선언 후 0으로 초기화

	addTwo(number, age); //addTwo 함수에 number, age를 매개변수로 넘겨줌

	std::cin >> name >> number >> age; //cin 함수를 사용해 name number age를 순서대로 입력 받음

	if (name == "kimjongha") //if 문을 사용해서 name의 값이 "kimjongha"인지 확인
	{
		std::cout << "어디서 많이 들어 본 이름인데?" << std::endl; //name의 값이 "kimjongha"라면 cout함수를 사용해 "어디서 많이 들어 본 이름인데?"출력

	}
	else //name이 "kimjongha"가 아니라면 밑줄 코드 실행
	{
		std::cout << "환영합니다!" << std::endl; //cout 함수를 사용해 "환영합니다!" 출력 후 endl을 통해 개행 + 출력스트림 비우기
	}

	return 0; //main함수가 0을 return 함
}


 