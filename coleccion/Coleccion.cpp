#include "Coleccion.hh"

Coleccion::Coleccion()
{}

Coleccion::~Coleccion()
{}

Coleccion::void agregarLibro(string nombre,int edicion,string autor,int id,string genero)
{
		Libro l(string nombre,int edicion,string autor,int id,string genero);
        string gen = l.getgenero ();
		int i;
		for (i=0;i<7;++i)
		{
			if (gen == generos[i])
				break;
		}
		libr[i].append(l);
}

Coleccion:: void agregarrevista(string nombre,int Id,int edicion,string materia,string fecha)
{
		Revista r (string nombre,int Id,int edicion,string materia,string fecha);
		string ma = r.getMateria ();
		int i;
		for (i=0;i<7;++i)
		{
			if (ma == materias[i])
				break;
		}
		revist[i].append(r);

}


Coleccion:: void eliminarLibro(int id)

{
	int a = id%10000,
		b,
		c;
	a = (a/1000)-1;
	
	for (b = 0; b<9; ++b)
	{
		c = (libr[a].at(b)).getId();
		if ( c == id )
		{
			libr[a].erase(libr[a].begin()+b);
			break;
		}
	}
}

Coleccion:: void eliminarRevista(int id)

{
	int a = id%10000,
		b,
		c;
	a = (a/1000)-1;
	
	for (b = 0; b<7; ++b)
	{
		c = (revist[a].at(b)).getId();
		if ( c == id )
		{
			libr[a].erase(libr[a].begin()+b);
			break;
		}
	}
}

Coleccion:: Libro buscarLibro(int id)
{
	Libro l ();
	int a = id%10000,
		b,
		c;
	a = (a/1000)-1;
	
	for (b = 0; b<7; ++b)
	{
		c = (libr[a].at(b)).getId();
		if ( c == id )
		{
			return libr[a].at(b);
		}
	}
	cout<< "El libro no se encuentra en la coleccion"<<endl;
	return l;

}
Coleccion:: Revista buscarRevista(int id)
{
	Revista r ();
	int a = id%10000,
		b,
		c;
	a = (a/1000)-1;
	
	for (b = 0; b<7; ++b)
	{
		c = (revist[a].at(b)).getId();
		if ( c == id )
		{
			return revist[a].at(b);
		}
	}
	cout<< "La revista no se encuentra en la coleccion"<<endl;
	return r;

}
