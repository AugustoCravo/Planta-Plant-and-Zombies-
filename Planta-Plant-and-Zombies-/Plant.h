#ifndef PLANT_H
#define PLANT_H

class Plant
{
public:
    Plant();
    ~Plant();
    Plant(const string &);
    Plant(const Plant &);
    
    void Ataque();
    void Level();

private:
    
    int dano;
    string nome;
    static void tipo;

};

#endif // PLANT_H
