package holamundo;

public class Arquera extends Carta{
    public Arquera(String nombre, int elixir) {
        super(nombre, elixir); 
    }

    @Override
    public void invocar() {
        System.out.println("Doble flecha al enemigo");
    }

    public String toString() {
        return this.nombre + " es el nombre";
    }
}