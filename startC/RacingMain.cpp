//03.02_2-racingcar 클래스를 {헤더(선언) / 정의 / 사용} 으로 분리한다.
// https://m.blog.naver.com/ann_arbor/221356489615
// ifndef와 ifdef 차이/ ifndef-endif / ifndef-define-endif / 자신 중복 처리

#include "Car.h"

int main(void) {
	CAR run99;
	run99.InitMembers("run77", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

}