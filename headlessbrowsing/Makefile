all:
	make clean
	make build
	make run

build:
	@echo Compiling all .cpp source files into .o object files...
	g++ -c  main.cpp headlessbrowser.cpp
	@echo Compiling .o object files into an executable...
	g++ -o headlessbrowser.exe main.o headlessbrowser.o
	@echo Giving runnable permissions to executable...
	chmod +x headlessbrowser.exe
	@echo Done.

run:
	@echo Running...
	- ./headlessbrowser.exe
	@echo Done.

clean: 
	@echo Clearing workspace...
	- rm *.o *.exe
	@echo Done.

