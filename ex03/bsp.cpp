#include "Fixed.hpp"
#include "Point.hpp"

/*float sign (Point const p1, Point const p2, Point const p3)
{
	return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY())).toFloat();
}*/

bool bsp( Point const a, Point const b, Point const c, Point const pnt){
		float d1, d2, d3;
		bool has_neg, has_pos;

		/*d1 = sign(pnt, a, b);
		d2 = sign(pnt, b, c);
		d3 = sign(pnt, c, a);*/
		d1 = (a.getY() - b.getY() - c.getY() - pnt.getY()).toFloat();
		d2 = (a.getY() - b.getY() - c.getY() - pnt.getY()).toFloat();
		d3 = (a.getY() - b.getY() - c.getY() - pnt.getY()).toFloat();

		has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
		has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

		return !(has_neg && has_pos);
}



