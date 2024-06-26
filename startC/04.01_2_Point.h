#ifndef POINT_02_H
#define POINT_02_H
class Point {
private:
	int x;
	int y;
public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};


#endif // !POINT_02_H
