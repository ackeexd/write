#include "logg.h"

logg::logg()
{
    fopen_s(&file, path.c_str(), "a+");
    // ������ �������� - ��� ���� � ����� (const char*)
    // ������ �������� - ��� ������ ������ � ������ (a+ ������ �� ������ � ������, ��� ��� ��� ���������� ������������ � ����� ����� a - add)
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

