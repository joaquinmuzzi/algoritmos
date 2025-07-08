package holamundo;

class Foto extends Publicacion {
    Foto(String autor, String fechaPublicacion) {
        super(autor, fechaPublicacion);
    }

    public void mostrarContenido() {
        System.out.println("Mostrando una foto de " + autor);
    }

    public void compartir() {
        System.out.println("Compartiendo foto por Instagram.");
    }
}