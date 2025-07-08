package holamundo;

class InstalacionInteractiva extends ObraArte {
    InstalacionInteractiva(String titulo, String autor) {
        super(titulo, autor);
    }

    @Override
    void exhibir() {
        System.out.println("🌀 Instalación Interactiva: \"" + titulo + "\" de " + autor);
        System.out.println("   El visitante puede tocar sensores y generar sonidos y luces.\n");
    }
}