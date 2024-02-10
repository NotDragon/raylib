default:
	g++ main.cpp -o build/out.exe -Wall -Wno-missing-braces -I ./include -L ./lib -lraylib -lopengl32 -lgdi32 -lwinmm