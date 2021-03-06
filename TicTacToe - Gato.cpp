/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán && Daniel Eduardo Lozano Rodriguez
Grupo: 111   Matrícula: 67664 -- 68070
Programa: PROYECTO SEGUNDO PARCIAL
Descripción: Juego del Gato 
fecha 30/10/2018
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;
bool player = false;
char board[3][3] = { {'_','_','_' }, {'_', '_', '_'}, {'_', '_', '_'} };
void showBoard();
bool checkGame();
char functionWinner(); 
int main()
{
	while (true) {
		showBoard();
	}
}



void showBoard() {
	int line = 1, column = 1;
	char boardPlayer = player ? 'x' : 'o';
	for (int i = 0; i < 3; i++) {
		cout << "\n\n";
		for (int j = 0; j < 3; j++) {
			cout << "\t" << board[i][j];
		}
		cout << "\n\n";
	}
	cout << "\n\t '" << boardPlayer << "' mueve\n";
	do {
				cout << "\n--En que fila desea jugar? ";
				cin >> line; cout << "\n";
	} while (line < 1 || line > 3);
	do {
				cout << "\n--En que columna desea jugar? ";
				cin >> column; cout << "\n--------------------------------------";
	} while (column < 1 || column > 3);

	board[(line - 1)][(column - 1)] = boardPlayer;	
	if (functionWinner() != '_') {
		cout << "\t" << functionWinner() << " ha ganado :D\n";
		for (int i = 0; i < 3; i++) {
			cout << "\n\n";
			for (int j = 0; j < 3; j++) {
				cout << "\t" << board[i][j];
			}
			cout << "\n\n";
		}
		exit(0);
	}
	if (checkGame()) {
		cout << "\n--Son bien malos los dos >:v\n";
		for (int i = 0; i < 3; i++) {
			cout << "\n\n";
			for (int j = 0; j < 3; j++) {
				cout << "\t" << board[i][j];
			}
			cout << "\n\n";
		}
		exit(0);
	}
	player = !player;								//Se alterna jugador
}

bool checkGame() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == '_') {
				return false;
			}
		}
	}
	return true;
}

char functionWinner() {
	for (int i = 0; i < 3; i++) {

		if (board[i][0] != '_' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) { //Horizontal
			return board[i][0];
		}
	}
	for (int i = 0; i < 3; i++) {
		if (board[0][i] != '_' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) { //Vertical
			return board[0][i];
		}
	}
	if (board[0][0] != '_' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
		return board[0][0];
	}
	if (board[0][2] != '_' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
		return board[0][2];
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
