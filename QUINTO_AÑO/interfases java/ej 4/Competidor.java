/* Ejercicio 4:
CCrear interfaz Competidor con métodos: entrenar() y competir().

Clases Atleta, Ciclista, Nadador implementan la interfaz con mensajes distintos.

Crear una lista de competidores y hacer que todos entrenen y compitan. */

package holamundo;

import java.util.ArrayList;

interface Competidor {
    void entrenar();
    void competir();

    public static void main(String[] args) {
        ArrayList<Competidor> competidores = new ArrayList<>();

        competidores.add(new Atleta());
        competidores.add(new Ciclista());
        competidores.add(new Nadador());

        System.out.println("🏅 Simulación de Entrenamiento y Competencia\n");

        for (Competidor c : competidores) {
            c.entrenar();
            c.competir();
        }
    }
}