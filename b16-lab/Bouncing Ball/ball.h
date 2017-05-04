/** file: ball.h
 ** brief: Ball class
 ** author: Andrea Vedaldi
 **/

#ifndef __ball__
#define __ball__

#include "simulation.h"

class Ball : public Simulation
{
public:
  // Constructors and member functions
  Ball() ;
  void step(double dt) ;
  void display() ;
  // Declaração dos métodos públicos getx e setx, gety e sety, como solicitado no item 1 da questão 5
  void setX(double _x);
  double getX();
  void setY(double _y);
  double getY();
  void run(Ball & s, double dt); // declaração da função run, como solicitado na task 10

protected:
  // Data members
  // Position and velocity of the ball
  double r ;

  double x ;
  double y ;
  double vx ;
  double vy ;

  // Gravity acceleration
  double g ;
  
  // Mass and size of the ball
  double m ;




  // Geometry of the box containing the ball
  double xmin ;
  double xmax ;
  double ymin ;
  double ymax ;
} ;

#endif /* defined(__ball__) */
