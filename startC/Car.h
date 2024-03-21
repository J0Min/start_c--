//03.02_2
#ifndef CAR_H
#define CAR_H
namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class CAR {
private: // ���� ���� ������ ����
	char gamerID[CAR_CONST::ID_LEN]; //�ĺ� ID
	int fuelGauge;							   		  //���ᷮ
	int curSpeed;									  //���� �ӵ�
public:
	void InitMembers(const char* ID, int fuel); //������� �ʱ�ȭ
	void ShowCarState();
	void Accel();
	void Break();
};
#endif