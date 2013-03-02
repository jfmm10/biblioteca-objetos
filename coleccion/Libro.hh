#include <iostream>
#include <cstdlib>  
#include <cstdio>   
#include <vector>
#include <string>

using namespace std;

class Libro
{
	private:
		int Id; // el numero que lo identifica, esta conformado por 5 cifras: 
                        // la primera 1(si es revista), (2 si es libro)
                        // la segunda es de acuerdo a las diferentes materias
                        // 1(mitologia), 2(ciencias), 3(artes), 4(ficcion), 5(deportes), 6(culinaria), 7(historia), 8(novela), 9(idiomas)
                int Edicion; // Atributos del libro
                string Nombre;
                string autor;
                bool prestado;
		string genero;
        public:
                Libro(); // Metodo creador del Libro sin parametros
                Libro(int Id, int Edicion, string Nombre,string autor);// Metodo creador del Libro con parámetros
                ~Libro(); // Destruye el Libro , destructora.
                int getId(); // Retorna el id de un Libro
                int getEdicion(); // Retorna la edición de un Libro
                string getNombre();// Retorna el nombre de un Libro
                string getautor(); // Retorna el autor del Libro
                void setId(int i);// Establece el id del Libro
		void setprestado();// Establece el estado  del Libro , si esta prestado o no
		void getprestado(); // Retorna un booleano . True si esta prestado y False si no lo está.
		string getgenero();// Retorna el genero del Libro.

                        
};
