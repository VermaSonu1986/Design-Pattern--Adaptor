#include <iostream>
#include "Library.h"
#include "main.h"
#include <memory>
using namespace std;

int main()
{
    //adaptor *classAdp = new adaptor;
    unique_ptr<localDisplay>displayPtr(new adaptor);
    displayPtr->message(RED,"RED Color");
    displayPtr->message(BLUE,"BLUE Color");
    return 0;
}
