package holamundo;
import java.util.ArrayList;
    

public abstract class Vehiculo {

    String marca, modelo;
    int año;
    boolean encendido = false;    

    public Vehiculo(String marca, String modelo, int año) {
        this.marca = marca;
        this.modelo = modelo;
        this.año = año;
    }

    public void encender() {
        this.encendido = true;
    } 

    public void estado() {
        System.out.println(toString());
    }

    public String toString() {
        return "Marca: " + this.marca + " | Modelo: " + this.modelo + " | Año: " + this.año + " | Encendido: " this.encendido;
    }
    


}

public class Auto extends Vehiculo{

    public Auto(String marca, String modelo, int año) {
        super(marca, modelo, año);
    }

    @Override
    public void encender() {
        this.encendido = true;
        System.out.println("se prendio el auto");
    } 

}

public class Moto extends Vehiculo{

    public Moto(String marca, String modelo, int año) {
        super(marca, modelo, año);
    }

    @Override
    public void encender() {
        this.encendido = true;
        System.out.println("se prendio la moto");
    } 


}public class Bici extends Vehiculo {

    public Bici(String marca, String modelo, int año) {
        super(marca, modelo, año);

    }

    @Override
    public void encender() {
        System.out.println("la bici no se puede prender")
    } 

    @Override
    public String toString() {
        return "Marca: " + this.marca + " | Modelo: " + this.modelo + " | Año: " + this.año;
    }


}

//------------------------------------------------------------------------------------------------------//

public abstract class Animal {

    String raza, sonido;

    public Animal(String raza, String sonido) {
        this.raza = raza;
        this.sonido = sonido;
    }

    public abstract void hacerSonido() {
        System.out.println(this.sonido);
    }
    
    public void estado() {
        System.out.println(toString());
    }

    public String toString() {
        return "Raza: " + this.raza + " | Sonido: " + this.sonido;
    }
    
    public static void main(String[] args) {
        ArrayList<Animal> zoologico = new ArrayList<>();

        zoologico.add(new Perro("Raza 1", "Guau"));
        zoologico.add(new Vaca ("Raza 2", "Muuu"));
        zoologico.add(new Gato ("Raza 3", "Miau"));
    }

}

public class Perro extends Animal {
    public Perro(String raza, String sonido) {
        super(raza, sonido);
    }
}

public class Vaca extends Animal {
    public Vaca(String raza, String sonido) {
        super(raza, sonido);
    }
}

public class Gato extends Animal {
    public Gato(String raza, String sonido) {
        super(raza, sonido);
    }
}

//------------------------------------------------------------------------------------------------------//

public abstract class Producto {

    String nombre
    int id;
    double precio;
    boolean perecedero;


    public Animal(String nombre, int id, double precio, boolean perecedero) {
        this.nombre = nombre;
        this.id = id;
        this.precio = precio;
        this.perecedero = perecedero;
    }

    public abstract void calcularPrecioFinal() {
        if(perecedero) {

        }
    }
    
    public void estado() {
        System.out.println(toString());
    }

    public String toString() {
        return "Id: " + this.id + " | Nombre: " + this.precio + " | Precio: " + this.precio;
    }
    
    public static void main(String[] args) {
        ArrayList<Producto> mercado = new ArrayList<>();

        mercado.add(new productoPerecedero(1, "Manzana", 1000, 9));
        mercado.add(new productoNoPerecedero (2, "Arroz", 1500));
    }

}

public class productoPerecedero extends Producto {
    int diasParaVencer;
    public productoPerecedero(int id, String nombre, double precio, int diasParaVencer) {
        super(id, nombre, precio);
        this.diasParaVencer = diasParaVencer;
    }

    public abstract void calcularPrecioFinal() {
        if(diasParaVencer < 10) {
            precio *= 0.8;
        }
    }
}

public class productoNoPerecedero extends Producto {
    public productoNoPerecedero(int id, String nombre, double precio) {
        super(id, nombre, precio);
    }
}