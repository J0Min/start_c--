//#ifndef C_INLINE
//#define C_INLINE
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//namespace CAR_CONST {
//	enum {
//		ID_LEN = 20,
//		MAX_SPD = 200,
//		FUEL_STEP = 2,
//		ACC_STEP = 10,
//		BRK_STEP = 10
//	};
//}
//
//class CAR {
//private: // ���� ���� ������ ����
//	char gamerID[CAR_CONST::ID_LEN]; //�ĺ� ID
//	int fuelGauge;							   		  //���ᷮ
//	int curSpeed;									  //���� �ӵ�
//public:
//	void InitMembers(const char* ID, int fuel); //������� �ʱ�ȭ
//	void ShowCarState();
//	void Accel();
//	void Break();
//};
//inline void CAR::ShowCarState() {
//	cout << "������ ID: " << gamerID << endl;
//	cout << "���ᷮ: " << fuelGauge << "%" << endl;
//	cout << "���� �ӵ�:" << curSpeed << "km/s" << endl << endl;
//}
//inline void CAR::Break() {
//	if (curSpeed < CAR_CONST::BRK_STEP) {
//		curSpeed = 0;
//		return;
//	}
//	curSpeed -= CAR_CONST::BRK_STEP;
//}
//#endif