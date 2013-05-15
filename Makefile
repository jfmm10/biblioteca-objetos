CPP     = g++
CXXFLAGS = -c -Wall
FOLDERS= usuarios control basedatos
 

all: modulos 


modulos:
	@for d in $(FOLDERS); do \
	   (cd $$d; $(MAKE) ); 	\
	done

clean:
	@for d in $(FOLDERS); do \
	   (cd $$d; $(MAKE) clean); 	\
	done

