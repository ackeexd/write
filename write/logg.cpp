#include "logg.h"

logg::logg()
{
    fopen_s(&file, path.c_str(), "a+");
    // второй параметр - это путь к файлу (const char*)
    // третий параметр - это способ работы с файлом (a+ доступ на запись и чтение, при том что информация дописывается в конце файла a - add)
}
void logg::WriteStringToFile(string text)
{

    if (file != nullptr)
    {
        text += "\n";
        fputs(text.c_str(), file);

    }
}
void logg::WriteIntegerToFile(int number)
{
    if (file != nullptr)
    {


        fprintf(file, "%d", number);

    }
}
logg* logg::instance;

