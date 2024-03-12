#include <iostream>
using namespace std; // 분할해서 사용할줄도 알아야함! (통합버전)

//int swap(int* a,int* b ) {
//	int c =  *a;
//	*a = *b;
//	*b = c;
//	return 0;
//}
//char swap(char* a, char* b) {
//	char c = *a;
//	*a = *b;
//	*b = c;
//	return 0;
//}
//double swap(double* a, double* b) {
//	double c = *a;
//	*a = *b;
//	*b = c;
//	return 0;
//}
//
//int main(void) {
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char ch1 = 'A', ch2 = 'B';
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' << ch2 << std::endl;
//
//	double db1 = 1.111, db2 = 5.555;
//	swap(&db1, &db2);
//	std::cout << db1 << ' ' << db2 << std::endl;
//
//}

//01.03.DefaultValue1
//int Adder(int num1 = 1, int num2 = 2)
//{
//	return num1 + num2;
//}
//
//int main(void) {
//	std::cout << Adder() << std::endl;;
//	std::cout << Adder(5) << std::endl;;
//	std::cout << Adder(5, 3) << std::endl;;
//	return 0;
//}

//01.03.DefaultValue2
//int Adder(int num1 = 1, int num2 = 2);
//int main(void) {
//	std::cout << Adder() << std::endl;;
//	std::cout << Adder(5) << std::endl;;
//	std::cout << Adder(5, 3) << std::endl;;
//	return 0;
//}
//int Adder(int num1, int num2)
//{
//	return num1 + num2;
//}

//01.03.DefaultValue3
//int BoxVolume(int length , int width = 1, int height = 1);
//int main(void) {
//	std::cout << BoxVolume(3,3,3) << std::endl;;
//	std::cout << BoxVolume(5,5) << std::endl;;
//	std::cout << BoxVolume(7) << std::endl;;
////	std::cout << BoxVolume() << std::endl;; // 오류남
//	return 0;
//}
//int BoxVolume(int length, int width, int height)
//{
//	return length* width* height;
//}

//01.03_end1
//int BoxVolume(int length, int width, int height)
//{
//	return length * width * height;
//}
//int BoxVolume(int length, int width)
//{
//	return length * width *1;
//}
//int BoxVolume(int length)
//{
//	return length * 1 * 1;
//}
//int main(void) {
//	std::cout << BoxVolume(3, 3, 3) << std::endl;;
//	std::cout << BoxVolume(5, 5) << std::endl;;
//	std::cout << BoxVolume(7) << std::endl;;
//	//std::cout << BoxVolume() << std::endl;;
//	return 0;
//}

//01.03_end2

//01.04_InlineFunc
//inline int SQUARE(int x)
//{
//	return x * x;
//}
//int main(void) {
//	std::cout << SQUARE(5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//	return 0;
//}

//01.05_NameSpace2
//namespace BestComImpl {
//	void SimpleFunc(void);
//}
//namespace ProgComImpl {
//	void SimpleFunc(void);
//}
//int main(void) {
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}
//void BestComImpl::SimpleFunc(){
//	std::cout << "BestCom이 정의된 함수" << std::endl;
//}
//void ProgComImpl::SimpleFunc() {
//	std::cout << "ProgCom이 정의된 함수" << std::endl;
//}

//01.05_NameSpace_end >> out

//01.05_UsingDcl2
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(void) {
//	int num = 20;
//	cout << "하윙" << endl;
//	cout << "이걸 스킵하네 " << 'a' << endl;
//	cout << num << ' ' << 'A';
//	cout << ' ' << 3.14 << endl;
//	return 0;
//}

//01.05_UsingDcl3
//int main(void) {
//	int num = 20;
//	cout << "하윙" << endl;
//	cout << "이걸 스킵하네 " << 'a' << endl;
//	cout << num << ' ' << 'A';
//	cout << ' ' << 3.14 << endl;
//	return 0;
//}

//01.05_NameAlis
//namespace AA {
//	namespace BB {
//		namespace CC {
//			int num1;
//			int num2;
//		}
//	}
//}
//void main() {
//	AA::BB::CC::num1 = 10;
//	AA::BB::CC::num2 = 20;
//	
//	namespace ABC = AA::BB::CC;
//	cout << ABC::num1 << ' ' << ABC::num2 << endl;
//}

//02.02.1_True&False - bool(T or F) 판단
//int main() {
//	int num = 10, i = 0;
//
//	cout << "true: " << true << endl;
//	cout << "false: " << false << endl;
//	cout << "true + false: " << false+true << endl;
//
//	while (true) {
//		cout << i++ << ' ';
//		if (i > num)
//			break;
//	}
//	cout << endl;
//	cout << "sizeof 1 : " << sizeof(1) << endl;
//	cout << "sizeof 0 : " << sizeof(0) << endl;
//	cout << "sizeof true : " << sizeof(true) << endl;
//	cout << "sizeof false : " << sizeof(false) << endl;
//	return 0;
//}

//02.02.2_dataType_Bool - bool 자료형
//bool IsPositive(int num) {
//	if (num <= 0)
//		return false;
//	else
//		return true;
//}
//int main() {
//	bool isBool;
//	int num;
//	cout << "Input Number : ";
//	cin >> num;
//	isBool = IsPositive(num);
//	if (isBool)
//		cout << "Pos" << endl;
//	else
//		cout << "Negative" << endl;
//	return 0;
//}

//02.03.1_Reference - 참조자
//int main() {
//	int a = 20;
//	int& b = a;
//	b = 1;
//	cout << "val=" << a << endl;
//	cout << "ref=" << b << endl;
//	cout << "address" << endl << &a << endl << &b << endl;
//}

//02.03.2_ReferenceElement - 배열도 참조자로 사용가능
//int main() {
//	int arr[3] = { 1,3,5 };
//	int& a = arr[0];
//	int& b = arr[1];
//	int& c = arr[2];
//
//	cout << a << endl << b << endl << c << endl;
//	return 0;
//}

//02.03.3_ReferencePtr - 포인터도 참조자로 사용가능
//int main(void) {
//	int a = 12;
//	int* b = &a;
//	int **c = &b;
//
//	int& ref_a = a;
//	int *(&ref_b) = b;
//	int** (&ref_c) = c;
//
//	cout << ref_a << endl << *ref_b << endl << **ref_c << endl;
//	return 0;
//}

//02.04.1_Call by Reference _ 참조자 버전 & 포인터버전
//void swap_ref(int& ref1, int& ref2) {
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//void swap_ptr(int* ptr1, int* ptr2) {
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//int main(void) {
//	int val1 = 17;
//	int val2 = 33;
//
//	swap_ref(val1, val2);
//	cout << "val1 = " << val1 << endl;
//	cout << "val2 = " << val2 << endl << endl;
//	swap_ptr(&val1,&val2);
//	cout << "val1 = " << val1 << endl;
//	cout << "val2 = " << val2 << endl;
//	return 0;
//}

//02.04.01_end1
//int swapValue(int& num) {
//	num++;
//	return 0;
//}
//int swapsymbol(int& num) {
//	num = num * -1;
//	return 0;
//}
//int main(void) {
//	int a = 10;
//	cout << "초기값  : " << a << endl;
//	swapValue(a);
//	cout << "증가값1 : " << a << endl;
//	swapsymbol(a);
//	cout << "부호값1 : " << a << endl;
//	swapValue(a);
//	cout << "증가값2 : " << a << endl;
//	swapsymbol(a);
//	cout << "부호값2 : " << a << endl;
//	return 0;
//}

//02.04.01_end2
//void swap(int& ref1, int& ref2) {
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//int main(void) {
//	int num1 = 5;
//	int* ptr1 = &num1;
//	int num2 = 10;
//	int* ptr2 = &num2;
//
//	swap(ptr1, ptr2);
//	cout << "num1 = " << num1 << endl;
//	cout << "ptr1 = " << *ptr1 << endl;
//	cout << "num2 = " << num2 << endl;
//	cout << "* ptr2 = " << *ptr2 << endl;
//	return 0;
//}

//02.04.02_1함수가 반환형이 참조형인 경우
//int& RefRetFuncOne(int& ref) {
//	ref++;
//	return ref;
//}
//int main(void) {
//	int num1 = 1;
//	int& num2 = RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	cout << "num1 = "<< num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	return 0;
//}

//02.04.02_2함수가 반환형이 참조형인 경우& return저장이 참조형이 아닌 경우
//int& RefRetFuncOne(int& ref) {
//	ref++;
//	return ref;
//}
//int main(void) {
//	int num1 = 1;
//	int num2 = RefRetFuncOne(num1); //num2가 상단과 다름
//
//	num1++;
//	num2+=100;
//	cout << "num1 = "<< num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	return 0;
//}

//02.04.02_3함수가 반환형이 참조형인 경우& return저장이 참조형이 아닌 경우&반환형이 일반형
//int RefRetFuncOne(int& ref) {
//	ref++;
//	return ref;
//}
//int main(void) {
//	int num1 = 1;
//	int num2 = RefRetFuncOne(num1); //num2가 상단과 다름
//
//	num1++;
//	num2+=100;
//	cout << "num1 = "<< num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	return 0;
//}

//02.04.02_end3 90p
//int main(void) {
//	const int num = 12;
//	const int* ptr = &num;
//	const int* (&pptr) = ptr;
//
//	//cout << num << endl;
//	cout << *ptr << endl;
//	cout << *pptr << endl;
//	return 0;
//}

//02.05.01_malloc&free_91p
//#include <string.h>
//#include <cstdlib>
//
//char* MakeStrAdr(int len) {
//	char* str = (char*)malloc(sizeof(char) * len);
//	return str;
//}
//int main(void) {
//	char* str = MakeStrAdr(20);
//	strcpy_s(str, 20, "I'm so happy~"); // strcpy_s() 함수 사용
//	cout << str << endl;
//	free(str);
//	return 0;
//}

//02.05.02_malloc&free=>new&delete_92p
//#include <string.h>
//char* MakeStrAdr(int len) {
//	char* str = new char[len];
//	return str;
//}
//
//int main(void) {
//	char* str = MakeStrAdr(20);
//	strcpy_s(str, 20, "I'm so happy~"); // strcpy_s() 함수 사용
//	cout << str << endl;
//	//free(str);
//	delete []str;
//	return 0;
//}

//02.05.문제02-3
//typedef struct __Point {
//	int xpos;
//	int ypos;
//}Point;
//
//Point& PntAdder(const Point& p1, const Point& p2) {
//	Point* xy = new Point;
//	(*xy).xpos = p1.xpos + p2.xpos;
//	xy->ypos = p1.ypos + p2.ypos;
//	return *xy;
//}
//
//int main(void) {
//	Point* a = new Point;
//	(*a).xpos = 1; //직접접근
//	(*a).ypos = 2;
//
//	Point* b = new Point;
//	b->xpos = 3; //간접접근
//	b->ypos = 4; 
//	Point& P = PntAdder(*a, *b);
//	cout <<"x = " << P.xpos << endl;
//	cout << "y = " << P.ypos << endl;
//	delete a;
//	delete b;
//	delete &P;
//	return 0;
//}

//02.06.01
//#include <cmath>
//#include <cstdio>
//#include <cstring>
//#pragma warning(disable:4996)//strcpy에서 보안오류를 _s나 경고 뜨지않음과 
//												//해당오류 끄기로 해결가능
//
//int main(void) {
//	char str1[] = "Result";
//	char str2[30];
//	strcpy(str2, str1);
//	printf("%s :  %f \n", str1, sin(0.14)); 
//	printf("%s :  %f \n", str2, abs(-1.25));
//	return 0;
//}

//#pragma warning(disable:4996)
//#define _CRT_SECURE_NO_WARNINGS

//02.06.문제2-4.1
//#include <cstring>
//#pragma warning(disable:4996)
//int main(void) {
//	const char *a = "HI "; //영어&숫자 1 but 한글 크기 2
//	const char *b = "Have a good Day";
//	char c[50];
//	int len = strlen(a);
//	cout << a << "길이: " << len << endl;
//	strcpy(c, a); //why not *a? 이미 배열의 시작주소를 가르킴
//	len = strlen(c);
//	cout << c << " 길이: " << len << endl;
//	strcat(c, b);
//	len = strlen(c);
//	cout << c << " 길이: " << len << endl;
//	cout  << strcmp(b,a) << endl; //소스와 대상에 따라 1 0 -1 출력, 대상보다 크면 1 같으면 0
//	return 0;
//}

//02.06.문제2-4.2
//#include <ctime>
//#include <cstdlib>
//
//int main(void) {
//	//int a[5];
//	srand(time(NULL));
//	for (int i = 0; i < 5; i++) {
//		//a[i]= rand() % 100;
//		cout  << rand() % 100 << endl;
//	}
//	return 0;
//}

//논외로 구조체 이해를 위함
//#include <stdio.h>
//// 구조체 정의와 별명 추가를 동시에 함
//typedef struct _Person {
//    char name[50];
//    int age;
//    float height;
//} Person;
//
//int main() {
//    // Person 구조체 변수 선언과 초기화
//    _Person person1 = { "John", 25, 175.5 };
//     Person person2 = { "Alice", 30, 160.0 };
//
//    // person1 정보 출력
//    printf("Person 1:\n");
//    printf("Name: %s\n", person1.name);
//    printf("Age: %d\n", person1.age);
//    printf("Height: %.1f\n", person1.height);
//
//    // person2 정보 출력
//    printf("\nPerson 2:\n");
//    printf("Name: %s\n", person2.name);
//    printf("Age: %d\n", person2.age);
//    printf("Height: %.1f\n", person2.height);
//
//    return 0;
//}
