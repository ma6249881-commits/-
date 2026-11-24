Чтобы скомпилировать и запустить программу, используя компилятор g++, необходимо перейти в корневую папку проекта и выполнить в терминале следующую команду:

g++ -std=c++17 -I include src/main.cpp src/matrix_io.cpp src/math_utils.cpp src/matrix_processor.cpp -o matrix_app
