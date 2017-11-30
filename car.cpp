#include "car.h"


struct CarType
{
  enum type type;
  enum color color;
  double fill_level;
  double speed;
  double acceleration_rate;

};

int count = 0;
static CarType aixam = {AIXAM, RED, 16.0, 0, 0.0};
static CarType multi1 = {FIAT_MULTIPLA,GREEN, 65.0, 0, 0.0};
static CarType multi2 = {FIAT_MULTIPLA,BLUE, 65, 0, 0.0};
static CarType multi3 = {FIAT_MULTIPLA,ORANGE, 65.0, 0, 0.0};
static CarType jeep1 = {JEEP, SILVER, 80.0, 0, 0.0};
static CarType jeep2 ={JEEP, BLACK, 80.0, 0, 0.0};

struct RentalRecord
{
  bool isRented;
  Car car;
};

static RentalRecord rental_record[] = {
  {false, &aixam}, {false, &multi1}, {false, &multi2}, {false, &multi3}, {false, &jeep1}, {false, &jeep2}
};


void init()
{
  for (int i = 0; i < 6; i++)
  {
    rental_record[i].isRented = false;
    rental_record[i].car->speed = 0;
    rental_record[i].car->acceleration_rate = 0.0;

  }

}

double get_speed(Car car)
{
  return round(car->speed);
}
double get_fill_level(Car car)
{
  return car->fill_level;
}

Car get_car(type car_type)
{

  for (int i = 0; i < 6; i++)
  {
    if (!rental_record[i].isRented && rental_record[i].car->type == car_type)
    {

      rental_record[i].isRented = true;
      return rental_record[i].car;

    }
  }
  return 0;
}
  type get_type(Car car)
  {
    return car->type;
  }
  color get_color(Car car)
  {
    return car->color;

  }
  double get_acceleration_rate(Car car)
  {
      return car->acceleration_rate;
  }

  void set_acceleration_rate(Car car, double rate)
  {

    if(car->type == AIXAM && rate > 1.00)
    {
      rate = 1.00;
    }
    if(car->type == FIAT_MULTIPLA && rate > 2.26)
    {
      rate = 2.26;
    }
    if(car->type == JEEP && rate > 3.14)
    {
      rate = 3.14;
    }
    if(car->type == AIXAM && rate < -8.00)
    {
      rate = -8.00;
    }
      car->acceleration_rate = rate;


  }
  void accelerate(Car car)
  {
    car->speed = (car->acceleration_rate * 3.6 +  car->speed);
    if(car->type == AIXAM && car->speed > 45)car->speed = 45;
    if(car->type == JEEP && car->speed > 196)car->speed = 196;
    if(car->type == FIAT_MULTIPLA && car->speed > 170) car->speed = 170;
  }

  int round(double speed)
  {
    return (speed + 0.5);
  }
