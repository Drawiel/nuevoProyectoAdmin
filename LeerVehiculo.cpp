#include <iostream> 
#include <fstream> 
#include <sstream> 
using namespace std; 

int main(){
    ifstream archivo("vehiculos.txt");
    if(!archivo){
        cout<<"No existe el archivo"<<endl;
        return 1;
    }

    string texto; 
    while (archivo>>texto){
        istringstream ss(texto);
        string(token);
        while(getline(ss,token,':')){
            cout<<token<<endl;
        }
    }
    archivo.close();
    return 0;
}

class Vehiculo{
    private:
    string marca;
    string modelo;
    string placa;
    int anio;

    public:
    Vehiculo(string, string, string, int);
    Vehiculo();
    void setMarca(string);
    void setModelo(string);
    void setPlaca(string);
    void setAnio(int);
};

//Vehiculo::Vehiculo(string xma, string xmo, string xp, int xa){
//}

Vehiculo::Vehiculo()
{
    marca = "";
}