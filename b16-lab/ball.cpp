/** file: ball.cpp
 ** brief: Ball class - implementation
 ** author: Andrea Vedaldi
 **/

#include "ball.h"

#include <iostream>

Ball::Ball()
    : r(0.1), vx(0.3), vy(-0.1), g(9.8), m(1), // Removidos os valores do m�todo construtor para x e y, que ser�o definidos pelos m�todos get e set
      xmin(-1), xmax(1), ymin(-1), ymax(1)
{
}

// defini��o dos m�todos Get e set, chamados pela main no test-ball.cpp
void Ball::setX(double _x) {
	x = _x;
}

double Ball::getX() {
	return x;
}

void Ball::setY(double _y) {
	y = _y;
}

double Ball::getY() {
	return y;
}

void Ball::step(double dt)
{
  double xp = x + vx * dt;
  double yp = y + vy * dt - 0.5 * g * dt * dt;
  if (xmin + r <= xp && xp <= xmax - r)
  {
    x = xp;
  }
  else
  {
    vx = -vx;
  }
  if (ymin + r <= yp && yp <= ymax - r)
  {
    y = yp;
    vy = vy - g * dt;
  }
  else
  {
    vy = -vy;
  }
}

void Ball::display()
{
  std::cout << x << " " << y << std::endl;
}
