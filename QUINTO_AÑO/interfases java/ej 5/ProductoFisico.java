package holamundo;

class ProductoFisico implements Pagable {
    String nombre;

    ProductoFisico(String nombre) {
        this.nombre = nombre;
    }

    @Override
    public void realizarPago() {
        System.out.println("💼 Pago del producto físico \"" + nombre + "\" realizado con tarjeta o efectivo en caja.");
    }
}