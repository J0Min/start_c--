#include "03.02_end1_Calculator.h"

float Calculator::Add(float a, float b) {
	result = a + b;
	add_count++;
	return result;
}
float Calculator::Sub(float a, float b) {
	result = a - b;
	sub_count++;
	return result;
}
float Calculator::Mul(float a, float b) {
	result = a * b;
	mul_count++;
	return result;
}
float Calculator::Div(float a, float b) {
	result = a / b;
	div_count++;
	return result;
}
void Calculator::ShowOpCount() {
	cout << "����: " << add_count;
	cout << " �E��: " << sub_count;
	cout << " ����: " << mul_count;
	cout << " ������: " << div_count << endl;
}
void Calculator::Init() {
	result = 0;
	add_count = 0;
	sub_count = 0;
	div_count = 0;
	mul_count = 0;
}