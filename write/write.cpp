#include "logg.h"

// Singleton Pattern
#include "logg.h"

int main()
{
    logg* logg = logg::GetInstance();

    logg->WriteStringToFile("PU");
    logg->WriteStringToFile("111");
    logg->WriteIntegerToFile(5);
}