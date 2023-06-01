
#include <iostream>
#include <stdio.h>   // #include : 전처리기 지시문
                     // 
void MyNewPrint(int number)
{
    printf("입력값은 %d 입니다. \n", number);

}

int PlusTwoNumbers(int number1, int number2)
{
    printf("입력 값은 %d, %d 입니다. \n", number1, number2);
    return number1 + number2;
}

int TripleNumbers(int A, int B, int C)
{
    printf("입력 값은 %d, %d, %d 입니다. \n", A, B, C);
    return A * B * C;

}



int main(void)
{
    int number = 10;
    /**
    std::cout << "Hello World!\n";
    printf("여러줄 같이 작성하는법 = shift + Alt + 방향키 \n");
    printf("여러줄 같이 작성하는법 = shift + Alt + 방향키 \n");
    printf("여러줄 같이 작성하는법 = shift + Alt + 방향키 \n");
    printf("줄바꿈 확인 \n");
    printf("특수문자 확인 \" \n");
    // 특수문자 출력을 할때는 이스케이프 스퀸시 (\ : 역슬래시) 뒤에 사용한다.

    printf("변수 확인 : %d \n", number - 2);
    */
    //MyNewPrint(100); //함수 호출
   
    printf("두 수의 합은 %d 입니다. \n\n", PlusTwoNumbers(5, 7));
    printf("세 수의 곱은 %d 입니다. \n\n", TripleNumbers(1, 2, 3));
    MyNewPrint(100);
    
    // Comment = 주석 : 이 라인은 프로그램에 영향을 주지 않는다.
    // 내가 필요한 글자를 마음대로 적으면 된다.
    // 이것을 한줄 주석이라고 한다.
    /*
    *  이것을 여러줄 주석이라고 한다.
    *  이 라인들은 프로그램에 영향을 주지 않는다.
    */

    return 0; // return을 만난순간 함수는 종료된다.
}

