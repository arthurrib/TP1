/** file: test-ball.cpp
 ** brief: Tests the bouncing ball simulation
 ** author: Andrea Vedaldi
 **/

#include "ball.h"
#include <iostream>

int main(int argc, char** argv)
{
  Ball ball ;
  const double dt = 1.0/30 ;
  
  // seta valores iniciais para a posii��o da bola
  ball.setX(0.5);
  ball.setY(0.2);
  // printa a posi��o inicial da bola no console
  std::cout << ball.getX() << std::endl;
  std::cout << ball.getY() << std::endl;
  
  /*for (int i = 0 ; i < 100 ; ++i) {
    ball.step(dt) ;
    ball.display() ;
  }*/
  
  ball.run(ball, dt); // chamada da fun��o run criada na task 10
  return 0 ;
}
