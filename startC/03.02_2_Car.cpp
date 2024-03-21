#include <iostream>
#include <cstring>
#include "03.02_2_Car.h"
using namespace std;

void CAR::InitMembers(const char* ID, int fuel) {
	strcpy_s(gamerID, CAR_CONST::ID_LEN,ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void CAR::ShowCarState() { 
	cout << "소유자 ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재 속도:" << curSpeed << "km/s" << endl << endl;
}
void CAR::Accel() {
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void CAR::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}