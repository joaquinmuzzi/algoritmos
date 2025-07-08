package holamundo;

class CursoMarketing extends Curso {
    CursoMarketing() {
        super("Curso de Marketing", 25);
    }

    @Override
    void inscribirEstudiante() {
        System.out.println("Inscripción completada al Curso de Survival Hunter PVE.");
        System.out.println("Material entregado: PDFs de estrategias y casos reales.\n");
    }
}