#include "Plant.h"
#include <iostream>
using std::cout;
int Plant::tipo = 1;

Plant::Plant()
{
    dano=0;
}

Plant::Plant(const Plant &p)
{
    this->dano=p.nome;
    this->nome=p.nome;
    this->tipo=p.tipo;
}
void Plant::Level()
{
    cout << "O ataque é" <<(dano+1)<<'\n';
}
void Plant::Ataque()
{
    cout << "O ataque é" <<dano<<'\n'; 
}
