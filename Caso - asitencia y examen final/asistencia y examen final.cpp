
#include <iostream>
#include <string>

using namespace std;

int main() {

	int asistencia;
	cout << "Sistema de verificacion de asistencia para presentar el examen final." << endl;
	cout << "\nIntroduzca su porcentaje de asistencia: \n";
	cin >> asistencia;

	if (asistencia >= 80) {
		cout << "Cuentas con el porcentaje necesario de asistencias para presentar el examen final" << endl;
	}
	else{
		cout << "No cumples con el porcentaje minimo de asistencia requerido para presentar el examen final." << endl;
	}
	return 0;
}
