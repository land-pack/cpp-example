#define _USE_MATH_DEFINES
#include <list>
#include "math.h"
#include <iostream>


using namespace std;



class Dreptunghi;
class Arie;
class Perimetru;
class Operatie;
class Cerc;

class Forma
{
public:
    virtual void accept(Operatie * op);
    Forma(void){};
    ~Forma(void){};
};
class Operatie{
public:
    virtual void vizitare(Cerc* obj) = 0;
    virtual void vizitare(Dreptunghi* obj) = 0;
    Operatie(void){};
    ~Operatie(void){};
};

class Cerc : public Forma {
protected:
    int raza;
public:
    void accept(Operatie* op){op->vizitare(this);};
    int getRaza(){return raza;};
    Cerc(void):raza(3){};
    ~Cerc(void){};
};

class Dreptunghi : public Forma {
protected:
    int lungime;
    int latime;
public:
    void accept(Operatie * op){op->vizitare(this);};
    int getLungime(void){return lungime;};
    int getLatime(void){return latime;};
    Dreptunghi(void):lungime(3),latime(3){};
    ~Dreptunghi(void){};
};



class Arie : public Operatie {
private:
    double arie;
public:
    double getResult(){return arie;};
    void vizitare(Cerc* obj){arie = arie + M_PI*obj->getRaza();};
    void vizitare(Dreptunghi* obj){arie = arie + obj->getLungime() + obj->getLatime();};
    Arie(void): arie(0) {};
    ~Arie(void){};
};

class Perimetru : public Operatie {
private:
    double perimetru;
public:
    double getResult(){return perimetru;};
    void vizitare(Cerc* obj){perimetru = perimetru + M_PI*obj->getRaza()*obj->getRaza();};
    void vizitare(Dreptunghi* obj){perimetru = perimetru + 2*(obj->getLungime() + obj->getLatime());};
    Perimetru(void):perimetru(0){};
    ~Perimetru(void){};
};

class Editor{
private:
    std::list<Forma*> forme;
public:
    Editor(void){};
    void insert(Forma obj){forme.insert(forme.end(), &obj);};
    double calculeazaArieTotala(){
        Arie arie;

        for(std::list<Forma *>::iterator it = forme.begin(); it != forme.end(); ++it){
            (*it)->accept(&arie);
        }

        return arie.getResult();
    };

    double calculeazaPerimetrulTotal(){
        Perimetru permietru;

        for(std::list<Forma *>::iterator it = forme.begin(); it != forme.end(); ++it){
            (*it)->accept(&permietru);
        }

        return permietru.getResult();
    };
    ~Editor(void){};
};


int main(void){
    Editor editor;
    cout << editor.calculeazaArieTotala() << endl;
    cout << editor.calculeazaPerimetrulTotal() << endl;
}

