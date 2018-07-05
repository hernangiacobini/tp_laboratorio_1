#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "movie.h"
#include "paginaWeb.h"

static void escribirPelicula(FILE* pFile, EMovie* pelicula);

int generarPaginaWeb(char* nombre, ArrayList* pArrayPeliculas)
{
    int retorno = -1;
    int i;

    FILE* inicioWeb = fopen("inicioWeb.txt","r");
    FILE* finWeb = fopen("finWeb.txt","r");
    FILE* webPeliculas = fopen(strcat(nombre,".html"), "w");

    while(!feof(inicioWeb))
    {
        fprintf(webPeliculas,"%c",fgetc(inicioWeb));
    }
    fclose(inicioWeb);

    if(webPeliculas != NULL)
    {
        retorno = 0;
        //fprintf(webPeliculas,"%s",textoCabeceraWeb);

        for(i=0;i<al_len(pArrayPeliculas);i++)
        {
            escribirPelicula(webPeliculas, al_get(pArrayPeliculas, i));
        }

        while(!feof(finWeb))
        {
            fprintf(webPeliculas,"%c",fgetc(finWeb));
        }
        fclose(finWeb);
    }
    fclose(webPeliculas);
return retorno;
}


static void escribirPelicula(FILE* pFile, EMovie* pelicula)
{
    char titulo[50];
    char genero[30];
    int duracion;
    char descripcion[256];
    int puntaje;
    char linkImg[256];

    movie_getTitulo(pelicula, titulo);
    movie_getGenero(pelicula, genero);
    movie_getDuracion(pelicula, &duracion);
    movie_getDescripcion(pelicula, descripcion);
    movie_getPuntaje(pelicula, &puntaje);
    movie_getLinkImg(pelicula, linkImg);

    fprintf(pFile, "<article class='col-md-4 article-intro'>\n"
     "\t<a href='#'>\n"
     "\t\t<img class='img-responsive img-rounded' src='%s' alt=''>\n"// linkImg
     "\t</a>\n"
     "\t<h3>\n"
     "\t\t<a href='#'>%s</a>\n"// titulo
     "\t</h3>\n"
     "\t<ul>\n"
     "\t\t<li>G&eacutenero:%s</li>\n"// genero
     "\t\t<li>Puntaje:%d</li>\n"// puntaje
     "\t\t<li>Duraci&oacuten:%d</li>\n"// duracion
     "\t</ul>\n"
     "\t<p>%s</p>\n"// descripcion
     "</article>\n",linkImg,titulo,genero,puntaje,duracion,descripcion);
}
