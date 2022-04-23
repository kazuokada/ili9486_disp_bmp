ili9486_disp: ili9486_ctrl_still.o fileio.o
	g++ ili9486_ctrl_still.o fileio.o -o ili9486_disp -lwiringPi

ili9486_ctrl_still.o: ili9486_ctrl_still.cpp fileio.h
	g++ -c ili9486_ctrl_still.cpp

fileio.o: fileio.cpp fileio.h
	g++ -c fileio.cpp
