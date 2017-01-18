#ifndef PLANT_H
#define PLANT_H

class Plant
{
public:
    Plant();
    ~Plant();

    void Ataque();
    int Level();

private:
    
    int dano;
    string nome;
    static int tipo;

};

#endif // PLANT_H
