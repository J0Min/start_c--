//#include "03.02_3_Car.h"
//
//void CAR::InitMembers(const char* ID, int fuel) {
//	strcpy_s(gamerID, CAR_CONST::ID_LEN, ID);
//	fuelGauge = fuel;
//	curSpeed = 0;
//}
//
//void CAR::Accel() {
//	if (fuelGauge <= 0)
//		return;
//	else
//		fuelGauge -= CAR_CONST::FUEL_STEP;
//	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
//		curSpeed = CAR_CONST::MAX_SPD;
//		return;
//	}
//	curSpeed += CAR_CONST::ACC_STEP;
//}