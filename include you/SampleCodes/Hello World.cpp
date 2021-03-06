#include <iostream> //후술할 std::cout이 들어있는 파일을 사용한다고 명시합니다.


/* main함수라고 불립니다. 
 * main함수의 몸체, 즉 중괄호 사이에 있는 구문들은 main함수가 호출되면 실행됩니다.
 * main함수는 프로그램이 실행될때 호출됩니다. */
int main() {

	/* std::cout은 출력을 담당합니다. <<을 통해 특정 값을 넘기면 콘솔 창에 출력이 됩니다.
	 * std::cout에서 std라는 공간에 있는 cout을 의미합니다. 
	 * 이 예제에서는 Hello World!를 출력합니다. */
	std::cout << "Hello World!";

	return 0;//프로그램을 실행한 곳에 0이라는 값을 돌려줍니다. 0말고 다른 값을 줄 수도 있는데, 일반적으로 0은 "프로그램이 아무 탈 없이 잘 실행되었다."를 의미합니다.
}
