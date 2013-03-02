///Clase coleccion 
//Colección.hh
#include <vector>
#include <iostream>
#include <cstdlib>  
#include <cstdio> 
#include "Libro.hh"
#include "Revista.hh"  
using namespace std;

class Coleccion
{
    public:
		//string generos[9] = {"mitologia", "ciencias", "artes", "ficcion", "deportes", "culinaria", "historia", "novela", "idiomas"};
		vector <Libro> libr [9]; // Se crea un vector de Libros de 9 posiciones ( De acuerdo a sus generos)
        //string materias [7] = {"fisica", "matematicas", "economia", "computacion", "entretenimiento", "novedades", "cocina";
        vector <Revistas> revist [7];   // Se crea un vector de revistas de 7 posiciones ( De acuerdo a sus materias)

		void agregarLibro(string nombre,int edicion,string autor,int id,string genero); // Metodo que permite agregar un Libro al vector existente
		void agregarrevista(string nombre,int Id,int edicion,string materia,string fecha); // Metodo que permite agregar una Revista al vector existente
		void eliminarLibro(int id); // Elimina un Libro existente del vector de Libros
		void eliminarRevista(int id); // Elimina una Revista del vector de Revistas
		Libro buscarLibro(int id); // Método que permite buscar un libro dado su Id , retorna el Libro si lo encuentra
		Revista buscarRevista(int id); //  Método que permite buscar una revista de acuerdo a su id , retorna una revista si existe.
		Coleccion (); // Función creadora , instancia una Coleccion.
		~Coleccion (); // Función Destructora , destruye el Objeto.

	
        
};
