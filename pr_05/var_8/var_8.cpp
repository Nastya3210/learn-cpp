#include <iostream>
#include "ClassDate.h"

using namespace std;

int main()
{
    ClassDate dt();
    ClassDate* pDt = new ClassDate(27,12,1984);
    pDt->print();


    std::cout << "Hello World!\n";
}

