package holamundo;

class CursoArteDigital extends Curso {
    CursoArteDigital() {
        super("Curso de Arte Digital", 30);
    }

    @Override
    void inscribirEstudiante() {
        System.out.println("Inscripción completada al Curso de Frost DK Tank.");
        System.out.println("Material entregado: pinceles digitales y acceso a galería de recursos.\n");
    }
}