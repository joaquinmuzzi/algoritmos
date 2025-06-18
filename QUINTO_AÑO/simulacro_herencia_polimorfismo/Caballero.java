package holamundo;

public class Caballero extends Carta {
    public Caballero(String nombre, int elixir) {
        super(nombre, elixir);
    }

    @Override
    public void invocar() {
        System.out.println("El caballero entra en combate");
    }

    public String toString() {
        return this.nombre + " es el nombre";
    }
}   