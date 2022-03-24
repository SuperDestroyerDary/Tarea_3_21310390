#include <iostream>
#include <stdlib.h>
using namespace std;

class Automovil{        //clase padre
    private:
        int llantas;
        string modelo;
        string color;

    public:
        Automovil(int, string, string);
        void reversa();
        void acelerar();
        void freno();
};  

class Chevrolet : public Automovil{     //clase hijo 1
    private:
        float precio;
        string marca;
    public:
        Chevrolet(int, string, string, float, string);
        void mostrarDatos();
};

class Nissan : public Automovil{        //clase hijo 2
    private:
        string material;
        float potencia;
    public:
        Nissan(int, string, string, string, float);
        void mostrarInformacion();
};

class BMW : public Automovil{           //clase hijo 3
    private:
        string placas;
        string ventilacion;
    public:
        BMW(int, string, string, string, string);
        void mostrarInfo();
};

class Toyota : public Automovil{           //clase hijo 4
    private:
        int puertas;
        int rines;
    public:
        Toyota(int, string, string, int, int);
        void ruedas();
};

class KIA : public Automovil{           //clase hijo 5
    private:
        int cilindros;
        float capacidad_cilindros;
    public:
        KIA(int, string, string, int, float);
        void capability();
};

Nissan::Nissan(int _llantas, string _modelo, string _color, string _material, float _potencia) : Automovil (_llantas, _modelo, _color){
    material = _material;
    potencia = _potencia;
}

Chevrolet::Chevrolet(int _llantas, string _modelo, string _color, float _precio, string _marca) : Automovil (_llantas, _modelo, _color){
    precio = _precio;
    marca = _marca;
}

Automovil::Automovil(int _llantas, string _modelo, string _color){
    llantas = _llantas;
    modelo = _modelo;
    color = _color;
}

BMW::BMW(int _llantas, string _modelo, string _color, string _placas, string _ventilacion) : Automovil (_llantas, _modelo, _color){
    placas = _placas;
    ventilacion = _ventilacion;
}

Toyota::Toyota(int _llantas, string _modelo, string _color, int _puertas, int _rines) : Automovil (_llantas, _modelo, _color){
    puertas = _puertas;
    rines = _rines;
}

KIA::KIA(int _llantas, string _modelo, string _color, int _cilindros, float _capacidad) : Automovil (_llantas, _modelo, _color){
    cilindros = _cilindros;
    capacidad_cilindros = _capacidad;
}

void Automovil::reversa(){
    cout << "Su " << modelo << " con " << llantas << " llantas de color " << color << " esta avanzando en reversa " << endl;
}

void Automovil::acelerar(){
    cout << "Su " << modelo << " con " << llantas << " llantas de color " << color << " esta acelerando " << endl;
}

void Automovil::freno(){
    cout << "Su " << modelo << " con " << llantas << " llantas de color " << color << " esta frenandose " << endl;
}

void Chevrolet::mostrarDatos(){
    cout << "El precio del carro es de " << precio << " y es de la marca de " << marca << endl;
}

void Nissan::mostrarInformacion(){
    cout << "El material del carro es de " << material << " y tiene una potencia de " << potencia << "Hp" << endl;
}

void BMW::mostrarInfo(){
    cout << "Las placas son " << placas << " y cuenta con una ventilacion de " << ventilacion << endl;
}

void Toyota::ruedas(){
    cout << "La cantidad de puertas son " << puertas << " y la cantidad de rines son " << rines << endl;
}

void KIA::capability(){
    cout << "La cantidad de cilindros son " << cilindros << " y la capacidad de ellos son " << capacidad_cilindros << "litros" << endl;
}

int main(){
    Automovil C1(4, "Audi TT", "negro");
    C1.acelerar();

    Chevrolet C2(4, "Camaro", "negro", 301400.50, "Chevrolet");
    C2.mostrarDatos();
    C2.acelerar();

    Nissan C3(4, "Sentra", "plateado", "Aluminio", 128);
    C3.mostrarInformacion();
    C3.acelerar();

    BMW C4(4, "BMW 74", "negro", "C41303545FDG", "Air Vent Control");
    C4.mostrarInfo();
    C4.freno();

    Toyota C5(4, "Corola", "gris", 4, 4);
    C5.ruedas();
    C5.acelerar();

    KIA C6(4, "Stinger", "blanco", 4, 2.5);
    C6.capability();
    C6.freno();

    system ("pause");
    return 0;
}
