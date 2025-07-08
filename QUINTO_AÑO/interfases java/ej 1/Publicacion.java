/* Ejercicio 1:

Crear una clase abstracta Publicacion con atributos: autor, fechaPublicacion.

Métodos abstractos: mostrarContenido() y compartir().

Subclases: Foto, Video, Texto. Cada una muestra contenido y forma de compartir distinta.

Crear un feed con diferentes publicaciones y recorrerlo mostrando el contenido y compartiéndolo. */

package holamundo;

import java.util.ArrayList;

public abstract class Publicacion {

	String autor, fechaPublicacion;

	public Publicacion(String autor, String fechaPublicacion) {
		this.autor = autor;
		this.fechaPublicacion = fechaPublicacion;
	}

	public abstract void mostrarContenido();
	public abstract void compartir();

	public static void main(String[] args) {
        ArrayList<Publicacion> feed = new ArrayList<>();
        feed.add(new Foto("Alvaro", "2023-07-01"));
        feed.add(new Video("Lucía", "2023-06-28"));
        feed.add(new Texto("Carlos", "2023-06-25"));

        for(Publicacion pub : feed) {
            pub.mostrarContenido();
            pub.compartir();
            System.out.println("----------------------");
        }
	}

}