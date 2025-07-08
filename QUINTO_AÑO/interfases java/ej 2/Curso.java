/* Ejejercicio 2:

Clase abstracta Curso con atributos: titulo, duracionHoras.

Método abstracto inscribirEstudiante().

Subclases: CursoProgramacion, CursoArteDigital, CursoMarketing.

Cada uno imprime un mensaje diferente de inscripción y material entregado.
Crear un listado de cursos e inscribir estudiantes. */

package holamundo;

import java.util.ArrayList;

abstract class Curso {
    String titulo;
    int duracionHoras;

    Curso(String titulo, int duracionHoras) {
        this.titulo = titulo;
        this.duracionHoras = duracionHoras;
    }

    abstract void inscribirEstudiante();
    public static void main(String[] args) {
        ArrayList<Curso> cursos = new ArrayList<>();

        cursos.add(new CursoProgramacion());
        cursos.add(new CursoArteDigital());
        cursos.add(new CursoMarketing());

        for (Curso curso : cursos) {
            curso.inscribirEstudiante();
        }
    }
}