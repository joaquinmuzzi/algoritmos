package holamundo;

class Atleta implements Competidor {
    @Override
    public void entrenar() {
        System.out.println("Atleta entrenando con ejercicios de velocidad y fuerza.");
    }

    @Override
    public void competir() {
        System.out.println("Atleta compitiendo en carrera de 100 metros.\n");
    }
}