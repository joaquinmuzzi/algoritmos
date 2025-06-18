package holamundo;

public abstract class Carta {

    String nombre;
    int elixir;

    public Carta(String nombre, int elixir) {
        this.nombre = nombre; 
        this.elixir = elixir; 
    }

    public abstract void invocar();

    public String toString() {
        return this.nombre + " es el nombre";
    }

    public static void main(String[] args) {
        ArrayList<Carta> Cartas = new ArrayList<>();

        Cartas.add(new Caballero("Toyota", "Corolla"));
        Cartas.add(new Bebe_dragon("Yamaha", "R3"));
        Cartas.add(new Arquera("Venzo", "Xtreme"));

        for (Carta v : Cartas) {
            v.invocar();
            v.mostrar();
        }
    }
}
