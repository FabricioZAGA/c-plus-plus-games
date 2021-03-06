/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán && Daniel Eduardo Lozano Rodriguez
Grupo: 111   Matrícula: 67664 -- 68070
Programa: PROYECTO SEGUNDO PARCIAL
Descripción: BattleShip
fecha 30/10/2018
*/

#include "pch.h"
#include <iostream>
#include <string>
void coor();

void J1();
void impresion1();

void J2();
void impresion2();

void P1();
void impresion3();
void validacion1();
void Barcos1(int b);

void P2();
void impresion4();
void validacion2();
void Barcos2(int b);

void Ganador();

int repet();
using namespace std;
int P[2][5][5], T[2] = { 5,5 };
string G[4][5][5];


int main()
{
	int r = 0;
	coor();
	cout << "******** Battleship ********\n\n";
	J1();
	system("pause");
	system("cls");
	J2();
	system("pause");
	system("cls");
	do
	{
		if (r % 2 == 0) {
			P1();
		}
		else
		{
			P2();
		}
		r = r + 1;


	} while (T[0] != 0 && T[1] != 0);
	Ganador();
	system("pause");
}

void coor() {
	for (int a = 0; a < 4; a++)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				G[a][i][j] = " ";

			}
		}
	}
	for (int a = 0; a < 2; a++)
	{
		for (int i = 0; i <= 5; i++)
		{
			for (int j = 0; j <= 5; j++)
			{
				P[1][i][j] = 0;
			}
		}
	}
	G[0][0][0] = " ";
}

void J1() {
	int f, c;
	cout << "*** Jugador 1 ***\n";
	impresion1();
	cout << "Coloca 5 barcos: ";
	for (int i = 0; i < 5; i++)
	{
		
		cout << "Barco " << (i + 1) << endl;
		
		cout << "fila: ";
		f=repet();
		cout << "columna: ";
		c = repet();
		while (P[0][f - 1][c - 1] == 1)
		{
			cout << "Ese valor ya esta registrado, intentelo de nuevo: \n";
			cout << "fila: ";
			f = repet();
			cout << "columna: ";
			c = repet();
		}
		G[0][f - 1][c - 1] = "B";
		P[0][f - 1][c - 1] = 1;
		system("cls");
		cout << "******** Battleship ********\n\n";
		cout << "*** Jugador 1 ***\n";
		impresion1();
	}
	cout << "Estos son sus barcos jugador 1\n";
}
void impresion1() {
	int e = 1, n = 0;
	for (int i = 0; i <= 11; i++) {
		if (i % 2 == 0) {
			if (i == 0) {
				for (int j = 0; j <= 5; j++) {
					if (j == 0) {
						cout << " " << " " << " " << "  " << "  ";
					}
					else {
						cout << "  " << j << "  ";
					}
				}
				cout << endl;
				cout << endl;
			}
			else {
				for (int j = 0; j < 2; j++)
				{
					if (j == 0) {
						cout << "  " << e << "  " << "  ";
						e = e + 1;
					}
					else
					{
						for (int j = 0; j < 5; j++) {
							cout << "| " << G[0][n][j] << " |";
						}
						n = n + 1;
					}
				}
				cout << endl;
			}

		}
		else {
			for (int j = 0; j <= 5; j++) {
				if (j == 0)
				{
					cout << " " << " " << " " << "  " << "  ";
				}
				else {
					cout << " --- ";
				}

			}
			cout << endl;
		}

	}
}

void J2() {
	system("cls");
	int f, c;
	cout << "******** Battleship ********\n\n";
	cout << "*** Jugador 2 ***\n";
	impresion2();
	cout << "Coloca 5 barcos: ";
	for (int i = 0; i < 5; i++)
	{
		cout << "Barco " << (i + 1) << endl;
		cout << "fila: ";
		f = repet();
		cout << "columna: ";
		c = repet();
		while (P[1][f - 1][c - 1] == 1)
		{
			cout << "Ese valor ya esta registrado, intentelo de nuevo: \n";
			cout << "fila: ";
			f = repet();
			cout << "columna: ";
			c = repet();
		}
		G[1][f - 1][c - 1] = "B";
		P[1][f - 1][c - 1] = 1;
		system("cls");
		cout << "******** Battleship ********\n\n";
		cout << "*** Jugador 2 ***\n";
		impresion2();
	}
	cout << "Estos son sus barcos jugador 2\n";
}
void impresion2() {
	int e = 1, n = 0;
	for (int i = 0; i <= 11; i++) {
		if (i % 2 == 0) {
			if (i == 0) {
				for (int j = 0; j <= 5; j++) {
					if (j == 0) {
						cout << " " << " " << " " << "  " << "  ";
					}
					else {
						cout << "  " << j << "  ";
					}
				}
				cout << endl;
				cout << endl;
			}
			else {
				for (int j = 0; j < 2; j++)
				{
					if (j == 0) {
						cout << "  " << e << "  " << "  ";
						e = e + 1;
					}
					else
					{
						for (int j = 0; j < 5; j++) {
							cout << "| " << G[1][n][j] << " |";
						}
						n = n + 1;
					}
				}
				cout << endl;
			}

		}
		else {
			for (int j = 0; j <= 5; j++) {
				if (j == 0)
				{
					cout << " " << " " << " " << "  " << "  ";
				}
				else {
					cout << " --- ";
				}

			}
			cout << endl;
		}

	}
}

void P1() {
	system("cls");

	int b = 0;
	cout << "******** Battleship ********\n\n";
	cout << "Turno jugador 1\n";

	cout << "Donde cree que esta el barco de su oponente\n";
	impresion3();
	validacion1();
	cout << "Quiere ver sus barcos: 1.- Si  2.-No \n";
	cin >> b;
	Barcos1(b);
	system("pause");
}
void impresion3() {
	int e = 1, n = 0;
	for (int i = 0; i <= 11; i++) {
		if (i % 2 == 0) {
			if (i == 0) {
				for (int j = 0; j <= 5; j++) {
					if (j == 0) {
						cout << " " << " " << " " << "  " << "  ";
					}
					else {
						cout << "  " << j << "  ";
					}
				}
				cout << endl;
				cout << endl;
			}
			else {
				for (int j = 0; j < 2; j++)
				{
					if (j == 0) {
						cout << "  " << e << "  " << "  ";
						e = e + 1;
					}
					else
					{
						for (int j = 0; j < 5; j++) {
							cout << "| " << G[2][n][j] << " |";
						}
						n = n + 1;
					}
				}
				cout << endl;
			}

		}
		else {
			for (int j = 0; j <= 5; j++) {
				if (j == 0)
				{
					cout << " " << " " << " " << "  " << "  ";
				}
				else {
					cout << " --- ";
				}

			}
			cout << endl;
		}

	}
}
void validacion1() {
	int f, c;
	cout << "Fila: ";
	f=repet();

	cout << "Columna: ";
	c=repet();
	if (P[1][f - 1][c - 1] == 2)
	{
		cout << "Ya ingreso esas coordenadas intentelo de nuevo:\n";
		validacion1();

	}
	else {
		if (P[1][f - 1][c - 1] == 1) {
			P[1][f - 1][c - 1] = 2;
			G[2][f - 1][c - 1] = "D";
			G[1][f - 1][c - 1] = "D";
			T[1] = T[1] - 1;
			impresion3();
		}
		else {
			G[2][f - 1][c - 1] = "X";
			P[1][f - 1][c - 1] = 2;
			impresion3();
		}
	}

}
void Barcos1(int b) {

	while (b > 2 || b < 1)
	{
		cout << "Valor Incorrecto, Vueva a intntarlo: ";
		cin >> b;
	}
	if (b == 1) {
		impresion1();
	}
	else {

	}

}

void P2() {
	system("cls");
	
	int b = 0;
	cout << "******** Battleship ********\n\n";
	cout << "Turno jugador 2\n";

	cout << "Donde cree que esta el barco de su oponente\n";
	impresion4();
	validacion2();
	cout << "Quiere ver sus barcos: 1.- Si  2.-No \n";
	cin >> b;
	Barcos2(b);
	system("pause");
}
void impresion4() {
	int e = 1, n = 0;
	for (int i = 0; i <= 11; i++) {
		if (i % 2 == 0) {
			if (i == 0) {
				for (int j = 0; j <= 5; j++) {
					if (j == 0) {
						cout << " " << " " << " " << "  " << "  ";
					}
					else {
						cout << "  " << j << "  ";
					}
				}
				cout << endl;
				cout << endl;
			}
			else {
				for (int j = 0; j < 2; j++)
				{
					if (j == 0) {
						cout << "  " << e << "  " << "  ";
						e = e + 1;
					}
					else
					{
						for (int j = 0; j < 5; j++) {
							cout << "| " << G[3][n][j] << " |";
						}
						n = n + 1;
					}
				}
				cout << endl;
			}

		}
		else {
			for (int j = 0; j <= 5; j++) {
				if (j == 0)
				{
					cout << " " << " " << " " << "  " << "  ";
				}
				else {
					cout << " --- ";
				}

			}
			cout << endl;
		}

	}
}
void validacion2() {
	int f, c;
	cout << "Fila: ";
	f = repet();
	cout << "Columna: ";
	c = repet();
	if (P[0][f - 1][c - 1] == 2)
	{
		cout << "Ya ingreso esas coordenadas intentelo de nuevo:\n";
		validacion2();

	}
	else {
		if (P[0][f - 1][c - 1] == 1) {
			P[0][f - 1][c - 1] = 2;
			G[3][f - 1][c - 1] = "D";
			G[0][f - 1][c - 1] = "D";
			T[2] = T[2] - 1;
			impresion4();
		}
		else {
			G[3][f - 1][c - 1] = "X";
			P[0][f - 1][c - 1] = 2;
			impresion4();
		}
	}

}
void Barcos2(int b) {

	while (b > 2 || b < 1)
	{
		cout << "Valor Incorrecto, Vueva a intntarlo: ";
		cin >> b;
	}
	if (b == 1) {
		impresion2();
	}
	else {
	}

}

void Ganador() {
	if (T[0] > T[1]) {
		cout << "\n\nGana Jugador 1\n\n";
	}
	else {
		cout << "\n\nGana Jugador 2\n\n";
	}
}

int repet() {
	int r;
	cin >> r;
	while (r>5 || r<1)
	{
		cout <<"Valor incorrecto, ingrese un numero entre el 1 y el 5: ";
		cin >> r;
	}
	return r;
}