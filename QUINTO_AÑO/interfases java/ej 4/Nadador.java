package holamundo;

class Nadador implements Competidor {
    @Override
    public void entrenar() {
        System.out.println("Nadador entrenando técnica de crol y respiración.");
    }

    @Override
    public void competir() {
        System.out.println("Nadador compitiendo en estilo libre 200 metros.\n");
    }
}