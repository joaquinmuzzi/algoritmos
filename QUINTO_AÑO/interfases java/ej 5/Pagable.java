package holamundo;

import java.util.ArrayList;

interface Pagable {
    void realizarPago();

     public static void main(String[] args) {
        ArrayList<Pagable> carrito = new ArrayList<>();

        carrito.add(new ProductoFisico("Auriculares Bluetooth"));
        carrito.add(new ServicioDigital("Suscripción a plataforma de streaming"));
        carrito.add(new ProductoFisico("Libro físico"));
        carrito.add(new ServicioDigital("Curso online de fotografía"));

        System.out.println("🛒 Simulación de pago de ítems en el carrito:\n");

        for (Pagable item : carrito) {
            item.realizarPago();
        }
    }
}