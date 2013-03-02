// Clase revista
/// Revista.hh
#include <iostream>
#include <cstdlib>  
#include <cstdio>   
#include <vector>
#include <string>
using namespace std;
class Revista
{
    private:
        int Id; // el numero que lo identifica, esta conformado por 5 cifras: 
                // la primera 1(si es revista), (2 si es libro)
                // la segunda es de acuerdo a las diferentes materias
                // 1(fisica), 2(matematicas), 3(economia), 4(computacion), 5(entretenimiento), 6(novedades), 7(cocina)

        string Nombre; // Atributos de la Revista
        int Edicion;
        string Materia:
        bool prestado;
    public:
        // Metodos de la clase
        Revista(); // Metodo creador de la revista sin parametros
        Revista (int Id; int Nombre; string fecha ; int Edicion, string Materia); // Crea una Revista con los parámetros 
        ~Revista (); // Destruye la revita , la destructora.
        int getId(); // retorna el id de una revista
        string getfecha ();//  Método que retorna la fecha  de una revista
        int getEdicion();// Método que retorna la  edición de una revista
        string getNombre();//Método que retorna el id de una revista
        string getMateria();//Método que retorna la materia  de una revista
        void setId(int i); //Método que establece  el id de una revista
    	string setprestado();//Método que cambia el estado de una revista a Prestado ( true el bool)
    	string getprestado();//Método que retorna el estado del libro , True si está prestado , false de lo contrario.

};
