#ifndef calcu
#define calcu
#include <iostream>
using namespace std;
class Calculator {
private:
    int add_count;
    int sub_count;
    int mul_count;
    int div_count;
    float result;
public:
    float Add(float a, float b);
    float Sub(float a, float b);
    float Mul(float a, float b);
    float Div(float a, float b);
    void ShowOpCount();
    void Init();
};
#endif // !calcu.h


