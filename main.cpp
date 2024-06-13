#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double A, B, C, D; // Notas del alumno.
    double E; // Nota del examen.
    double F; // Promedio de las primeras notas (A, B, C, D).
    double G; // Resultado total en caso de estar en examen.
    cin >> A >> B >> C >> D;
    F = ((A*2) + (B*3) + (C*4) + (D*1)) / 10;
    cout << fixed << setprecision(1);
    cout << "Media: " << F << "\n";
    if (F >= 7.0){
        cout << "Aluno aprovado.\n";
    } else if (F < 5.0){
               cout << "Aluno reprovado.\n";
           } else {
                      cout << "Aluno em exame.\n";
                      cin >> E;
                      cout << "Nota do exame: " << E << "\n";
                      G = (F + E) / 2;
                      if (G >= 5.0){
                          cout << "Aluno aprovado.\n";
                      } else {
                                 cout << "Aluno reprovado.\n";
                             }
                      cout << fixed << setprecision(1);
                      cout << "Media final: " << G << "\n";
                  }
}
