package holamundo;

class ServicioDigital implements Pagable {
    String nombre;

    ServicioDigital(String nombre) {
        this.nombre = nombre;
    }

    @Override
    public void realizarPago() {
        System.out.println("🌐 Pago del servicio digital \"" + nombre + "\" realizado mediante transferencia online.");
    }
}