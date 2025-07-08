package holamundo;

class Texto extends Publicacion {
    Texto(String autor, String fechaPublicacion) {
        super(autor, fechaPublicacion);
    }

    public void mostrarContenido() {
        System.out.println("Leyendo texto de " + autor);
    }

    public void compartir() {
        System.out.println("Compartiendo texto por blog.");
    }
}