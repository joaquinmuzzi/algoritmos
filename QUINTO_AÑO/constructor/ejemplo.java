
  package holamundo;
  
    public class Articulo {
        String nombre;
        double precio;

        // CONSTRUCTOR
        public Articulo(String nombreParametro, double precioParametro) {
            this.nombre = nombreParametro;
            this.precio = precioParametro;
        }

        // SETTERS 
        public void setNombre(String nombre) {
            set this.nombre = nombre;
        }
        public void setPrecio(String precio) {
            set this.precio = precio;
        }
        
        // FUNCIONES
        void cupoDescuento( int descuento ) {
            this.precio = precio * (1 - descuento / 100);
        }
        void mostrar() {
            System.out.println("Nombre: " + this.nombre + " | Precio: $" + this.precio);
        }

        // MAIN
        public static void main(String[] args){
            Articulo a = new Articulo("sandia", 100);
            a.mostrar();
            a.cupoDescuento(10);
            a.mostrar();
        }

    }