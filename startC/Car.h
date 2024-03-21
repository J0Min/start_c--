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
private: // 접근 제어 지시자 설정
	char gamerID[CAR_CONST::ID_LEN]; //식별 ID
	int fuelGauge;							   		  //연료량
	int curSpeed;									  //현재 속도
public:
	void InitMembers(const char* ID, int fuel); //멤버변수 초기화
	void ShowCarState();
	void Accel();
	void Break();
};
#endif