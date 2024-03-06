
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	name[20];
	int     opt1;
	char	bizum[20];
	int	i;

	printf("\033[0;32m");
	printf("Hola, amiga. Te estaba esperando.\nLa verdad es que hace mucho que no pasa nadie por aquí...\n¿Cómo te llamas? \n");
	scanf("%s", name);
	if ((strcmp(name, "Jorge") == 0) || (strcmp(name, "jorge") == 0))
	{
		printf("Buah, me flipa tu nombre.\n");
	}
	printf("Un gusto conocerte, %s. Vaya nombre... para gustos los colores. No siempre se puede acertar. Tomar buenas decisiones depende de factores como la información disponible, los objetivos personales, la claridad emocional o la flexibilidad.\n", name);
	printf("Bueno, ¿quieres escuchar una oferta tentadora, %s?\n", name);
	printf("Opción 1: Aceptar la oferta tentadora.\n");
	printf("Opción 2: Rechazar la oferta y seguir tu camino.\n");
	printf("¿Qué decides hacer? (Ingresa el número de la opción): ");
	scanf("%d", &opt1);
	if (opt1 == 2)
        {
		printf("Oh, qué decepcionante. Parece que no tienes lo que se necesita para enfrentar los desafíos de este mundo...\n");
		printf("Que tengas un buen día, %s. Ojalá encuentres lo que estás buscando...\n", name);
		return (0);
  	}
    	if (opt1 != 1 && opt1 != 2)
    	{
		printf("Opción no válida. No puedo seguir jugando contigo si no sabes ni seguir estas simples reglas...\nNo te voy a engañar, %s, no creo que te vaya muy bien así y solo espero que el mundo sea misericordioso contigo.\nAdiós.\n", name);
		return (0);
	}
	else if (opt1 == 1)
	{	
		printf("Sabía que tomarías la decisión correcta, %s.\n", name);
		printf("Pero recuerda, todo tiene un precio...\n");
		printf("En este caso se trata de un precio en euros. Acepto bizum al 617847562.\nCuando lo hayas hecho, por favor, introduce el valor que hayas enviado.\n");
		scanf("%s", bizum);
		printf("Amiga... ¿de verdad crees que por %s€ voy a seguir perdiendo mi tiempo?\nEstoy ocupadísima y me has enfadado. Me voy. Adiós, %s, y mucha suerte, amorch.\n", bizum, name);
		usleep(5000000);
		i = 0;
		while (i < 4)
		{
			printf("\033[5m");
			printf("	   _______\n");
			printf("	 /         \\\n");
			printf("	|  O     O  |\n");
			printf("	|     <     |\n");
			printf("	 \\    _    /\n");
			printf("	  \\ (| |) /\n");
			printf("	   \\ | | /\n");
			if (i <= 2)
			{
				printf("	     | |  \n");
			}
			if (i <= 1)
			{
				printf("	     | |\n");
			}
			if (i == 0)
			{
				printf("	     | |\n");
			}
			printf("	    _| |_\n");
			printf("	   |_____|\n");
			usleep(500000);
			printf("\n");		
			printf("\033[A\033[2K");
			printf("\n");
			i++;
		}
			printf("\033[5m");
			printf("    x     _______       + x\n");
			printf("   + X   /         \\    +\n");
			printf("	|  .     .  |\n");
			printf("	|     <     |\n");
			printf("fin      \\    _    /\n");
			printf("	  \\ (| |) /        del\n");
			printf("	   \\ | | /\n");
			printf("	    _| |_    juego\n");
			printf("	   |_____|\n");
	}
	printf("𝐣𝐨𝐫𝐠𝐞𝐳𝐞𝐥𝐚𝐳\n");
	return (0);
}
