CPP     = g++
CXXFLAGS = -c -Wall
FOLDERS= usuarios


all: modUsuarios


modUsuarios:
	@for d in $(FOLDERS); do \
	   (cd $$d; $(MAKE) ); 	\
	done

clean:
	@for d in $(FOLDERS); do \
	   (cd $$d; $(MAKE) clean); 	\
	done

