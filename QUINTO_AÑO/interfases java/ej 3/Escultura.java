package holamundo;

class Escultura extends ObraArte {
    Escultura(String titulo, String autor) {
        super(titulo, autor);
    }

    @Override
    void exhibir() {
        System.out.println("🗿 Escultura: \"" + titulo + "\" de " + autor);
        System.out.println("   Exhibida en pedestal con iluminación cenital.\n");
    }
}