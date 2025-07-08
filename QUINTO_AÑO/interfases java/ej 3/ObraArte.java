/* Ejercicio 3

Clase abstracta ObraArte con atributos: titulo, autor.

Método abstracto exhibir().

Subclases: Pintura, Escultura, InstalacionInteractiva.

Cada obra exhibe su forma única de interacción.

Simular una galería de arte virtual exhibiendo cada obra. */

package holamundo;

import java.util.ArrayList;

abstract class ObraArte {
    String titulo;
    String autor;

    ObraArte(String titulo, String autor) {
        this.titulo = titulo;
        this.autor = autor;
    }

    abstract void exhibir();

    public static void main(String[] args) {
        ArrayList<ObraArte> galeria = new ArrayList<>();

        galeria.add(new Pintura("La noche estrellada", "Vincent van Gogh"));
        galeria.add(new Escultura("El pensador", "Auguste Rodin"));
        galeria.add(new InstalacionInteractiva("Reflejos digitales", "Alvaro Vega"));

        System.out.println("🖼️ Bienvenido a la Galería de Arte Virtual\n");

        for (ObraArte obra : galeria) {
            obra.exhibir();
        }
    }
}