#include "pch.h"

using namespace System;

ref class Animal
{
public:
    int legs;

    void SetName(String^ nm)
    {
        name = nm;
    }

    String^ GetName()
    {
        return name;
    }

private:
    String ^name;
};

int main(array<System::String ^> ^args)
{
    Animal cat, dog;

    cat.SetName("Cat");
    cat.legs = 4;

    dog.SetName("Dog");
    dog.legs = 4;

    Console::Write("Animal 1");
    Console::Write(" ");
    Console::Write("Name: ");
    Console::Write(cat.GetName());
    Console::Write(" ");
    Console::Write("Legs: ");
    Console::Write(cat.legs);
    Console::Write("\n");
    Console::Write("Animal 2");
    Console::Write(" ");
    Console::Write("Name: ");
    Console::Write(dog.GetName());
    Console::Write(" ");
    Console::Write("Legs: ");
    Console::Write(dog.legs);
    Console::Write("\n");

    return 0;
}
