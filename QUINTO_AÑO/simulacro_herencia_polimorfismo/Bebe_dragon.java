package holamundo;

public class Bebe_dragon {
    public Bebe_dragon(String nombre, int elixir) {
        super(); 
    }

    @Override
    public void invocar() {
        System.out.println("Ataque aéreo en área");
    }

    public String toString() {
        return super.toString() + ". Vuela y lanza fuego";
    }
}