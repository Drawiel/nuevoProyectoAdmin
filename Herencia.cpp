#include<iostream>
using namespace std;

class Animal{
    public:
    Animal(string nombre) : nombre(nombre){}
    void comer(){
        cout<<nombre<<" está comiendo."<<endl;
    }
    void dormir(){
        cout<<nombre<<" está durmiendo."<<endl;
    }

    private:
    string nombre;
};

class Perro : public Animal{
    public:
    Perro(string nombre, string raza) : Animal(nombre), raza(raza){}
    void ladrar(){
        cout<<"Estoy ladrando y soy un perro de raza "<< raza <<"."<<endl;
    }

    private:
    string raza;

};

int main(){
    Perro miPerro("Loky", "Belga Mallinois");

    //metodos de la superclase
    miPerro.comer();
    miPerro.dormir();

    //metodos de la clase hija 
    miPerro.ladrar();

    return 0;
}