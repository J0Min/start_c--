#include <iostream>
#include <cstring>
using namespace std;
//string ���� char[]�� Ǯ�̸� �ϴ���~
class Printer {
private:
	string str;
public:
	void SetString(string _string);
	void ShowString();
};
void Printer::SetString(string _string) {
	str = _string;
}
void Printer::ShowString(){
	cout << str << endl;
}
int main(void) {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I Love C++");
	pnt.ShowString();
	return 0;
}