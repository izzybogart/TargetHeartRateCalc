FNS = THRCalc.cpp
MAIN = main.cpp $(FNS)

all:
        g++ $(MAIN) -o main

clean:
        rm main
