#include "Plant.h"
#include <iostream>
using std::cout;

Plant::Plant()
{
    dano=0;
}

Plant::~Plant()
{
}

void Plant::Ataque()
{
    cout << "O ataque é" <<dano<<'\n'; 
}
