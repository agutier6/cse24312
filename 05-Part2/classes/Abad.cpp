#include "Abad.h"

template<class T, class U>
A::A(T inX, U inY) : x(inX), y(inY) {}

template<class T, class U>
T A::getX() const{
	return x;
}

template<class T, class U>
U A::getY() const{
	return y;
}

template<class T, class U>
void A::setX(T inX){
	x = inX;
}

template<class T, class U>
void A::setY(U inY){
	y = inY;
}

template<class T, class U>
bool A::operator==(const A& rhs) const{
	if(x == rhs.x && y == rhs.y)
		return true;
	return false;
}


