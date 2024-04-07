#ifndef Rectangle_02_H
#define Rectangle_02_H

#include "04.01_2_Point.h"
class Rectangle {
private:
	Point upLeft;
	Point lowRight;
public:
	bool InitMembers(const Point &ul, const Point &lr);
	void ShowRecInfo() const;
};
#endif // !Rectangle_02_H
