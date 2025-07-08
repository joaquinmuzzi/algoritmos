package holamundo;

class Video extends Publicacion {
    Video(String autor, String fechaPublicacion) {
        super(autor, fechaPublicacion);
    }

    public void mostrarContenido() {
        System.out.println("Reproduciendo video de " + autor);
    }

    public void compartir() {
        System.out.println("Compartiendo video por YouTube.");
    }
}