#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#pragma once
class logg
{
private:
    static logg* instance;
    FILE* file = nullptr; // указатель на файл
     // процедурный способ работы с файлом
    string path = "E:/1/progress.txt";
    logg();
public:
    static logg* GetInstance()
    {
        // переписать на тернарке :)
        if (instance == nullptr)
        {
            instance = new logg();
        }
        return instance;
    }
    void WriteStringToFile(string text);
    void WriteIntegerToFile(int number);
    static void FreeMemory()
    {
        fclose(instance->file);
        if (instance != nullptr)
        {
            delete instance;
        }
    }
    
}; 

