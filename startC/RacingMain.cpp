//03.02_2-racingcar Ŭ������ {���(����) / ���� / ���} ���� �и��Ѵ�.
// https://m.blog.naver.com/ann_arbor/221356489615
// ifndef�� ifdef ����/ ifndef-endif / ifndef-define-endif / �ڽ� �ߺ� ó��

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