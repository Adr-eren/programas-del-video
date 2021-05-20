/*Dep3_Prog2:
Verificar la hora*/
#include <stdio.h>

int main()
{
    int hora, minutos, segundos; //puedes poner comentarios
    printf("\n Introduce las horas");
    scanf("%d", &hora);
    printf("\n Introduce los minutos");
    scanf("%d", &minutos);
    printf("\n Introduce los segundos");
    scanf("%d", &segundos);

    if ( (horas0 && horas23)   
         (minutos>=0 && minutos<=59)&&
         (segundos>=0 && segundos<=59)
       )
    {
        printf("\n El formato de hora es correcto")
    }
    else
    {
        printf("\n El formato de hora es incorrecto")
    }
    return 0;
}