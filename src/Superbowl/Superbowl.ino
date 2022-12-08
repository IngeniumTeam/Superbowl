#include <Digit.h>
#include <PhotoElectric.h>

Digit digit(2, 3);
PhotoElectric photoElectric(4, 5);

int cherryNumber = 0;

void setup () {}

void loop ()
{
  if (photoElectric.detects())
  {
    cherryNumber++;
    digit.display(cherryNumber);
  }
}
