package holamundo;

class Pintura extends ObraArte {
    Pintura(String titulo, String autor) {
        super(titulo, autor);
    }

    @Override
    void exhibir() {
        System.out.println("🎨 Pintura: \"" + titulo + "\" de " + autor);
        System.out.println("   Se exhibe en una pared con marco dorado.\n");
    }
}