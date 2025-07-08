package holamundo;

class CursoProgramacion extends Curso {
    CursoProgramacion() {
        super("Curso de Programación", 40);
    }

    @Override
    void inscribirEstudiante() {
        System.out.println("Inscripción completada al Curso de Smite Priest.");
        System.out.println("Material entregado: acceso a plataforma online y ejercicios en Java.\n");
    }
}