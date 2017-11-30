/*----------------------------------------------------------
*	HTBLA-Leonding / Klasse: * ---------------------------------------------------------
* Exercise Number: 0
* Title:	car.h
* Author:	P. Bauer
* Due Date:	January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
/*----------------------------------------------------------
*	HTBLA-Leonding / Klasse: * ---------------------------------------------------------
* Exercise Number: 0
* Title:	car.h
* Author:	P. Bauer
* Due Date:	January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum type{AIXAM, FIAT_MULTIPLA, JEEP};
enum color{RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

typedef struct CarType* Car;

void init();
double get_fill_level(Car car);
Car get_car(type car_type);
type get_type(Car car);
color get_color(Car car);
double get_acceleration_rate(Car car);
void set_acceleration_rate(Car car, double rate);
void accelerate(Car car);
int round(double speed);
double get_speed(Car car);







#endif
