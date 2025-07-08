package holamundo;

class Ciclista implements Competidor {
    @Override
    public void entrenar() {
        System.out.println("Ciclista entrenando en montaña para mejorar resistencia.");
    }

    @Override
    public void competir() {
        System.out.println("Ciclista compitiendo en circuito de ruta profesional.\n");
    }
}