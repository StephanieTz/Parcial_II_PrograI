#include <iostream>
#include <string>
using namespace std;

class Empleado
{
private:
    string nombre;
    string apellido;
    int edad;
    int salario;

public:
    Empleado(string _nombre, string _apellido, int _edad, int _salario)
        : nombre(_nombre), apellido(_apellido), edad(_edad), salario(_salario) {}

    void setNombre(const string &_nombre)
    {
        nombre = _nombre;
    }

    void setApellido(const string &_apellido)
    {
        apellido = _apellido;
    }

    void setEdad(int _edad)
    {
        edad = _edad;
    }

    void setCurso(int _salario)
    {
        salario = salario;
    }

    string getNombre() const
    {
        return nombre;
    }

    string getApellido() const
    {
        return apellido;
    }

    int getEdad() const
    {
        return edad;
    }

    int getCurso() const
    {
        return salario;
    }

    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Salario: " << salario << endl;
    }
};

void EjercicioEstudiante()
{ //-------------------------- AQUI SE CAMBIAN LOS DATOS----------------------//
    Empleado empleado("Stephanie", "Argueta", 19, 1500.00);
    cout << "Información del Empleado:" << endl;
    empleado.mostrarInformacion();
}

int main()
{
    EjercicioEstudiante();
    return 0;
}
