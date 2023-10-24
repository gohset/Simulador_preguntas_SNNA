//Simulador de preguntas de Sistema Nacional de Nivelacion y Admision(SNNA).

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int op=0;
while(op<4)
{
printf("\t\tJuego Psicotecnico\n");

printf("Opcion 1: Actitud Verbal\n");
printf("Opcion 2: Actitud Numerica\n");
printf("Opcion 3: Razonamiento Abstracto\n");
printf("Opcion 4: SALIR\n");
printf("Ingrese la opcion:  ");
scanf("%i",&op);
printf("\n");

switch(op)
{
case 1:
printf("\tActitud Verbal\n");
printf("Es la actitud o capacidad de analisis que poseen los seres humanos para\n");
printf("manejar el lenguaje simbolico, el empleo correcto de vocabulario, significado\n");
printf("de palabras, frases, oraciones y parrafos.\n\n");

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
textcolor(9);cprintf("a) SINONIMOS\n");
textcolor(2);cprintf("b) ANTONIMOS\n");
textcolor(3);cprintf("c)  ANALOGIAS\n");
textcolor(4);cprintf("d) REFRANES\n ");
textcolor(5);cprintf("e) SELECCION LOGICA\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
printf("\n");
char omg[2];
char omg1[]={"a"};
printf("Ingrese su eleccion:  ");
scanf("%s",& omg);
clrscr();

if(strcmp(omg,omg1)==0)
{

printf("\tSINONIMOS\n");
printf("Son  los   vocablos   que   estan   comprendidos   en  el  mismo  campo  semantico,\n");
printf("tienen la misma categoria gramatical y, sobre todo, expresan significados paresidos\n\n");
printf("Por ejemplo:\n");
printf("Adobar-sazonar-aderezar-condimentar\n");
printf("Admirardo-asombrado-fascinado-sorprendido-maravillado-encantado\n");

printf("En el siguiente Items, usted debera elegir la palabra con significado similar\n");
printf("a la escrita con letra mayuscula.\n\n");
getch();
clrscr();
char ca[2];
char ca1[]={"a"};
//*********************************************************************
textcolor(2);cprintf("a) Fasil\n");
textcolor(3);cprintf("b) Normal\n");
textcolor(4);cprintf("c) Medio\n");
textcolor(5);cprintf("d) Dificil\n");
textcolor(6);cprintf("e) Experto\n\n");
//*********************************************************************
printf("Eliga en que categoria quiere jugar:  ");
scanf("%s",& ca);
clrscr();
int nu1=1;
if(strcmp(ca,ca1)==0)
{
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
textcolor(2);cprintf("Planteamiento N %i: ATENTO\n",nu1);
//**********************************************************************************************a1*
printf("\n");
printf("a) Enfocado \n");
printf("b) Distraido \n");
printf("c) Estudioso \n");
printf("d)Abrigado\n");
//*************************************************************************************************
char n[2];
int cont1=0;
char a[]={"a"};
printf("Ingrese su eleccion: ");
scanf("%s",& n);
strcmp(a,n);
printf("\n");
if(strcmp(a,n)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
printf("\n");
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/10: DORMIR\n\n",nu1);
//**********************************************************************************************a2*
printf("a) Despertar\n");
printf("b) Desvelar\n");
printf("c) Pernoctar\n");
printf("d) Madrugar\n");
//*************************************************************************************************
char c[2];
char y[]={"c"};
printf("Ingrese su eleccion: ");
scanf("%s",& c);
printf("\n");
if(strcmp(y,c)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamineto N %i/10: INFORMAR\n\n",nu1);
//**********************************************************************************************a3*
printf("a) Callar\n");
printf("b) Comunicar\n");
printf("c) Desinformar\n");
printf("d) Preguntar\n\n");
//*************************************************************************************************
char d[2];
char  x[]={"b"};
printf("Ingrese su eleccion: ");
scanf("%s",& d);
printf("\n");
if(strcmp(x,d)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/10: FLEXIBLE\n\n",nu1);
printf("\tCave recalcar que algunas palabras se le a onitido(quitado) las tildes \n");
//**********************************************************************************************a4*
printf("a) Delgado\n");
printf("b) Blando\n");
printf("c) Liviano\n");
printf("d) Plegable\n");  
printf("e) Dirigible\n\n");
//*************************************************************************************************
char f[2];
char w[]={"d"};
printf("Ingrese su eleccion:  ");
scanf("%s",& f);
printf("\n");
if(strcmp(w,f)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/10: ESPACIOSO\n\n",nu1);
//**********************************************************************************************a5*
printf("a) Ancho\n");
printf("b) Largo\n");
printf("c) Extenso\n");
printf("d) Bastante\n");
printf("e) Alto\n\n");
//*************************************************************************************************
char e[2];
char v[]={"c"};
printf("Ingrese su eleccion:  ");
scanf("%s",& e);
printf("\n");
if(strcmp(e,v)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/10: GRATO\n\n",nu1);
//**********************************************************************************************a6*
printf("a) Agradable\n");
printf("b) Sincero\n");
printf("c) Afable\n");
printf("d) Enojado\n");
printf("e) Confiable\n\n");
//*************************************************************************************************
char g[2];
char u[]={"a"};
printf("Ingrese su eleccion: ");
scanf("%s",& g);
printf("\n");
if(strcmp(g,u)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamineto N %i/10: ECLIPSE\n\n",nu1);
//**********************************************************************************************a7*
printf("a) Eco\n");
printf("b) Intercepcion\n");
printf("c) Crepusculo\n");
printf("d) Luz\n");
printf("e) Atardecer\n\n");
//*************************************************************************************************
char h[2];
char t[]={"b"};
printf("Ingrese su eleccion:  ");
scanf("%s",& h);
printf("\n");
if(strcmp(h,t)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/10: BAHIA\n\n",nu1);
//**********************************************************************************************a8*	
printf("a) Orilla\n");
printf("b) Mar\n");
printf("c) Rio\n");
printf("d) Encenada\n");
printf("e) Costa\n\n");
//*************************************************************************************************
char i[2];
char s[]= {"d"};
printf("Ingrese su eleccion:  ");
scanf("%s",& i);
printf("\n");
if(strcmp(i,s)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/10: CREYENTE\n\n",nu1);
//**********************************************************************************************a9*
printf("a) Verdadero\n");
printf("b) Inteligente\n");
printf("c) Mistico\n");
printf("d) Sabio\n");
printf("e) Capaz\n\n");
//*************************************************************************************************
char j[2];
char r[]={"c"};
printf("Ingrese su eleccion:  ");
scanf("%s",& j);
printf("\n");
if(strcmp(j,r)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
nu1++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamineto N %i/10: ANTORCHA\n\n",nu1);
//**********************************************************************************************10*
printf("a) Fosforo\n");
printf("b) Luz\n");
printf("c) Incendio\n");
printf("d) Tea\n");
printf("e) Explosion\n\n");
//*************************************************************************************************
char k[2];
char q[]={"d"};
printf("Ingrese su eleccion:  ");
scanf("%s",& k);
printf("\n");
if(strcmp(k,q)==0)
{
printf("Correcto\n");
cont1++;
}
else
{
printf("Incorrecto\n");
}
printf("\n");
printf("\tTotal puntuacion: %i/10",cont1);
}
getch();
clrscr();
/////////////////////////////////////////////////////////////////////////
char ca2[]={"b"};
if(strcmp(ca,ca2)==0)
{
int nu2=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
textcolor(3);cprintf("Planteamiento N %i/20: TRAGICO\n\n",nu2);
//**********************************************************************************************b1*
printf(" \n ");
printf("a) Destacado\n");
printf("b) Incomodo\n");
printf("c) Tragedia\n");
printf("d) Interesante\n");
printf("e) Fatidico\n");
//*************************************************************************************************
char l[2];
char p[]={"e"};
int cont2=0;
printf("Ingrese su eleccion:  ");
scanf("%s",& l);
printf("\n");
if(strcmp(l,p)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: INDULTAR\n\n",nu2);
//**********************************************************************************************b2*
printf("a) Adsolver\n");
printf("b) Castigar\n");
printf("c) Premiar\n");
printf("d) Resolver\n");
printf("e) Discutir\n\n");
//*************************************************************************************************
char m[2];
char o[]={"a"};
printf("Ingrese la eleccion:  ");
scanf("%s",& m);
printf("\n");
if(strcmp(m,o)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: COMPILAR\n\n",nu2);
//**********************************************************************************************b3*
printf("a) Impulsar\n");
printf("b) Agrupar\n");
printf("c) Faltar\n");
printf("d) Escoltar\n");
printf("e) Bienestar\n\n");
//*************************************************************************************************
char a1[2];
char a2[]={"b"};
printf("Ingrese su eleccion:  ");
scanf("%s",& a1);
printf("\n");
if(strcmp(a1,a2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ALCALOIDE\n\n",nu2);
//**********************************************************************************************b4*
printf("a) Alcohol\n");
printf("b) Alcancia\n"); //alcancía
printf("c) Alcanfor\n");
printf("d) Alguacil\n");
printf("e) Droga\n\n");
//*************************************************************************************************
char b1[2];
char b2[]={"e"};
printf("Ingrese su eleccion:  ");
scanf("%s",& b1);
printf("\n");
if(strcmp(b1,b2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: IDIOSINCRASIA\n\n",nu2);
//**********************************************************************************************b5*
printf("a) Figura\n");
printf("b) Arquetipo\n");
printf("c) Perfecto\n");
printf("d) Modo de ser\n");
printf("e) Desigualdad\n\n");
//*************************************************************************************************
char c1[2];
char c2[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& c1);
printf("\n");
if(strcmp(c1,c2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PREPONDERANCIA\n\n",nu2);
//**********************************************************************************************b6*
printf("a) Superioridad\n");
printf("b) Ventaja\n");
printf("c) Ansia\n");
printf("d) Proyecto\n");
printf("e) Garantia\n\n");
//*************************************************************************************************
char d1[2];
char d2[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& d1);
printf("\n");
if(strcmp(d1,d2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: QUERELLA\n\n",nu2);
//**********************************************************************************************b7*
printf("a) Ocio\n");
printf("b) Ilision\n");   //ilusión
printf("c) Firmeza\n");
printf("d) Susto\n");
printf("e) Pleito\n\n");
//*************************************************************************************************
char e1[2];
char e2[]={"e"};
printf("Ingrese su eleccion:    ");
scanf("%s",& e1);
printf("\n");
if(strcmp(e1,e2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: RIMBOMBAR\n\n",nu2);
//**********************************************************************************************b8*
printf("a) Jugar\n");
printf("b) Remedar\n");
printf("c) Presumir\n");
printf("d) Mejorar\n");
printf("e) Rezar\n\n");
//*************************************************************************************************
char f1[2];
char f2[]={"c"};
printf("Ingrese su eleccion:    ");
scanf("%s",& f1);
printf("\n");
if(strcmp(f1,f2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: MOHOSO\n\n",nu2);
//**********************************************************************************************b9*
printf("a) Tonico\n");  //tónico
printf("b) Herrumbroso\n");
printf("c) Informe\n");
printf("d) Mudo\n");
printf("e) Humedo\n"); //húmedo
//*************************************************************************************************
char g1[2];
char g2[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& g1);
printf("\n");
if(strcmp(g1,g2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PREDESTINADO\n\n",nu2);
//**********************************************************************************************10*
printf("a) Simplificado\n");
printf("b) Destino\n");
printf("c) Directivo\n");
printf("d) Afortunado\n");
printf("e) Integor\n\n");    //íntegro
//*************************************************************************************************
char h1[2];
char h2[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& h1);
printf("\n");
if(strcmp(h1,h2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: BENEVOLO\n\n",nu2);
//*********************************************************************************************b11*
printf("a) Amable\n");
printf("b) Perfecto\n");
printf("c) Adecuado\n");
printf("d) Modesto\n");
printf("e) Arrepentido\n\n");
//*************************************************************************************************
char i1[2];
char i2[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& i1);
printf("\n");
if(strcmp(i1,i2)==0)
{
printf("Correcto\n");
cont2++;
}
else 
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: LACERADO\n\n",nu2);
//*********************************************************************************************b12*
printf("a) Disgustado\n");
printf("b) Herido\n");
printf("c) Orlado\n");
printf("d) Agobiado\n");
printf("e) Confundido\n\n");
//*************************************************************************************************
char j1[2];
char j2[]={"b"};
printf("Ingrese su eleccion:    ");
scanf("%s",& j1);
printf("\n");
if(strcmp(j1,j2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: EXPLOTAR\n\n",nu2);
//*********************************************************************************************b13*
printf("a) Explorar\n");
printf("b) Conocer\n");
printf("c) Investigar\n");
printf("d) Vender\n");
printf("e) Aprovechar\n\n");
//*************************************************************************************************
char k1[2];
char k2[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& k1);
printf("\n");
if(strcmp(k1,k2)==0)
{
printf("Correcto\n");
cont2++;
}
else 
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PRECLARO\n\n",nu2);
//*********************************************************************************************b14*
printf("a) Leal\n");
printf("b) Ilustre\n");
printf("c) Valiente \n");
printf("d) Antiguo\n");
printf("e) Sagaz\n\n");
//*************************************************************************************************
char l1[2];
char l2[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& l1);
printf("\n");
if(strcmp(l1,l2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Palnteamiento N %i/20: DELIBERADO\n\n",nu2);
//*********************************************************************************************b15*
printf("a) Diacutido\n");
printf("b) Tragico\n");  //trágico
printf("c) Imprudente\n");
printf("d) Premeditado\n");
printf("e) Espantoso\n");
//*************************************************************************************************
char m1[2];
char m2[]={"d"};
printf("Ingrese su eleccion:    ");
scanf("%s",& m1);
printf("\n");
if(strcmp(m1,m2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: FRONDA\n\n",nu2);
//*********************************************************************************************b16*
printf("a) Espesura\n");
printf("b) Sombra\n");
printf("c) Montaña\n");
printf("d) Choza\n");
printf("e) Pradera\n\n");
//*************************************************************************************************
char o1[2];
char o2[]={"a"};
printf("Ingrese su eleccion:    ");
scanf("%s",& o1);
printf("\n");
if(strcmp(o1,o2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ABALDONAR\n\n",nu2);
//*********************************************************************************************b17*
printf("a) Afrentar\n");
printf("b) Elogio\n");
printf("c) Dejadez\n");
printf("d) Abandonar\n");
printf("e) Acrecentar\n\n");
//*************************************************************************************************
char p1[2];
char p2[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",&  p1);
printf("\n");
if(strcmp(p1,p2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: OPULENCIA\n\n",nu2);
//*********************************************************************************************b18*
printf("a) Riqueza\n");
printf("b) Bienestar\n");
printf("c) Premura\n");
printf("d) Decencia\n");
printf("e) Orden\n\n");
//*************************************************************************************************
char q1[2];
char q2[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& q1);
printf("\n");
if(strcmp(q1,q2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: DESACATO\n\n",nu2);
//*********************************************************************************************b19*
printf("a) Disciplinado\n");
printf("b) Desobediencia\n");
printf("c) Desafiar\n");
printf("d) Olvidadiso\n");
printf("e) Sensible\n\n");
//*************************************************************************************************
char r1[2];
char r2[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& r1);
printf("\n");
if(strcmp(r1,r2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
nu2++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: DECHADO\n\n",nu2);
//*********************************************************************************************b20*
printf("a) Ejemplo\n");
printf("b) Decidido\n");
printf("c) Delgado\n");
printf("d) Agradable\n");
printf("e) Lujurioso\n\n");
//*************************************************************************************************
char s1[2];
char s2[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& s2);
printf("\n");
if(strcmp(s1,s2)==0)
{
printf("Correcto\n");
cont2++;
}
else
{
printf("Incorrecto\n");
}
printf("\n");
int pro1=0;
pro1=cont2/2;
printf("\tTotal puntuacion:  %i/10",pro1);
getch();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
char ca3[]={"c"};
if(strcmp(ca,ca3)==0)
{
int nu3=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
textcolor(4);cprintf("Palnteamiento N %i/20: CORTIJO\n\n",nu3);
//**********************************************************************************************c1*
printf("\n");
printf("a) Cubil\n");
printf("b) Granja\n");
printf("c) Bohio\n");  //bihío
printf("d) Bote\n");
printf("e) Lagartija\n\n");
//*************************************************************************************************
char a3[2];
char a4[]={"b"};
int cont3=0;
printf("Ingrese su eleccion:   ");
scanf("%s",& a3);
printf("\n");
if(strcmp(a3,a4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ENHIESTO\n\n",nu3);
//**********************************************************************************************c2*
printf("a) Erguido\n");
printf("b) Funesto\n");
printf("c) Lineal\n");
printf("d) Corto\n");
printf("e) Extenso\n\n");
//*************************************************************************************************
char b3[2];
char b4[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& b3);
printf("\n");
if(strcmp(b3,b4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: INDULGENCIA\n\n",nu3);
//**********************************************************************************************c3*
printf("a) Tolerancia\n");
printf("b) Perdon\n");  //tilde en la <ó >
printf("c) Timido\n"); //tilde en la primera <í>
printf("d) Sociable\n");
printf("e) Elogio\n\n");
//*************************************************************************************************
char c3[2];
char c4[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& c3);
printf("\n");
if(strcmp(c3,c4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: OPROBIO\n\n",nu3);
//**********************************************************************************************c4*
printf("a) Germen\n"); 
printf("b) Insulto\n");
printf("c) Aprobar\n");
printf("d) Reputacion\n");
printf("e) Oponerse\n\n");
//*************************************************************************************************
char d3[2];
char d4[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& d3);
printf("\n");
if(strcmp(d3,d4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: SINUOSO\n\n",nu3);
//**********************************************************************************************c5*
printf("a) Confuso\n");
printf("b) Insignificante\n");
printf("c) Derecho\n");
printf("d) Ondulado\n");
printf("e) Sicero\n\n");
//*************************************************************************************************
char e3[2];
char e4[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& e3);
printf("\n");
if(strcmp(e3,e4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: LIMO\n\n",nu3);
//**********************************************************************************************c6*
printf("a) Limar\n");
printf("b) Plano\n");
printf("c) Roca\n");
printf("d) Lagartija\n");
printf("e) Granja\n\n");
//*************************************************************************************************
char f3[2];
char f4[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& f3);
printf("\n");
if(strcmp(f3,f4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PROFANO\n\n",nu3);
//**********************************************************************************************c7*
printf("a) Osado\n");
printf("b) Propago\n");
printf("c) Mundano\n");
printf("d) Miedoso\n");
printf("e) Experto\n\n");
//*************************************************************************************************
char g3[2];
char g4[]={"c"};
printf("Ingrese su eleccion:    ");
scanf("%s",& g3);
printf("\n");
if(strcmp(g3,g4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: INEFABLE\n\n",nu3);
//**********************************************************************************************c8*
printf("a) Indispensable\n");
printf("b) Ficticio\n");
printf("c) Vulgar\n");
printf("d) Admirable\n");
printf("e) Reservado\n\n");
//*************************************************************************************************
char h3[2];
char h4[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& h3);
printf("\n");
if(strcmp(h3,h4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: CONTINGENTE\n\n",nu3);
//**********************************************************************************************c9*
printf("a) Apresciacion\n");
printf("b) Eventualidad\n");
printf("c) Agrupamiento\n");
printf("d) Restringido\n");
printf("e) Indiferente\n\n");
//*************************************************************************************************
char i3[2];
char i4[]={"b"};
printf("Ingrese su eleccion:    ");
scanf("%s",& i3);
printf("\n");
if(strcmp(i3,i4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: CONCISO\n\n",nu3);
//*********************************************************************************************c10*
printf("a) Breve\n");
printf("b) Consiente\n");
printf("c) Claro\n");
printf("d) Duro\n");
printf("e) Abstracto\n\n");
//*************************************************************************************************
char j3[2];
char j4[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& j3);
printf("\n");
if(strcmp(j3,j4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: GUSARAPIENTO\n\n",nu3);
//*********************************************************************************************c11*
printf("a) Inmune\n");
printf("b) Infecto\n");
printf("c) Manirroto\n");
printf("d) Viciado\n");
printf("e) Listo\n\n"); 
//*************************************************************************************************
char k3[2];
char k4[]={"d"};
printf("Ingrese su eleccion:    ");
scanf("%s",& k3);
printf("\n");
if(strcmp(k3,k4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: BROMISTA\n\n",nu3);
//*********************************************************************************************c12*
printf("a) Cuchufleta\n");
printf("b) Ironia\n");     //ironía
printf("c) Bufonada\n");
printf("d) Chancero\n");
printf("e) Acrobata\n");  //acróbata
//*************************************************************************************************
char l3[2];
char l4[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& l3);
printf("\n");
if(strcmp(l3,l4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: SUCINTO\n\n",nu3);
//*********************************************************************************************c13*
printf("a) Resumido\n");
printf("b) Presunto\n");
printf("c) Servicial\n");
printf("d) Sumiso\n");
printf("e) Decoroso\n\n");
//*************************************************************************************************
char m3[2];
char m4[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& m3);
printf("\n");
if(strcmp(m3,m4)==0)
{
printf("Correcto\n");
cont3++;
}
else 
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ARREDRAR\n\n",nu3);
//*********************************************************************************************c14*
printf("a) Mandar\n");
printf("b) Atraer\n");
printf("c) Miedo\n");
printf("d) Amedrentar\n");
printf("e) Plantar\n");
//*************************************************************************************************
char n3[2];
char n4[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& n3);
printf("\n");
if(strcmp(n3,n4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: DENUEDO\n\n",nu3);
//*********************************************************************************************c15*
printf("a) Prestamo\n");   //préstamo
printf("b) Cobardia\n");   //cobardía
printf("c) Intrepidez\n");
printf("d) Disimulo\n");
printf("e) Espectar\n\n");
//*************************************************************************************************
char o3[2];
char o4[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& o3);
printf("\n");
if(strcmp(o3,o4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: DILAPIDAR\n\n",nu3);
//*********************************************************************************************c16*
printf("a) Ahorro\n");
printf("b) Poseer\n");
printf("c) Ganar\n");
printf("d) Colocar\n");
printf("e) Despilfarrar\n\n");
//*************************************************************************************************
char p3[2];
char p4[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& p3);
printf("\n");
if(strcmp(p3,p4)==0)
{
printf("Correcto\n");
cont3++;
} 
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: GABELA\n\n",nu3);
//*********************************************************************************************c17*
printf("a) Tocador\n");
printf("b) Gracia\n");
printf("c) Impuesto\n");
printf("d) Salario\n");
printf("e) Sala\n\n");
//*************************************************************************************************
char q3[2];
char q4[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& q3);
printf("\n");
if(strcmp(q3,q4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: BARBILINDO\n\n",nu3);
//*********************************************************************************************c18*
printf("a) Afeminado\n");
printf("b) Fuerte\n");
printf("c) Sagaz\n");
printf("d) Atrofiado\n");
printf("e) Amorfio\n\n");
//*************************************************************************************************
char r3[2];
char r4[]={"a"};
printf("Ingrese su eleccion:    ");
scanf("%s",& r3);
printf("\n");
if(strcmp(r3,r4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: CONNUBIO\n\n",nu3);
//*********************************************************************************************c19*
printf("a) Dogma\n");
printf("b) Divorcio\n");
printf("c) Disimulo\n");
printf("d) Matrimonio\n");
printf("e) Matriz\n\n");
//*************************************************************************************************
char s3[2];
char s4[]={"d"};
printf("Ingrese su eleccon:    ");
scanf("%s",& s3);
printf("\n");
if(strcmp(s3,s4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
nu3++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: AMPULOSO\n\n",nu3);
//*********************************************************************************************c20*
printf("a) Exactitud\n");
printf("b) Tranquilo\n");
printf("c) Redundante\n");
printf("d) Escaso\n");
printf("e) Loco\n\n");
//*************************************************************************************************
char t3[2];
char t4[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& t3);
printf("\n");
if(strcmp(t3,t4)==0)
{
printf("Correcto\n");
cont3++;
}
else
{
printf("Incorrecto\n");
}
printf("\n");
int pro2=0;
pro2=cont3/2;
printf("\tPuntuacion total: %i/10",pro2);
getch();
}
///////////////////////////////////////////////////////////////////////////////////////////////////
char ca4[]={"d"};
if(strcmp(ca4,ca)==0)
{
int nu4=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
textcolor(5);cprintf("Planteamiento N %i/20: CALETRE\n\n",nu4);
//**********************************************************************************************d1*
printf("\n");
printf("a) Calidad\n");
printf("b) Lecho\n");
printf("c) Capacidad\n");
printf("d) Enfermizo\n");
printf("e) Casa\n\n");
//*************************************************************************************************
char a5[2];
char a6[]={"c"};
int cont4=0;
printf("Ingrese su eleccion:  ");
scanf("%s",& a5);
printf("\n");
if(strcmp(a5,a6)==0)
{
printf("Correcoto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ABROQUELARSE\n\n",nu4);
//**********************************************************************************************d2*
printf("a) Protegerse\n");
printf("b) Desamparar\n");
printf("c) Abstraerse\n");
printf("d) Correrse\n");
printf("e) Mostrarse\n\n");
//*************************************************************************************************
char b5[2];
char b6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& b5);
printf("\n");
if(strcmp(b5,b6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: CONSTITUIR\n\n",nu4);
//**********************************************************************************************d3*
printf("a) Legalizar\n");
printf("b) Aceptar\n");
printf("c) Ordenar\n");
printf("d) Formar\n");
printf("e) Reglamentar\n\n");
//*************************************************************************************************
char c5[2];
char c6[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& c5);
printf("\n");
if(strcmp(c5,c6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: FALACIA\n\n",nu4);
//**********************************************************************************************d4*
printf("a) Mentira\n");
printf("b) Franqueza\n");
printf("c) Refran\n");  //refrán
printf("d) Certeza\n");
printf("e) Asanto\n\n");
//*************************************************************************************************
char d5[2];
char d6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& d5);
printf("\n");
if(strcmp(d5,d6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: OMISO\n\n",nu4);
//**********************************************************************************************d5*
printf("a) Obediente\n");
printf("b) Docil\n");   //dócil
printf("c) Olvidado\n");
printf("d) Dimitir\n");
printf("e) Salir\n\n");
//*************************************************************************************************
char e5[2];
char e6[]={"c"};
printf("Ingrse su eleccion:   ");
scanf("%s",& e5);
printf("\n");
if(strcmp(e5,e6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: REQUISA\n\n",nu4);
//**********************************************************************************************d6*
printf("a) Satisfaccion\n");
printf("b) Descuido\n");
printf("c) Alteracion\n");
printf("d) Embargo\n");
printf("e) Cambio\n\n");
//*************************************************************************************************
char f5[2];
char f6[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& f5);
printf("\n");
if(strcmp(f5,f6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PAGANO\n\n",nu4);
//**********************************************************************************************d7*
printf("a) Idolatra\n");  //idólatra
printf("b) Religioso\n");
printf("c) Creyente\n");
printf("d) Viajero\n");
printf("e) Ascenso\n\n");
//*************************************************************************************************
char g5[2];
char g6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& g5);
printf("\n");
if(strcmp(g5,g6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: VAPULEAR\n\n",nu4);
//**********************************************************************************************d8*
printf("a) Aprobar\n");
printf("b) Elogiar\n");
printf("c) Golpear\n");
printf("d) Gritar\n");
printf("e) Ponderar\n\n");
//*************************************************************************************************
char h5[2];
char h6[]={"c"};
printf("Ingrese su eleccion:    ");
scanf("%s",& h5);
printf("\n");
if(strcmp(h5,h6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ELOGIO\n\n",nu4);
//**********************************************************************************************d9*
printf("a) Eleccion\n");
printf("b) Alabanza\n");
printf("c) Discurso\n");
printf("d) Anemaza\n");
printf("e) Poder\n\n");
//*************************************************************************************************
char i5[2];
char i6[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& i5);
printf("\n");
if(strcmp(i5,i6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: SUTIL\n\n",nu4);
//*********************************************************************************************d10*
printf("a) Fugaz\n");
printf("b) Provechoso\n");
printf("c) Tenue\n");
printf("d) Propio\n");
printf("e) Ilustre\n\n");
//*************************************************************************************************
char j5[2];
char j6[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& j5);
printf("\n");
if(strcmp(j5,j6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: SICOFANTE\n\n",nu4);
//*********************************************************************************************d11*
printf("a) Servidor\n");
printf("b) Semejante\n");
printf("c) Detractor\n");
printf("d) Tranquilo\n");
printf("e) Consciente\n\n");
//*************************************************************************************************
char k5[2];
char k6[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& k5);
printf("\n");
if(strcmp(k5,k6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PROSAICO\n\n",nu4);
//*********************************************************************************************d12*
printf("a) Discrecion\n");
printf("b) Intento\n");
printf("c) Suerte\n");
printf("d) Trivial\n");
printf("e) Concesion\n\n");   //concesión
//*************************************************************************************************
char l5[2];
char l6[]={"d"};
printf("Ingrese su eleccion:    ");
scanf("%s",& l5);
printf("\n");
if(strcmp(l5,l6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: MUSITAR\n\n",nu4);
//*********************************************************************************************d13*
printf("a) Susurrar\n");
printf("b) Vociferar\n");
printf("c) Cacofonia\n");   //cacofonía
printf("d) Agregar\n");
printf("e) Descifrar\n\n");
//*************************************************************************************************
char m5[2];
char m6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",&  m5);
printf("\n");
if(strcmp(m5,m6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ESTIRPE\n\n",nu4);
//*********************************************************************************************d14*
printf("a) Grabar\n");
printf("b) Fama\n");
printf("c) Tradicion\n");   //tradición
printf("d) Linaje\n");
printf("e) Ejecucion\n\n");   //ejecución
//*************************************************************************************************
char n5[2];
char n6[]={"d"};
printf("Ingrese su eleccion:    ");
scanf("%s",& n5);
printf("\n");
if(strcmp(n5,n6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ATISBAR\n\n",nu4);
//*********************************************************************************************d15*
printf("a) Atraccion\n");   //atracción
printf("b) Saciar\n");
printf("c) Regalar\n");
printf("d) Acechar\n");
printf("e) Estorbar\n\n");
//*************************************************************************************************
char o5[2];
char o6[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& o5);
printf("\n");
if(strcmp(o5,o6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: EXIGUO\n\n",nu4);
//*********************************************************************************************d16*
printf("a) Artificio\n");
printf("b) Suficiente\n");
printf("c) Insignificante\n");
printf("d) Conciliacion\n");   //conciliación
printf("e) Andariego\n\n");
//*************************************************************************************************
char p5[2];
char p6[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& p5);
printf("\n");
if(strcmp(p5,p6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: OJERIZA\n\n",nu4);
//*********************************************************************************************d17*
printf("a) Amistad\n");
printf("b) Moral\n");
printf("c) Mirada\n");
printf("d) Agrado\n");
printf("e) Antipatia\n\n");   //antipatía
//*************************************************************************************************
char q5[2];
char q6[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& q5);
printf("\n");
if(strcmp(q5,q6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ENDILGAR\n\n",nu4);
//*********************************************************************************************d18*
printf("a) Endosar\n");
printf("b) Realizar\n");
printf("c) Perjudicar\n");
printf("d) Disciplinar\n");
printf("e) Provocar\n\n");
//*************************************************************************************************
char r5[2];
char r6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& r5);
printf("\n");
if(strcmp(r5,r6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorrecto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ASEVERAR\n\n",nu4);
//*********************************************************************************************d19*
printf("a) Verificar\n");
printf("b) Afirmar\n");
printf("c) Castigar\n");
printf("d) Endurecer\n");
printf("e) Abogar\n\n");
//*************************************************************************************************
char s5[2];
char s6[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& s5);
printf("\n");
if(strcmp(s5,s6)==0)
{
printf("Correcto\n");
cont4++;
}
else
{
printf("Incorescto\n");
}
nu4++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Palnteamiento N %i/20: ESTIPENDIO\n\n",nu4);
//*********************************************************************************************d20*
printf("a) Asignacion\n");      //
printf("b) Consumacion\n"); //
printf("c) Extincion\n");        //
printf("d) Innovacion\n");    //
printf("e) Sesion\n\n");        //
//*************************************************************************************************
char t5[2];
char t6[]={"a"};
printf("Ingrese su eleccion:    ");
scanf("%s",& t5);
printf("\n");
if(strcmp(t5,t6)==0)
{
printf("Correcto\n");
cont4++;
} 
else
{
printf("Incorrecto\n");
}
printf("\n");
int pro3=0;
pro3=cont4/2;
printf("\tPuntuacion total: %i/10",pro3);
printf("\n");
getch();

}
///////////////////////////////////////////////////////////////////////////////////////////////////
char ca5[]={"e"};
if(strcmp(ca,ca5)==0)
{
int nu5=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
textcolor(6);cprintf("Palteamiento N %i/20: EMOLUMENTO\n\n",nu5);
//**********************************************************************************************e1*
printf("\n");
printf("a) Talega\n");
printf("b) Construcion\n");  //
printf("c) Salario\n");
printf("d) Maqueta\n");
printf("e) Busto\n\n");
//*************************************************************************************************
char a7[2];
char a8[]={"c"};
int cont5=0;
printf("Ingrese su eleccion:   ");
scanf("%s",& a7);
printf("\n");
if(strcmp(a7,a8)==0)
{
printf("Correcto\n");
cont5++;
}
else
{
printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: RECALCITRANTE\n\n",nu5);
//**********************************************************************************************e2*
printf("a) Insociable\n");
printf("b) Reprimido\n");
printf("c) Eficaz\n");
printf("d) Obstinado\n");
printf("e) Reacio\n");
//*************************************************************************************************
char b7[2];
char b8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& b7);
printf("\n");
if(strcmp(b7,b8)==0)
{
printf("Correcto\n");
cont5++;
}
else
{
printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: SUPERFLUO\n\n",nu5);
//**********************************************************************************************e3*
printf("a) Lujoso\n");
printf("b) Anacronico\n");    //anacrónico
printf("c) Mefitico\n");
printf("d) Innecesario\n");
printf("e) Accesible\n\n");
//*************************************************************************************************
char c7[2];
char c8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& c7);
printf("\n");
if(strcmp(c7,c8)==0)
{
printf("Correcto\n");
cont5++;
}
else
{
printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: EXIMIO\n\n",nu5);
//**********************************************************************************************e4*
printf("a) Exotico\n");   //exótico
printf("b) Minimo\n");  //mínimo
printf("c) Vacio\n"); //vacío
printf("d) Escaso\n");
printf("e) Exlente\n\n");
//*************************************************************************************************
char d7[2];
char d8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& d7);
printf("\n");
if(strcmp(d7,d8)==0)
{
printf("Correcto\n");
cont5++;
}
else
{
printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: CATAR\n\n",nu5);
//**********************************************************************************************e5*
printf("a) Adular\n");
printf("b) Imprecar\n");
printf("c) Custodiar\n");
printf("d) Velar\n");
printf("e) Probar\n\n");
//*************************************************************************************************
char e7[2];
char e8[]={"e"};
printf("Ingrese su eleccion:  ");
scanf("%s",& e7);
printf("\n");
if(strcmp(e7,e8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: TRILLADO\n\n",nu5);
//**********************************************************************************************e6*
printf("a) Vacio\n");   //vacío
printf("b) Corriente\n");
printf("c) Usado\n");
printf("d) Trabajado\n");
printf("e) Embalado\n\n");
//*************************************************************************************************
char f7[2];
char f8[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& f7);
printf("\n");
if(strcmp(f7,f8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: VAHO\n\n",nu5);
//**********************************************************************************************e7*
printf("a) Olor\n");
printf("b) Secrecion\n");   //secreción
printf("c) Vapor\n");
printf("d) Mucosidad\n");
printf("e) Hez\n\n");
//*************************************************************************************************
char g7[2];
char g8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& g7);
printf("\n");
if(strcmp(g7,g8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PALIATIVO\n\n",nu5);
//**********************************************************************************************e8*
printf("a) Paliza\n");
printf("b) Trasteo\n");
printf("c) Punitivo\n");
printf("d) Platica\n");   //plática
printf("e) Lenitivo\n\n");
//*************************************************************************************************
char h7[2];
char h8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& h7);
printf("\n");
if(strcmp(h7,h8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: BUFO\n\n",nu5);
//**********************************************************************************************e9*
printf("a) Pastoril\n");
printf("b) Comico\n");   //cómico
printf("c) Vendedor\n");
printf("d) Integro\n");   //Íntegro
printf("e) Tosco\n\n");
//*************************************************************************************************
char i7[2];
char i8[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& i7);
printf("\n");
if(strcmp(i7,i8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: CACHAZA\n\n",nu5);
//*********************************************************************************************e10*
printf("a) Cachazo\n");
printf("b) Pastoril\n");
printf("c) Horca\n");
printf("d) Calma\n");
printf("e) Movimiento\n\n");
//*************************************************************************************************
char j7[2];
char j8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& j7);
printf("\n");
if(strcmp(j7,j8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: CAMORRA\n\n",nu5);
//*********************************************************************************************e11*
printf("a) Pelea\n");
printf("b) Ritmo\n");
printf("c) Ingenio\n");
printf("d) Horca\n");
printf("e) Brinco\n\n");
//*************************************************************************************************
char k7[2];
char k8[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& k7);
printf("\n");
if(strcmp(k7,k8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: CAPCIOSO\n\n",nu5);
//*********************************************************************************************e12*
printf("a) Tramposa\n");
printf("b) Principal\n");
printf("c) Vejestorio\n");
printf("d) Candidez\n");
printf("e) Garantia\n\n");   //garantía
//*************************************************************************************************
char l7[2];
char l8[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& l7);
printf("\n");
if(strcmp(l7,l8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: EXTRAFALARIO\n\n",nu5);
//*********************************************************************************************e13*
printf("a) Hosco\n");
printf("b) Excentrico\n");  //excéntrico
printf("c) Pasmado\n");
printf("d) Artificio\n");
printf("e) Proferir\n\n");
//*************************************************************************************************
char m7[2];
char m8[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& m7);
printf("\n");
if(strcmp(m7,m8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: MANOJO\n\n",nu5);
//*********************************************************************************************e14*
printf("a) Manotada\n");
printf("b) Hatajo\n");
printf("c) Punto\n");
printf("d) Hacecillo\n");
printf("e) Ninguna\n\n");
//*************************************************************************************************
char n7[2];
char n8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& n7);
printf("\n");
if(strcmp(n7,n8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: FRAGOR\n\n",nu5);
//*********************************************************************************************e15*
printf("a) Calor\n");
printf("b) Serenidad\n");
printf("c) Mentira\n");
printf("d) Atractivo\n");
printf("e) Ruido\n\n");
//*************************************************************************************************
char o7[2];
char o8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& o7);
printf("\n");
if(strcmp(o7,o8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: SOMERO\n\n",nu5);
//*********************************************************************************************e16*
printf("a) Superficial\n");
printf("b) Casual\n");
printf("c) Pasajero\n");
printf("d) Circunstancial\n");
printf("e) Ninguna\n\n");
//*************************************************************************************************
char p7[2];
char p8[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& p7);
printf("\n");
if(strcmp(p7,p8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: OBLONGO\n\n",nu5);
//*********************************************************************************************e17*
printf("a) Ostentoso\n");
printf("b) Obstaculo\n");   //obstáculo
printf("c) Alargado\n");
printf("d) Abotagado\n");
printf("e) Bienhechor\n\n");
//*************************************************************************************************
char q7[2];
char q8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& q7);
printf("\n");
if(strcmp(q7,q8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PANACEA\n\n",nu5);
//*********************************************************************************************e18*
printf("a) Pulso\n");
printf("b) Anticonceptivo\n");
printf("c) Antipiretico\n");    //antipirético
printf("d) Narcotico\n");      //narcótico
printf("e) Curalotodo\n\n");
//*************************************************************************************************
char r7[2];
char r8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& r7);
printf("\n");
if(strcmp(r7,r8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: PROPINCUO\n\n",nu5);
//*********************************************************************************************e19*
printf("a) Centrado\n");
printf("b) Sensible\n");
printf("c) Serio\n");
printf("d) Simple\n");
printf("e) Cercado\n\n");
//*************************************************************************************************
char s7[2];
char s8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& s7);
printf("\n");
if(strcmp(s7,s8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
nu5++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Planteamiento N %i/20: ZAGA\n\n",nu5);
//*********************************************************************************************e20*
printf("a) Capitulo\n");
printf("b) Jamba\n");
printf("c) Retaguardia\n");
printf("d) Umbral\n");
printf("e) Dintel\n\n");
//*************************************************************************************************
char t7[2];
char t8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& t7);
printf("\n");
if(strcmp(t7,t8)==0)
{
	printf("Correcto\n");
	cont5++;
}
else
{
	printf("Incorrecto\n");
}
printf("\n");
int pro4=0;
pro4=cont5/2;
printf("Puntuacion total: %i/10",pro4);
getch();

}
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     1    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
char omg2[]={"b"};
if(strcmp(omg,omg2)==0)
{
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("\tANTONIMOS\n\n");
printf("Los Antonimos  son palabras  que  pertenecen  a la   misma categoria gramatical y, \n");
printf("perteneciendo al mismo campo semantico, expresan significados opuestos o contrarios\n");
printf("mas no diferentes\n\n");

printf("A continuacion   encontrara   preguntas de seleccion multiple. Constan de una palabra base\n");
printf("consignada  en MAYUSCULA  llamadas  premisa, y  una  serie de  alternatibas  signadas  con\n");
printf("letras consecutivas, de las cuales una es la respuesta y las restantes cumplen el papel de\n");
printf("de distractores\n\n");
printf("La respuesta es la opcion cuyo significado es opuesto o contrario a la premisa\n");
clrscr();

int nu6=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: IRREBATIBLE\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^a1^
printf("a) Discutible\n");
printf("b) Triunfador\n");
printf("c) Factible\n");
printf("d) Inmemorable\n");
printf("e) Erotico\n\n");  //erótico
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int cont6=0;
char aa[2];
char aa1[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& aa);
printf("\n");
if(strcmp(aa,aa1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: TRINCAR\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^b2^
printf("a) Ruido\n");
printf("b) Travesear\n");
printf("c) Agredir\n");
printf("d) Retozar\n");
printf("e) Silenciar\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char bb[2];
char bb1[]={"d"};
printf("Ingres su eleccion:   ");
scanf("%s",& bb);
printf("\n");
if(strcmp(bb,bb1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: LATOSO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^c3^
printf("a) Suave\n");
printf("b) Grosero\n");
printf("c) Fastidioso\n");
printf("d) Epicureo\n");
printf("e) Agradable\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char cc[2];
char cc1[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& cc);
printf("\n");
if(strcmp(cc,cc1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: CONGRUENTE\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^d4*
printf("a) Oportuno\n");
printf("b) Inoportuno\n");
printf("c) Oficioso\n");
printf("d) Igual\n");
printf("e) Equivalente\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char dd[2];
char dd1[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& dd);
printf("\n");
if(strcmp(dd,dd1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: OBSECUENTE\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^e5*
printf("a) Obediente\n");
printf("b) Docil\n");   //dócil
printf("c) Sumiso\n");
printf("d) Disciplinado\n");
printf("e) Discolo\n");   //díscolo
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char ee[2];
char ee1[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ee);
printf("\n");
if(strcmp(ee,ee1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: PRECINTAR\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^f6^
printf("a) Estampar	\n");
printf("b) Asegurar\n");
printf("c) Atraer\n");
printf("d) Garantizar\n");
printf("e) Abrir\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char ff[2];
char ff1[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ff);
printf("\n");
if(strcmp(ff,ff1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i30: PEJIGUERA\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^g7^
printf("a) Dificultad\n");
printf("b) Molestia\n");
printf("c) Comodidad\n");
printf("d) Impertinencia\n");
printf("e) Tabarra\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char gg[2];
char gg1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& gg);
printf("\n");
if(strcmp(gg,gg1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ENCLENQUE\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^h8^
printf("a) Vigoroso\n");
printf("b) Raquitico\n");
printf("c) Canijo\n");
printf("d) Desmejorado\n");
printf("e) Debil\n\n");   //débil
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char hh[2];
char hh1[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& hh);
printf("\n");
if(strcmp(hh,hh1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: VERSADO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^i9^
printf("a) Erudito\n");
printf("b) Indocumentado\n");
printf("c) Entendido\n");
printf("d) Instruido\n");
printf("e) Ducho\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char ii[2];
char ii1[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ii);
printf("\n");
if(strcmp(ii,ii1)==0)
{
	printf("Corrrecto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: PARLOTEAR\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^j10^
printf("a) Callar\n");
printf("b) Charla\n");
printf("c) Murmurar\n");
printf("d) Platicar\n");
printf("e) Fabular\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char jj[2];
char jj1[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& jj);
printf("\n");
if(strcmp(jj,jj1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: TRIVIAL\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^k11^
printf("a) Insustancia\n");
printf("b) Superficial\n");
printf("c) Complejo\n");
printf("d) Vulgar\n");
printf("e) Baladi\n\n");;
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char kk[2];
char kk1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& kk);
printf("\n");
if(strcmp(kk,kk1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: JARIFO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^l12^
printf("a) Vistoso\n");
printf("b) Apuesto\n");
printf("c) Rozagante\n");
printf("d) Ataviado\n");
printf("e) Descuidado\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char ll[2];
char ll1[]={"e"};
printf("Ingrese su eleccion:    ");
scanf("%s",& ll);
printf("\n");
if(strcmp(ll,ll1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: DIMITIR\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^m13^
printf("a) Dejar\n");
printf("b) Abdicar\n");
printf("c) Renunciar\n");
printf("d) Persistir\n");
printf("e) Educar\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char mm[2];
char mm1[]={"d"};
printf("Ingrese su eleccion:  ");
scanf("%s",& mm);
printf("\n");
if(strcmp(mm,mm1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ABJUGAR\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^n14^
printf("a) Abrazar\n");
printf("b) Renegar\n");
printf("c) Apostatar\n");
printf("d) Retractarse\n");
printf("e) Abandonar\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char nn[2];
char nn1[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& nn);
printf("\n");
if(strcmp(nn,nn1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ABSTRUSO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^o15^
printf("a) Claro\n");
printf("b) Comezon\n");   //comezón
printf("c) Abierto\n");
printf("d) Sordido\n");   //sórdido
printf("e) Lentitud\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char oo[2];
char oo1[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& oo);
printf("\n");
if(strcmp(oo,oo1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ADIPOSO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^p16^
printf("a) Contrario\n");
printf("b) Conclusion\n");    //
printf("c) Delgado\n");
printf("d) Deforme\n");
printf("e) Concertar\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char pp[2];
char pp1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& pp);
printf("\n");
if(strcmp(pp,pp1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ACONGOJADO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^q17^
printf("a) Disminucion\n");
printf("b) Afrontar\n");
printf("c) Rechazar\n");
printf("d) Alegre\n");
printf("e) Abolir\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char qq[2];
char qq1[]={"d"};
printf("Ingrese su eleccion:  ");
scanf("%s",& qq);
printf("\n");
if(strcmp(qq,qq1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: BEODO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^r18^
printf("a) Trivial\n");
printf("b) Libre\n");
printf("c) Abstemio\n");
printf("d) Beligerante\n");
printf("e) Sordido\n\n");   //sórdido
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char rr[2];
char rr1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& rr);
printf("\n");
if(strcmp(rr,rr1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N &i/30: COLIGARSE\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^s19^
printf("a) Duradero\n");
printf("b) Separarse\n");
printf("c) Ritmo\n");
printf("d) Beligerante\n");
printf("e) Veterano\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char ss[2];
char ss1[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ss);
printf("\n");
if(strcmp(ss,ss1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: DENODADO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^t20^
printf("a) Cobarde\n");
printf("b) Indecente\n");
printf("c) Animo\n");    //ànimo
printf("d) Arrepentido\n");
printf("e) Dominar\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char tt[2];
char tt1[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& tt);
printf("\n");
if(strcmp(tt,tt1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ENHIESTO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^u21^
printf("a) Bonanza\n");
printf("b) Comienzo\n");
printf("c) Erguido\n");
printf("d) Encogido\n");
printf("e) Horizontal\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char uu[2];
char uu1[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& uu);
printf("\n");
if(strcmp(uu,uu1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: EXORDIO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^v22^
printf("a) Bonanza\n");
printf("b) Cordial\n");
printf("c) Reservado\n");
printf("d) Comienzo\n");
printf("e) Conclusion\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char vv[2];
char vv1[]={"e"};
printf("Ingrese su eleccion:  ");
scanf("%s",& vv);
printf("\n");
if(strcmp(vv,vv1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: HADO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^w23
printf("a) Destino\n");
printf("b) Casualidad\n");
printf("c) Ventura\n");
printf("d) Certeza\n");
printf("e) Confuso\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char ww[2];
char ww1[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ww);
printf("\n");
if(strcmp(ww,ww1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: HIRSUTO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^x24^
printf("a) Imberbe\n");
printf("b) Sabio\n");
printf("c) Flexible\n");
printf("d) Herido\n");
printf("e) Entendido\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char xx[2];
char xx1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& xx);
printf("\n");
if (strcmp(xx,xx1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: IDEAL\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^y25^
printf("a) Disminucion\n");   //
printf("b) Entendido\n");
printf("c) Mediocre\n");
printf("d) Blasfemia\n");
printf("e) Limpio\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char yy[2];
char yy1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& yy);
printf("\n");
if(strcmp(yy,yy1)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: IGNOTO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^z26^
printf("a) Herido\n");
printf("b) diligente\n");
printf("c) Transgredir\n");
printf("d) Perezoso\n");
printf("e) Ilustre\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char zz[2];
char zz1[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& zz);
printf("\n");
if(strcmp(zz,zz1)==0)
{
	printf("correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ILOTA\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^aa27^
printf("a) Libre\n");
printf("b) Contaminar\n");
printf("c) Sanar\n");
printf("d) Abertura\n");
printf("e) Humano\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char aa2[2];
char aa3[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& aa2);
printf("\n");
if(strcmp(aa2,aa3)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: IMPOLUTO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^bb28^
printf("a) Desgraciado\n");
printf("b) Desconocido\n");
printf("c) Afable\n");
printf("d) Abrumador\n");
printf("e) Manchado\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char bb2[2];
char bb3[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& bb2);
printf("\n");
if(strcmp(bb2,bb3)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: LENITIVO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^cc29^
printf("a) Venenoso\n");
printf("b) Escasez\n");
printf("c) Sensualidad\n");
printf("d) Imprudencia\n");
printf("e) Sucio\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char cc2[2];
char cc3[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& cc2);
printf("\n");
if(strcmp(cc2,cc3)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
nu6++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: TACITURNO\n\n",nu6);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^dd30^
printf("a) Soleado\n");
printf("b) Impresiso\n");
printf("c) Locuaz\n");
printf("d) Sabio\n");
printf("e) Criado\n\n");
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
char dd2[2];
char dd3[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& dd2);
printf("\n");
if(strcmp(dd2,dd3)==0)
{
	printf("Correcto\n");
	cont6++;
}
else
{
	printf("Incorrecto\n");
}
printf("\n");
int pro5=0;
pro5=cont6/3;
printf("Puntuacion total: %i/10",pro5);
getch();

}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     2    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
char omg3[]={"c"};
if(strcmp(omg,omg3)==0)
{
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("\tANALOGIAS\n\n");  //analogías
printf("La palabra analogia etimologicamente, proviene de dos voces griegas < ana >, que\n");
printf("quiere decir, 'conforme a' o 'deacuerdo con' y < logos >, que  se  entiende  como\n");
printf("'tratado', 'estudio', 'razon': es decir conformidad de razonnes.\n\n");
printf("En el ambito del razonamiento verbal, la analogia se refiere a la semejanza existentes\n");
printf("entre relaciones de palabras.\n\n");
printf("Ejemplo:\n");
printf("SILLA es a CONEDOR asi como BUTACA es a CINEMA. La < silla > es un mueble cuyo lugar adecuado\n");
printf("es  el  comedor, asi  tambien  la < butaca >  es otro  mueble  cuyo lugar adecuado es el cine\n\n");

printf("ESPECIFICACION:\n");

printf("HIELO  :  POLO\n");
printf("a) Verano : Otonio\n");  //otoño
printf("b) Invierno : Fuego\n");
printf("c) Piscina : Rio\n");  //río
printf("d) Arena : Desierto\n");
printf("e) Bosque : Montania\n\n");

printf("En el < polo > hay < hielo>. `SI`\n");
printf("En el < otonio > hay < verano >. 'NO TIENE SENTIDO'\n");
printf("En el < fuego > hay < inviero >. `NO TIENE SENTIDO`\n");
printf("En el < rio > hay < piscina >. `NO TIENE SENTIDO`\n");
printf("En el < decierto > hay < arena >. `SI`\n");
printf("En la < montania > hay < bosque >. `NO SIEMPRE`\n");
clrscr();

int nu7=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: TESTIGO : VERAZ\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````ee1`
printf("\ta) Arbitro : Neutral\n");
printf("\tb) Condenado culpable\n");
printf("\tc) Hombre : Sabio\n");
printf("\td) Discusion : Lucha\n");
printf("\te) Baile : Pareja\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
int cont7=0;
char ee3[2];
char ee4[]={"a"};
printf("Ingres esu eleccion:   ");
scanf("%s",& ee3);
printf("\n");
if(strcmp(ee3,ee4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: CARRERA : FATIGA\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````ff2`
printf("\ta) Pista : Atleta\n");
printf("\tb) Hormiga : atleta\n");
printf("\tc) Hormiga : Insecto\n");
printf("\td) Rapido : Ambriento\n");
printf("\te) Caminando : Corriendo\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char ff3[2];
char ff4[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ff3);
printf("\n");
if(strcmp(ff3,ff4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: DOLOR : SEDATIVO\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````gg3`
printf("\ta) Confortable : Estimulante\n");
printf("\tb) Trance : Narcotico\n");   //narcótico
printf("\tc) Arresto :Auto\n");
printf("\td) Pesar : Consolacion\n");   //
printf("\te) Dolor : Extraccion\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char gg3[2];
char gg4[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& gg3);
printf("\n");
if(strcmp(gg3,gg4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: PIANO : ESCALA\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````hh4`
printf("\ta) Campana : Sonido\n");
printf("\tb) Diapason : Nota\n");
printf("\tc) Violin : Musica\n");
printf("\td) Orquesta : Melodia\n");   //melodía
printf("\te) Sinfonia : Concierto\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char hh3[2];
char hh4[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& hh3);
printf("\n");
if(strcmp(hh3,hh4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: CHAUVINISMO : PAIS\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````ii5`
printf("\ta) Frugalidad : Dinero\n");
printf("\tb) Critica : Libro\n");
printf("\tc) Patriotismo : Pais\n");
printf("\td) Patrocinio : Proteccion\n");
printf("\te) Blotoneria : Alimento\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char ii3[2];
char ii4[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ii3);
printf("\n");
if(strcmp(ii3,ii4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch(),
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ACUERDO : CONSENSO\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````jj6`
printf("\ta) Cuenta : Censo\n");
printf("\tb) Placer : Goce\n");
printf("\tc) Paz : Tranquilidad\n");
printf("\td) Argumento : Solucion\n");
printf("\te) Accion : Incitar\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char jj3[2];
char jj4[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& jj3);
printf("\n");
if(strcmp(jj3,jj4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: MISCELANEA : ESCRITOS\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````kk7`
printf("\ta) Mezcla : Color\n");
printf("\tb) Mezcla : Libro\n");
printf("\tc) Mezcla : Comida\n");
printf("\td) Mezcla : Musica\n");
printf("\te) Mezcla : Destino\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char kk3[2];
char kk4[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& kk3);
printf("\n");
if(strcmp(kk3,kk4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: NUBE : ALGODON\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````ll8`
printf("\ta) Rio : Serpiente\n");
printf("\tb) Lluvia : Llanto\n");
printf("\tc) Luna : Plata\n");
printf("\td) Espejo : Lago\n");
printf("\te) Cuaderno : Carpeta\n\n");
//````````````````````````````````````````````````````````````````````````````````````````
char ll3[2];
char ll4[]={"c"};
printf("Ingrese su eleccion:  ");
scanf("%s",& ll3);
printf("\n");
if(strcmp(ll3,ll4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: FRUGAL : PARCO\n\n",nu7);
//```````````````````````````````````````````````````````````````````````````````````mm9`
printf("\ta) Generoso : Prodigo\n");   //pródigo
printf("\tb) Generoso : Benevolente\n");
printf("\tc) Generoso : Filantropico\n");
printf("\td) Generoso : Avariento\n");
printf("\te) Generoso : Libre\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char mm3[2];
char mm4[]={"a"};
printf("Ingrese su eleccion:  ");
scanf("%s",& mm3);
printf("\n");
if(strcmp(mm3,mm4)==0)
{
	printf("correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: GRANO : MAZORCA\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````nn10`
printf("\ta) Pelo : Cabellera\n");
printf("\tb) Diente : Ajo\n");
printf("\tc) Eslabon : Cadena\n");
printf("\td) Raiz : Arbol\n");
printf("\te) Vaina : Arveja\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char nn3[2];
char nn4[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& nn3);
printf("\n");
if(strcmp(nn3,nn4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: INFAMIA : INFAME\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````oo11`
printf("\ta) Plausibilidad: Plausibilatirio\n");
printf("\tb) Plausibilidad : Plausible\n");
printf("\tc) Plausibilidad : Plausitivo\n");
printf("\td) Plausibilidad : Plausibio\n");
printf("\te) Plausibilidad : Aplauso\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char oo3[2];
char oo4[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& oo3);
printf("\n");
if(strcmp(oo3,oo4)==0)
{
	printf("correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ESCASEZ : POQUEDAD\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````pp12`
printf("\ta) Escasez : Deficit\n");   //déficit
printf("\tb) Pocos : Muchos\n");
printf("\tc) Deficit : Abundancia\n");
printf("\td) Vacio : Recipiente\n");
printf("\te) Mercancia : Expectativa\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char pp3[2];
char pp4[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& pp3);
printf("\n");
if(strcmp(pp3,pp4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: LORA : GORRION\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````qq13`
printf("\ta) Perro : Perro lanoso\n");
printf("\tb) Elefante : Grillo\n");
printf("\tc) Leon : Gato\n");
printf("\td) Aguila : Mariposa\n");
printf("\te) Bocachico : Carpa\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char qq3[2];
char qq4[]={"e"};
printf("Ingrese su eleccion:  ");
scanf("%s",& qq3);
printf("\n");
if(strcmp(qq3,qq4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: PALUDISMO : ENFERMEDAD\n\n",nu7);
//`````````````````````````````````````````````````````````````````````````````````^rr14`
printf("\ta) Escoba : Limpieza\n");
printf("\tb) Regla : Recta\n");
printf("\tc) Cortina : Ventana\n");
printf("\td) Paris : Ciudad\n");
printf("\te) Epidemia : Vacuna\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char rr3[2];
char rr4[]={"d"};
printf("Ingrese su eleccion:  ");
scanf("%s",& rr3);
printf("\n");
if(strcmp(rr3,rr4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: DROMEDARIO : CAMELLO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````ss15`
printf("\ta) Lobo : Chacal\n");
printf("\tb) Colibri : Pajaro\n");
printf("\tc) Rana : Batracio\n");
printf("\td) Niabu : Gallina\n");
printf("\te) Tiburon : Ballena\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char ss3[2];
char ss4[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ss3);
printf("\n");
if(strcmp(ss3,ss4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ALUMNO : COLEGIO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````tt16`
printf("\ta) Agricultor : Cultivo\n");
printf("\tb) Barrio : Iglecia\n");
printf("\tc) Hijo : Familia\n");
printf("\td) Cantante : Cancion\n");
printf("\te) Equipo : Futbolista\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char tt3[2];
char tt4[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& tt3);
printf("\n");
if(strcmp(tt3,tt4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ALTRUISMO : INDIVIDUALISMO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````uu17`
printf("\ta) Sensibilidad: Filantropia\n");
printf("\tb) Miseria : Ambicion\n");
printf("\tc) Solidaridad : Indiferencia\n");
printf("\td) Rebeldia : Indisciplina\n");
printf("\te) Caridad : Dadivosidad\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char uu3[2];
char uu4[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& uu3);
printf("\n");
if(strcmp(uu3,uu4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: NOTICIAS : DECRIPTIVO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````vv18
printf("\ta) Dignostico del tiemp: Impredecible\n");
printf("\tb) Editorial : Unilateral\n");
printf("\tc) Historia principal : Noticiero\n");
printf("\td) Comercial : Receta\n");
printf("\te) Chiste : Jocoso\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char vv3[2];
char vv4[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& vv3);
printf("\n");
if(strcmp(vv3,vv4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: BALLENATO : BALLENA\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````ww19`
printf("\ta) Cabrito : Cabra\n");
printf("\tb) Becerro : Oveja\n");
printf("\tc) Tigrillo : Tigre\n");
printf("\td) Gallo : Gallinazo\n");
printf("\te) Lagartija : Lagarto\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char ww3[2];
char ww4[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ww3);
printf("\n");
if(strcmp(ww3,ww4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: VENENO : MUERTE\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````xx20`
printf("\ta) Purgante : Enfermedad\n");
printf("\tb) Experiencia : Conocimiento\n");
printf("\tc) Crecimiento : Maduracion\n");
printf("\td) Belleza : cosmeticos\n");
printf("\te) Verdad : Belleza\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char xx3[2];
char xx4[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& xx3);
printf("\n");
if(strcmp(xx3,xx4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: EL PANECILLO : QUITO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````yy21`
printf("\ta) Brasil : Concorvado\n");
printf("\tb) Montania : Ciudad\n");
printf("\tc) Ciudad : Monumento\n");
printf("\td) Pan : Ambato\n");
printf("\te) Santa Ana : Guayaquil\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char yy3[2];
char yy4[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& yy3);
printf("\n");
if(strcmp(yy3,yy4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: INCENDIO : BOMBERO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````zz22`
printf("\ta) Cultivo : Agricultor\n");
printf("\tb) Estadio : Atleta\n");
printf("\tc) Hospital : Enfermera\n");
printf("\td) Vida : Veneno\n");
printf("\te) Enfermedad : Medico\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char zz3[2];
char zz4[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& zz3);
printf("\n");
if(strcmp(zz3,zz4)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: RIEL : TREN\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````aa23`
printf("\ta) Senda : Caballo\n");
printf("\tb) Nieve : Esui\n");   //esquí
printf("\tc) Ruta : Avion\n");
printf("\td) Sonido : Onda\n");
printf("\te) Cauce : Rio\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char aa5[2];
char aa6[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& aa5);
printf("\n");
if(strcmp(aa5,aa6)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: CUADRADO : ROMBO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````bb24`
printf("\ta) Cubo : Azucar\n");
printf("\tb) Circulo : Elipse\n");
printf("\tc) Rectangulo . Cuadrado\n");
printf("\td) Pureza : Piedra Preciosa\n");
printf("\te) Futbot : Cancha\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char bb5[2];
char bb6[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& bb5);
printf("\n");
if(strcmp(bb5,bb6)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: ANILLO : MANONCILLO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````cc25`
printf("\ta) Circulo : Esfera\n");
printf("\tb) Aguacate : Cono\n");
printf("\tc) Diridible : Plano\n");
printf("\td) Balon : Pelota\n");
printf("\te) Paraiso : Infierno\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char cc5[2];
char cc6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& cc5);
printf("\n");
if(strcmp(cc5,cc6)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: CONTROL : ORDEN\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````dd26`
printf("\ta) Profesor : Alumno\n");
printf("\tb) Desorden : Climax\n");
printf("\tc) Gobierno : Legislador\n");
printf("\td) Chiste : Payaso\n");
printf("\te) Anarquia :Caos\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char dd5[2];
char dd6[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& dd5);
printf("\n");
if(strcmp(dd5,dd6)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: TONTO : EXPERTO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````ee27`
printf("\ta) Preocupado : Pobre\n");
printf("\tb) Idiota : Estupido\n");
printf("\tc) Pepino : Suave\n");
printf("\td) Valiente : Cobarde\n");
printf("\te) Volcan : Erupcion\n\n");
//````````````````````````````````````````````````````````````````````````````````````````
char ee5[2];
char ee6[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ee5);
printf("\n");
if(strcmp(ee5,ee6)==0)
{
	printf("correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: TEMBLOR : TERREMOTO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````ff28`
printf("\ta) Tormenta : Huracan\n");
printf("\tb) Fragante : Fetido\n");   //fétido
printf("\tc) Atardecer : Crepusculo\n");
printf("\td) Sal : Salado\n");
printf("\te) Soleado : Caluroso\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char ff5[2];
char ff6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ff5);
printf("\n");
if(strcmp(ff5,ff6)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: TIERRA : HEMISFERIO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````gg29`
printf("\ta) Atomo : Nucleo\n");
printf("\tb) Universo : Galaxia\n");
printf("\tc) Rio : Mar\n");
printf("\td) Parlamento : Hemiciclo\n");
printf("\te) Circulo : Semicirculo\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char gg5[2];
char gg6[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& gg5);
printf("\n");
if(strcmp(gg5,gg6)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
nu7++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: RELINCHO : CABALLO\n\n",nu7);
//``````````````````````````````````````````````````````````````````````````````````hh30`
printf("\ta) Rebuzno : Asno\n");
printf("\tb) Nacional : Pais\n");
printf("\tc) Madrid : Gobierno\n");
printf("\td) Alcalde : Pais\n");
printf("\te) Madrid : Internacional\n\n");
//```````````````````````````````````````````````````````````````````````````````````````
char hh5[2];
char hh6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& hh5);
printf("\n");
if(strcmp(hh5,hh6)==0)
{
	printf("Correcto\n");
	cont7++;
}
else
{
	printf("Incorrecto\n");
}
printf("\n");
int pro6=0;
pro6=cont7/3;
printf("Puntuacion total: %i/10",pro6);
getch();
		
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     3    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
char omg4[]={"d"};
if(strcmp(omg,omg4)==0)
{
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("\tINTERPRETACION DE REFRANES\n\n");
printf("Refran es un dicho agudo y sentencioso de uso comun.\n");
printf("El refran no tiene uator determinado.\n");
printf("Fraces celebres es un dicho agudo expresado por un autor determinado.\n");
printf("La interpretacion de los refranes se aplican a los acontecimientos que\n");
printf("se suscitan en la vida de las personas.\n\n");
printf("Ejemplo:\n");
printf("< NO DEJES PARA MANIANA LO QUE PUEDES HACER HOY >\n");
printf("Hay que trabajar shora,mostrandoce activo y evitar pereza\n\n");
printf("< QUE EL APETITO OBEDEZCA A LA RAZON >\n");
printf("Los sentidos deben de estar sometidos a la inteligencia.\n\n");
clrscr();

int nu8=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < LA OCIOSIDAD ES MADRE DE TODOS LOS VICIOS\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''a1'
printf("\ta) Todos los vicios conducen al fracaso\n");
printf("\tb) La persona ociosa facilmente adquiere vicios\n");
printf("\tc) Los vicios se pegan facilmente\n");
printf("\td) El ocioso odia el trabajo\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
int cont8=0;
char ii5[2];
char ii6[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ii5);
printf("\n");
if(strcmp(ii5,ii6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < CUANDO UNA PUERTA SE CIERA OTRA SE ABRE\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''b2'
printf("\ta) Siempre es posible recuperar lo perdido\n");
printf("\tb) En la vida hay muchos caminos para elegir\n");
printf("\tc) Si una puerta esta cerrada hay que buscar otra abierta\n");
printf("\td) Cuando se pierde una oportunidad  se encuentra otra\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char jj5[2];
char jj6[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& jj5);
printf("\n");
if(strcmp(jj5,jj6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < POR SUS FRUTOS SE CONOCEN AL ARBOL >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''c3'
printf("\ta) Al hombre se le conoce por sus obras\n");
printf("\tb) A la persona se le estima por sus acciones\n");
printf("\tc) Se necesitan echos no palabras\n");
printf("\td) Si se conoce el futuro se puede decir el nombre del arbol\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char kk5[2];
char kk6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& kk5);
printf("\n");
if(strcmp(kk5,kk6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < HAZ EL BIEN PERO NO MIRES A QUIEN >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''d4'
printf("\ta) El bien siempre es recompensado\n");
printf("\tb) El bien ha de hacerse desinteresadamente\n");
printf("\tc) Hay que hacer el bien sin publicarlo\n");
printf("\td) Hay que hacer el bien al enemigo\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char ll5[2];
char ll6[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ll5);
printf("\n");
if(strcmp(ll5,ll6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: A BUEN ENTENDEDOR POCAS PALABRAS >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''e5'
printf("\ta) Debemos saber como comunicarnos\n");
printf("\tb) Entendemos mejor cuando nos hablan\n");
printf("\tc) La persona capaz comprende facilmente lo que le dicen\n");
printf("\td) Cuando nos comunican con pocas palabras, entendemos mejor\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char mm5[2];
char mm6[]={"c"};
printf("Ingrese su eleccion:  ");
scanf("%s",& mm5);
printf("\n");
if(strcmp(mm5,mm6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < A DIOS ROGANDO Y CON EL MAZO DANDO >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''f6'
printf("\ta) Es bueno tener a quien pedirle un fabor\n");
printf("\tb) Dios nos ampara en nuetras dificultades\n");
printf("\tc) Incluso cuando nos portamos mal, recibimos bendiciones\n");
printf("\td) Hay que poner de nuestra parte sin esperar milagros\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char nn5[2];
char nn6[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& nn5);
printf("\n");
if(strcmp(nn5,nn6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < CADA LOCO CON SU TEMA >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''g7'
printf("\ta) Hay que temer a la gente extrania\n");
printf("\tb) Los locos son gente creativa e inteligente\n");
printf("\tc) Cada quien hace lo que le gusta de acuerdo a sus intereses\n");
printf("\td) Los enajenados mentales se aferran a temas correctos\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char oo5[2];
char oo6[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& oo5);
printf("\n");
if(strcmp(oo5,oo6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < CON LA VARA QUE MIDES SERAS MEDIDO >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''h8'
printf("\ta) Todo mundo debe ser juzgado por sus actos\n");
printf("\tb) Segun tratemos a los demas asi nos trataran\n");
printf("\tc) Hay que demostrales a los demas que somos inocentes\n");
printf("\td) Debemos medir y ponderar los actos,tanto propio como ajenos\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char pp5[2];
char pp6[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& pp5);
printf("\n");
if(strcmp(pp5,pp6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < CRIA CUERVOS Y TE SACARAN LOS OJOS >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''i9'
printf("a) Es peligroso criar animales salvajes\n");
printf("b) No hay que confiarse de ninguna persona violenta\n");
printf("c) La ingratitud llega al colmo de expresarse pagando el bien con el mal\n");
printf("d) Hay que estar atentos a lo que hacen los demas, para evitar ser danados\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char qq5[2];
char qq6[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& qq5);
printf("\n");
if(strcmp(qq5,qq6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: DEL ARBOL CAIDO TODOS HACEN LENIA\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''j10'
printf("\ta) Cuando a alguien le va mal, todo mundo se oprovecha\n");
printf("\tb) Debemos aprovechar las oportunidades que se nos presentan\n");
printf("\tc) Los arboles son la materia prima para elaborar la lenia\n");
printf("\td) Cuando alguien cae, dificilmente se levanta\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char rr5[2];
char rr6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& rr5);
printf("\n");
if(strcmp(rr5,rr6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: EL HOMBRE PROPONE Y DIOS DISPONE\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''k11'
printf("\ta) Lo que el hombre se propone debe cumplirlo\n");
printf("\tb) Dios nos dirige en todas nuestras acciones\n");
printf("\tc) El logro de nuestras determinaciones depende de Dios\n");
printf("\td) Nuestras acciones son el futuro de nuestro ruego\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char ss5[2];
char ss6[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ss5);
printf("\n");
if(strcmp(ss5,ss6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < JUEGO DE MANOS, JUEGO DE VILLANO >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''l12'
printf("\ta) Todos los juegos son perjudiciales y daninos\n");
printf("\tb) Las personas malas acostumbra a jugar como nino\n");
printf("\tc) Hay gente enferma que se obsesiona con el juego\n");
printf("\td) Utilizar las manos groseramente denigra y alienta la violencia\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char tt5[2];
char tt6[]={"d"};
printf("Ingrse su eleccion:   ");
scanf("%s",& tt5);
printf("\n");
if(strcmp(tt5,tt6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < MAS VALE SOLO QUE MAL ACOMPANADO>\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''m13'
printf("\ta) La soledad es un bien que hay que cuidar y atesorar\n");
printf("\tb) Cuando quieras pasar mejor apartate de los demas\n");
printf("\tc) Las malas companias llevan al vacio\n");
printf("\td) Es preferible aislar a las personas perversas\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char uu5[2];
char uu6[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& uu5);
printf("\n");
if(strcmp(uu5,uu6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < NADIE DIGA DE ESTA AGUA NO BEBERE >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''n14'
printf("\ta) No debemos creernos infalibles cerrandonos a otras opciones\n");
printf("\tb) Hay tragos amargos que nos da la vida\n");
printf("\tc) Las circunstancias mas dificiles las viven los alcoholicos\n");
printf("\td) Hay pocas posibilidades de escapar al destino\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char vv5[2];
char vv6[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& vv5);
printf("\n");
if(strcmp(vv5,vv6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < CUANDO LO MEJOR SE CORROMPE, SE CONVIERTE EN LO PEOR >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''o15'
printf("\ta) La corrupcion esta enquistada en el poder\n");
printf("\tb) La manzana podrida malogra a las demas\n");
printf("\tc) El abuso del talento puede conducir a la perversidad extrema\n");
printf("\td) Nadie esta libre de cometer un delito\n");
printf("\te) A veces, el remedio es mas danino que la enfermedad\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char ww5[2];
char ww6[]={"c"};
printf("Ingrse su eleccion:   ");
scanf("%s",& ww5);
printf("\n");
if(strcmp(ww5,ww6)==0)
{
	printf("Correcto\n");
	cont8;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < DIOS LO DIO, DIOS LO QUITO >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''p16'
printf("\ta) Todo tiene su final, nada dura para ciempre\n");
printf("\tb) El que da y quita, con el diablo se desquita\n");
printf("\tc) Devemos conformarnos con nuestra suerte\n");
printf("\td) Loque Dios nos dio, San Pedro nos lo hace bendecir\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char xx5[2];
char xx6[]={"c"};
printf("Ingrese su eleccion:  ");
scanf("%s",& xx5);
printf("\n");
if(strcmp(xx5,xx6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < ERRANDO SE CORRIGE EL ERROR >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''q17'
printf("a) Mientras mas errores cometamos, mas sabios nos volvemos\n");
printf("b) El aprendiaje se consigue enmendando los errores cometidos\n");
printf("c) Seguiremos cometiendo errores hasta el final de nuestros dias\n");
printf("d) Equivocarse tiene sus encantos\n");
printf("e) Hay que equivocarse para no perder la humildad\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char yy5[2];
char yy6[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& yy5);
printf("\n");
if(strcmp(yy5,yy6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < RICO ES QUIEN NO DEBE Y PASA COMO PUEDE>\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''r18'
printf("a) Una persona honrrada siempre tendra las puertas abiertas en cualquier parte\n");
printf("b) Es mejor pasar apuros en vez de pedir favores\n");
printf("c) La riqueza espiritual es mil veces mas valiosa que la riqueza material\n");
printf("d) Es preferible no deber nada a nadie y conformarse con una vida sencilla\n");
printf("e) Deber no es malo; lo malo es no querer pagar\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char zz5[2];
char zz6[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& zz5);
printf("\n");
if(strcmp(zz5,zz6)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30:  < CADA PARDAL CON SU IGUAL >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''s19'
printf("a) No hay que aparentar lo que no correspondea nuestra realidad\n");
printf("b) No hay que inmiscuimos en asuntos que no van de acuerdo con nuestros conocimientos\n");
printf("c) Todos somos iguales ante Dios, aunque nuestra cuenta bancaria diga lo contrario\n");
printf("d) La Ley es igual para todos\n");
printf("e) Hay que buscar la amistad y el trato con personas de nuestra misma condicion social\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char aa7[2];
char aa8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& aa7);
printf("\n");
if(strcmp(aa7,aa8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < CORAZON APASIONADO, NO QUIERE SER ACONSEJADO >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''t20'
printf("\ta) El corazon es sensiblero y sentimental\n");
printf("\tb) La pasion no lleva a ningun lado\n");
printf("\tc) Alude a que la pasion anula la razon\n");
printf("\td) No es bueno dar consejo a una persona obsesionada\n");
printf("\te) El sentimiento y la razon siempre esran en contradicion\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char bb7[2];
char bb8[]={"c"};;
printf("Ingrese su eleccion:    ");
scanf("%s",& bb7);
printf("\n");
if(strcmp(bb7,bb8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < AL QUE SE HACE DE MIEL SE LO COMEN LAS MOSCAS >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''u21'
printf("a) Hay que comer alimentos balanceados para evitar enfermedades\n");
printf("b) Las personas debiles y en extremo bondadosas son victimas de abuso de los demas\n");
printf("c) Las abejas elaboran la miel y las moscas se lo comen\n");
printf("d) Las personas que sufren de diabetes tienen que evitar el consumo de miel\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char cc7[2];
char cc8[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& cc7);
printf("\n");
if(strcmp(cc7,cc8)==0)
{
	printf("correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < NO HAY MEJOR ANDAR QUE NO PARAR >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''v22'
printf("a) El que mal anda, mal acaba\n");
printf("b) Las personas que cuidad al detalle los pasos que dan, siempre tendra exito\n");
printf("c) Hay que ser constante para conseguir un objetivo\n");
printf("d) En la vida de un hombre exitoso, la palabra retroceso no existe\n");
printf("e) Andar, andar, que el mundo se va a acabar\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char dd7[2];
char dd8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& dd7);
printf("\n");
if(strcmp(dd7,dd8)==0)
{
	printf("correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < LA MEJOR FELICIDAD ES LA CONFORMIDAD >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''w23'
printf("a) Hay que resignarse a ser pobres toda nuestra vida, para no sufrir decepciones\n");
printf("b) Hay que conformarnos con los pocos momentos de felicidad que la vida nos da\n");
printf("c) La conformidad y la felicidad llegan cuando logramos la comodidad economica\n");
printf("d) La resignacion es una virtud que ayuda a sobrellevar los infortunios\n");
printf("e) Para ser felices y comer perdices, hay que conformarnos con poco\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char ee7[2];
char ee8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ee7);
printf("\n");
if(strcmp(ee7,ee8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < LA FORTUNA AYUDA A LOS AUDACES >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''x24'
printf("\ta) El que tiene plata, hace lo que le da la gana\n");
printf("\tb) Para ganar dinero, hay que tener suerte\n");
printf("\tc) Solo la gente audaz se vuelve millonaria\n");
printf("\td) Hay que tener agallas para afrontar las dificultades\n");
printf("\te) Hay que tener decision y valor para lograr algun abjetivo importante\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char ff7[2];
char ff8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ff7);
printf("\n");
if(strcmp(ff7,ff8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < GENIO Y FIGURA HASTA LA SEPULTURA >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''y25'
printf("\ta) La gente conserva su forma de sre para siempre\n");
printf("\tb) Fisicamente la gente nunca cambia\n");
printf("\tc) La autenticidad destaca a la humanidad\n");
printf("\td) Nunca se debe cambiar en nuestra constumbre y forma de ser\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char gg7[2];
char gg8[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& gg7);
printf("\n");
if(strcmp(gg7,gg8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < EL HABITO NO HACE AL MONJE >\n\n",nu8);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''z26'
printf("\ta) Debemos vestir moderadamente sin llamar la atencion\n");
printf("\tb) Dependiendo de la vestimenta podemos conocer a la gente\n");
printf("\tc) El atuendo nos permite proyectar nuestros deseos\n");
printf("\td) El exterior de una persona no siempre revela su interior\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char hh7[2];
char hh8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& hh7);
printf("\n");
if(strcmp(hh7,hh8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < QUIEN MUCHO ABARCA POCO APRIETA >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''aa27'
printf("\ta) Es preferible poco pero bien\n");
printf("\tb) Quien abarca muchas propiedades poco sabe lo que tiene\n");
printf("\tc) Quien atiende a muchos asuntos no sirve bien a ninguno\n");
printf("\td) Quien mucha dinero tiene pocos aprietos pasa\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char ii7[2];
char ii8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ii7);
printf("\n");
if(strcmp(ii7,ii8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < A GRANDES MALES GRANDES REMEDIOS >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''bb28'
printf("\ta) Debemos esforzarnos para salir airosos de una desgracia\n");
printf("\tb) Para llegar a una solucion hay que ser paciente\n");
printf("\tc) Si no actuamos rapido nunca superaremos los problemos\n");
printf("\td) Cuando actuamos mal no esperemos recompensas\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char jj7[2];
char jj8[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& jj7);
printf("\n");
if(strcmp(jj7,jj8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < EN MARTES 13, NI TE CASES NI TE EMBARQUES >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''cc29'
printf("\ta) Para hacer algo hay que escoger birn los dias de la semana\n");
printf("\tb) El dia martes es como cualquier dia, es decir malo\n");
printf("\tc) Hay que temer a ciertos dia en particular\n");
printf("\td) La supersticion afirma que el martes 13 es un dia nefasto\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char kk7[2];
char kk8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& kk7);
printf("\n");
if(strcmp(kk7,kk8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Icorrecto\n");
}
nu8++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/30: < NO BASTA SER BUENO, SINO PARECERLO >\n\n",nu8);
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''dd30'
printf("\ta) La bondad se refleja solamente en el aspecto fisico\n");
printf("\tb) Nuestra naturaleza nos impide ser bueno en todo momento\n");
printf("\tc) A mas de bondad interior, hay que predicar con el buen ejemplo\n\n");
printf("\td) Hay que decir a todo mundo lo buenas personas que somos\n\n");
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char ll7[2];
char ll8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ll7);
printf("\n");
if(strcmp(ll7,ll8)==0)
{
	printf("Correcto\n");
	cont8++;
}
else
{
	printf("Incorrecto\n");
}

printf("\n");
int pro7=0;
pro7=cont8/3;
printf("Puntuacion total: %i/10",pro7);
getch();
	
}
/////////////////////////////////////////////////////////////////////////////////////////
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char omg5[]={"e"};
if(strcmp(omg,omg)==0)
{
printf("\tSELECCION LOGICA\n\n");
printf("A continuacion usted tiene algunas afirmaciones incompletas que descriven una situacion.\n");
printf("De entre los 5 aspectos que se presentan para completar la situacion, elija cual es el \n");
printf("unico asapecto necesario sin el cual no existiria la situacion.\n\n");

clrscr();
int nu9=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UN MITIN SIEMPRE TIENE:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++a1+
printf("\ta) Discurso\n");
printf("\tb) Tarima\n");
printf("\tc) Espectaculo\n");
printf("\td) Aplausos\n");
printf("\te) Propaganda\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int cont9=0;
char mm7[2];
char mm8[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& mm7);
printf("\n");
if(strcmp(mm7,mm8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: NO PUEDE HABER GEOMETRIA SI NO HAY:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++b2+
printf("\ta) Trazos\n");
printf("\tb) Colores\n");
printf("\tc) Dimenciones\n");
printf("\td) Instrumentos\n");
printf("\te) Figuras\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char nn7[2];
char nn8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& nn7);
printf("\n");
if(strcmp(nn7,nn8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UNA CORDILLERA SIEMPRE TIENE:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++c3'
printf("\ta) Vegetacion\n");
printf("\tb) Nieve\n");
printf("\tc) Enlace\n");
printf("\td) Abismo\n");
printf("\te) Valles\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char oo7[2];
char oo8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& oo7);
printf("\n");
if(strcmp(oo7,oo8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: PARA QUE HAYA CIVILIDAD ES NECESARIO:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++d4+
printf("\ta) Sociabilidad\n");
printf("\tb) Aglomeracion\n");
printf("\tc) Uniformidad\n");
printf("\td) Dirigencia\n");
printf("\te) Espacio Publico\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char pp7[2];
char pp8[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& pp7);
printf("\n");
if(strcmp(pp7,pp8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UN ESTADIO SIEMPRE TIENE:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++e5+
printf("\ta) Espectadores\n");
printf("\tb) Competencia\n");
printf("\tc) Cabinas\n");
printf("\td) Publicidad\n");
printf("\te) Graderias\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char qq7[2];
char qq8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& qq7);
printf("\n");
if(strcmp(qq7,qq8)==0)
{
	printf("Correcto\n");
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: NO PUEDE HABER BANQUETE SI NO HAY:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++f6+
printf("\ta) Espectacularidad\n");
printf("\tb) Musica\n");
printf("\tc) Discursos solemnes\n");
printf("\td) Comida\n");
printf("\te) Protocolo\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char rr7[2];
char rr8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& rr7);
printf("\n");
if(strcmp(rr7,rr8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: NO PUEDE HABER DEMOGRAFIA SI NO HAY:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++g7+
printf("\ta) Colectividad humana\n");
printf("\tb) Analisis politico\n");
printf("\tc) Predominio del pueblo\n");
printf("\td) Libertad de prensa\n");
printf("\te) Dialogo\n\n");    //díalogo
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char ss7[2];
char ss8[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ss7);
printf("\n");
if(strcmp(ss7,ss8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UN ABISMO SIEMPRE TIENE:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++h8+
printf("\ta) Oscuridad\n");
printf("\tb) Vegetacion\n");
printf("\tc) Profundidad\n");
printf("\td) Rio\n");
printf("\te) Rocas\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char tt7[2];
char tt8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& tt7);
printf("\n");
if(strcmp(tt7,tt8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: NO PUEDE EXISTIR DUNA SIN:\n\n",nu9);
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++i9+
printf("\ta) Agua\n");
printf("\tb) Bosque\n");
printf("\tc) viento\n");
printf("\td) oasis\n");
printf("\te) Sequia\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char uu7[2];
char uu8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& uu7);
printf("\n");
if(strcmp(uu7,uu8)==0)
{
	printf("correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UN SISTEMA SIEMPRE TIENE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++j10+
printf("\ta) Espacio\n");
printf("\tb) Conjunto\n");
printf("\tc) Separacion\n");
printf("\td) Luz\n");
printf("\te) Musica\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char vv7[2];
char vv8[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& vv7);
printf("\n");
if(strcmp(vv7,vv8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: NO PUEDE HABER TRE SIN:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++k11+
printf("\ta) Pasajeros\n");
printf("\tb) Maquinista\n");
printf("\tc) Vagon\n");
printf("\td) Locomotora\n");
printf("\te) Estacion\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char ww7[2];
char ww8[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ww7);
printf("\n");
if(strcmp(ww7,ww8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UN PAISAJE SIEMPRE TIENE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++l12+
printf("\ta) Luz\n");
printf("\tb) Animacion\n");
printf("\tc) horizonte\n");
printf("\td) Sol\n");
printf("\te) Nubes\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char xx7[2];
char xx8[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& xx7);
printf("\n");
if(strcmp(xx7,xx8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: PARA QUE SE FORME UN GLACIAR SE REQUIERE DE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++m13+
printf("\ta) Nieve\n");
printf("\tb) Hielo\n");
printf("\tc) Baja temperatura\n");
printf("\td) Presion\n");
printf("\te) Todas las anteriores\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char yy7[2];
char yy8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& yy7);
printf("\n");
if(strcmp(yy7,yy8)==0)
{
	printf("correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UNA NUBE ES SIEMPRE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++n14+
printf("\ta) Blanca\n");
printf("\tb) Suave\n");
printf("\tc) Leve\n");
printf("\td) Alta\n");
printf("\te) humeda\n\n");   //húmeda
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char zz7[2];
char zz8[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& zz7);
printf("\n");
if(strcmp(zz7,zz8)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UN LIBRO CONSTA SIEMPRE DE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++o15+
printf("\ta) Graficos\n");
printf("\tb) Entrevistas\n");
printf("\tc) Contenido\n");
printf("\td) Dibujos\n");
printf("\te) Bibliografia\n\n");   //bibliografía
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char aa9[2];
char aa0[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& aa9);
printf("\n");
if(strcmp(aa9,aa0)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UNA PARED SIEMPRE TIENE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++p16+
printf("\ta) Ladrillos\n");
printf("\tb) Pintura\n");
printf("\tc) Cemento\n");
printf("\td) Dimenciones\n");
printf("\te) consistencia\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char bb9[2];
char bb0[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& bb9);
printf("\n");
if(strcmp(bb9,bb0)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UN RADIO TIENE SIEMPRE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++q17+
printf("\ta) Forma\n");
printf("\tb) Audiencia\n");
printf("\tc) sonido\n");
printf("\td) Electricidad\n");
printf("\te) Audifonos\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char cc9[2];
char cc0[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& cc9);
printf("\n");
if(strcmp(cc9,cc0)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: LO QUE UN AVE NO TIENE SIEMPRE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++r18+
printf("\ta) Alas\n");
printf("\tb) Ojos\n");
printf("\tc) Patas\n");
printf("\td) Nidos\n");
printf("\te) Pico\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char dd9[2];
char dd0[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& dd9);
printf("\n");
if(strcmp(dd9,dd0)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: PARA PRODUCIR BIENES SE REQUIERE DE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++s19+
printf("\ta) Insumo\n");
printf("\tb) Mercadeo\n");
printf("\tc) Prestamo\n");
printf("\td) Dinamismo\n");
printf("\te) Exito\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char ee9[2];
char ee0[]={"a"};
printf("Ingrese su eleccion:  ");
scanf("%s",& ee9);
printf("\n");
if(strcmp(ee9,ee0)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
nu9++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Premisa N %i/20: UN CARRO SIEMPRE TIENE:\n\n",nu9);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++t20+
printf("\ta) Motor\n");
printf("\tb) Faros\n");
printf("\tc) Volante\n");
printf("\td) Estructura\n");
printf("\te) Asiento\n\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char ff9[2];
char ff0[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ff9);
printf("\n");
if(strcmp(ff9,ff0)==0)
{
	printf("Correcto\n");
	cont9++;
}
else
{
	printf("Incorrecto\n");
}
printf("\n");
int pro8=0;
pro8=cont9/2;
printf("Puntuacion total: %i/10",pro8);
getch();
	
}
break;

case 2:
printf("\t Actitud Numerica\n\n");
printf("Es la actitud o capacidad que tiene una  persona para inferir  relaciones que\n");
printf("se expresan en numeros y  para razonar con material cuantitativo. Involucra la\n");
printf("habilidad para estructurar, organizar y resolver problemas matematicos que\n");
printf("estan vinculadas  con  operaciones  de  matematica  basica,  siendo estas:\n");
printf("suma, resta,multiplicacion y division, trabajo de numeros naturales, fracciones y porcentajes.\n\n");
getch();
clrscr();

int nu0=1;
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("¿ Cuantos arboles hay en un parque triangular que tiene un arbol en\n");
printf("cada vertice y cien arboles en cada lado.\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡a1¡
printf("\ta) 296\n");
printf("\tb) 297\n");
printf("\tc) 298\n");
printf("\td) 299\n");
printf("\te) 300\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
int cont0=0;
char gg9[2];
char gg0[]={"b"};
printf("Ingrese su elecion:   ");
scanf("%s",& gg9);
printf("\n");
if(strcmp(gg9,gg0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Si el reloj de una torre da tres campanadas cada dos segundos,\n");
printf(" En cuanto tiempo dara seis campanadas?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡b2¡
printf("\ta) 5 segundos\n");
printf("\tb) 6 segundos\n");
printf("\tc) 7 segundos\n");
printf("\td) 8 segundos\n");
printf("\te) 9 segundos\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char hh9[2];
char hh0[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& hh9);
printf("\n");
if(strcmp(hh9,hh0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Teresa tiene una cadena que pesa 68 gramos. Si el 75% de la cadena es oro puro,\n");
printf("¿Cuantos gramos de oro puro tiene la cadena\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡c3¡
printf("\ta) 35\n");
printf("\tb) 41\n");
printf("\tc) 50\n");
printf("\td) 51\n");
printf("\te) 55\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ii9[2];
char ii0[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ii9);
printf("\n");
if(strcmp(ii9,ii0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("A un quiosco de  periodicos s e acercan  18 personas, de las cuales\n");
printf("8 compran <<Verdad>>, 7 compran <<La prensa>> y 3 AMBOS periodicos.\n");
printf("¿Cuantos no compraron Periodicos?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡d4¡
printf("\ta) 4\n");
printf("\tb) 5\n");
printf("\tc) 6\n");
printf("\td) 7\n");
printf("\te) 8\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char jj9[2];
char jj0[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& jj9);
printf("\n");
if(strcmp(jj9,jj0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Tres amigos, JACKIE, HUGO y KETY, tienen distintas profeciones: Profesor,\n");
printf("Medico  cirujano y  Abogado,  aunque  no  necesariamente  en  ese  orden.\n");
printf("Determinar cual es la profesion de KETY si se sabe que:\n");
printf("I     JACKIE es medico cirujano\n");
printf("II    HUGO no es profesor\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡e5¡
printf("\ta) Profesora\n");
printf("\tb) Medica\n");
printf("\tc) Abogada\n");
printf("\td) Ingeniera\n");
printf("\te) Ninguna\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char kk9[2];
char kk0[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& kk9);
printf("\n");
if(strcmp(kk9,kk0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("De 45.000 entradas para un megaconcierto, ya se han vendido 3/5 de ellas.\n");
printf("¿Cuanto pesa ahora?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡f6¡
printf("\ta) 15.000\n");
printf("\tb) 16.000\n");
printf("\tc) 17.000\n");
printf("\td) 18.000\n");
printf("\te) 20.000\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ll9[2];
char ll0[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ll9);
printf("\n");
if(strcmp(ll9,ll0)==0)
{
	printf("correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Hallar el termina que continua en la sucesion:\n");
printf("17;19;22;26.....\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡g7¡
printf("\ta) 30\n");
printf("\tb) 31\n");
printf("\tc) 32\n");
printf("\td) 33\n");
printf("\te) 35\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char mm9[2];
char mm0[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& mm9);
printf("\n");
if(strcmp(mm9,mm0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Que letra continua en la siguiente sucesion de letras:\n");
printf("C,E,H,L.....?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡h8¡
printf("\ta) M\n");
printf("\tb) N\n");
printf("\tc) O\n");
printf("\td) P\n");
printf("\te) Q\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char nn9[2];
char nn0[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& nn9);
printf("\n");
if(strcmp(nn9,nn0)==0)
{
	printf("correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Se quiere subdividir 3 cuadernos de 45, 60 y 75 hojas en cuadernillos\n");
printf("iguales que tengan entre 3 y 7 hojas. Cuantos cuadernillos se podrian formar?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡i9¡
printf("\ta) 36\n");
printf("\tb) 32\n");
printf("\tc) 34\n");
printf("\td) 30\n");
printf("\te) 38\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char oo9[2];
char oo0[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& oo9);
printf("\n");
if(strcmp(oo9,oo0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Hallar el doble de X\n");
printf("\t7  \t81  \t2\n");
printf("\t5  \t64  \t3\n");
printf("\t3  \tX   \t4\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡j10¡
printf("\ta) 49\n");
printf("\tb) 54\n");
printf("\tc) 60\n");
printf("\td) 98\n");
printf("\te) 100\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char pp9[2];
char pp0[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& pp9);
printf("\n");
if(strcmp(pp9,pp0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Veinticinco trabajadores ejecutan una obra en 16 dias.\n");
printf("¿En cuantos dias menos haran la obra 40 trabajadores?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡k11'
printf("\ta) 4\n");
printf("\tb) 5\n");
printf("\tc) 6\n");
printf("\td) 7\n");
printf("\te) 8\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char qq9[2];
char qq0[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& qq9);
printf("\n");
if(strcmp(qq9,qq0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("A un numero se le agrega 2 y el resultado se eleva al cuadrado; al nuevo\n");
printf("resultado se le disminuye 3 y, finalmente, lo que queda se divide para 2. Si se obtiene 23,\n");
printf("¿Cual es el numero inicial\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡l12¡
printf("\ta) 1\n");
printf("\tb) 3\n");
printf("\tc) 5\n");
printf("\td) 6\n");
printf("\te) 7\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char rr9[2];
char rr0[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& rr9);
printf("\n");
if(strcmp(rr9,rr0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("En una joyeria, 4 anillos de oro equivalen a 10 de plata, y 15 de plata\n");
printf("equivalen a 3 de diamantes. ¿Cuantos anillos de oro equivalen a 2 de diamantes?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡m13¡
printf("\ta) 4\n");
printf("\tb) 5\n");
printf("\tc) 6\n");
printf("\td) 7\n");
printf("\te) 8\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ss9[2];
char ss0[]={"a"};
printf("Ingrese su eleccion:    ");
scanf("%s",& ss9);
printf("\n");
if(strcmp(ss9,ss0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Una mesa tiene 3 m de largo y 2 m de ancho. ¿Cuanto se debe aumentar\n");
printf("al largo para que, sin alterar la superficie, el ancho sea de 1,50 m?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡n14¡
printf("\ta) 1 m\n");
printf("\tb) 2 m\n");
printf("\tc) 3 m\n");
printf("\td) 4 m\n");
printf("\te) 0 m\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char tt9[2];
char tt0[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& tt9);
printf("\n");
if(strcmp(tt9,tt0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("¿Cual es el numero cuya tercera parte, aumentada en 1,1, es un numero que\n");
printf("luego de duplicarlo y restarle 2 da como resultado la raiz cuadrada de 2,56?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡o15¡
printf("\ta) 2,5\n");
printf("\tb) 3,0\n");
printf("\tc) 2,1\n");
printf("\td) 3,2\n");
printf("\te) 3,5\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char uu9[2];
char uu0[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& uu9);
printf("\n");
if(strcmp(uu9,uu0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("En un almacen hay los 2/3 de los 3/4 de 540 cajas.\n");
printf("¿Cuantas cajas hay en el almacen?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡p16¡
printf("\ta) $ 150\n");
printf("\tb) $ 155\n");
printf("\tc) $ 160\n");
printf("\td) $ 162\n");
printf("\te) $ 154\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char vv9[2];
char vv0[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& vv9);
printf("\n");
if(strcmp(vv9,vv0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Ruth quiere comprar una comoda que cuesta $ 385, pero solo dispone\n");
printf("de 3/5 de ese importe. ¿Cuanto le falta\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡q17¡
printf("\ta) $ 150\n");
printf("\tb) $ 154\n");
printf("\tc) $ 155\n");
printf("\td) $ 160\n");
printf("\te) $ 162\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ww9[2];
char ww0[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ww9);
printf("\n");
if(strcmp(ww9,ww0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Cuando se le pregunto a Monica cuanto gasto de los $ 120 que le dio su padre,\n");
printf("ella contesto: Gaste la SEPTIMA parte de lo que no gaste. ¿Cuanto Gasto?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡r18¡
printf("\ta) 20\n");
printf("\tb) 25\n");
printf("\tc) 30\n");
printf("\td) 10\n");
printf("\te) 15\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char xx9[2];
char xx0[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& xx9);
printf("\n");
if(strcmp(xx9,xx0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("El costo de 7 manzanas es igual al de 5 naranjas, el de 2 naranjas es igual al\n");
printf("de 3 peras y el de 15 peras es igual al costo de 14 platanos. Si un platano cuesta $ 0,30;\n");
printf("¿Cuanto cuesta una manzana?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡s19¡
printf("\ta) 0,20\n");
printf("\tb) 0,32\n");
printf("\tc) 0,34\n");
printf("\td) 0,30\n");
printf("\te) 0,38\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char yy9[2];
char yy0[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& yy9);
printf("\n");
if(strcmp(yy9,yy0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Un ciclista recorre un trayecto en 38 minutos.\n");
printf("¿Cuanto tardara en recorrer el mismo trayecto si duplica su velocidad\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡t20¡
printf("\ta) 19 minutos\n");
printf("\tb) 20 minutos\n");
printf("\tc) 22 minutos\n");
printf("\td) 18 minutos\n");
printf("\te) 15 minutos\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char zz9[2];
char zz0[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& zz9);
printf("\n");
if(strcmp(zz9,zz0)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("¿Que porcentaje es 696 de 480?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡u21¡
printf("\ta) 125%\n");
printf("\tb) 130%\n");
printf("\tc) 135%\n");
printf("\td) 140%\n");
printf("\te) 145%\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ab[2];
char ab1[]={"e"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ab);
printf("\n");
if(strcmp(ab,ab1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("En cada salto que da Javier, avanza 1 m menos que en el salto anterior.\n");
printf("¿Que distancia avanza en el tercer salto\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡v22¡
printf("\ta) 1 m\n");
printf("\tb) 2 m\n");
printf("\tc) 3 m\n");
printf("\td) 4 m\n");
printf("\te) 5 m\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ac[2];
char ac1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ac);
printf("\n");
if(strcmp(ac,ac1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("La cantidad de dinero que tendria Julia si regalara $ 50 o ganara $ 40 esta\n");
printf("en la misma razon que 1 a 4. ¿Cuanto dinero tiene Julia?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡w23¡
printf("\ta) 100\n");
printf("\tb) 90\n");
printf("\tc) 70\n");
printf("\td) 80\n");
printf("\te) 60\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ad[2];
char ad1[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ad);
printf("\n");
if(strcmp(ad,ad1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Arturo, Blanca, Cesar, Diana y Ernesto ingresan a un teatro y ocupan un palco\n");
printf("de cinco asientos. Arturo se sienta lo mas lejos de Ernesto; Blanca y Diana\n");
printf("siempre se sientan juntas y se encuentran entre Arturo y Ernesto.\n");
printf("¿Cual de los siguientes enunciados es verdadero?\n\n");
printf("I. Cesar siempre esta en el centro\n");
printf("II. Necesariamente, Diana siempre esta en el centro\n");
printf("III. Cesar puede estar entre Arturo y Diana\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡x24¡
printf("\ta) I y II\n");
printf("\tb) I y III\n");
printf("\tc) Solo I\n");
printf("\td) Solo III\n");
printf("\te) Solo II\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ae[2];
char ae1[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ae);
printf("\n");
if(strcmp(ae,ae1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Que tanto por ciento de 1/3 es 1/4\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡y25¡
printf("\ta) 65%\n");
printf("\tb) 70%\n");
printf("\tc) 75%\n");
printf("\td) 80%\n");
printf("\te) 85\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char af[2];
char af1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& af);
printf("\n");
if(strcmp(af,af1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Mercedes compro una cartera a $ 80, lo que represento el 42%\n");
printf("de su presupuesto. ¿Cual es su presupuesto?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡z26¡
printf("\ta) 190\n");
printf("\tb) 190,48\n");
printf("\tc) 190,52\n");
printf("\td) 190,55\n");
printf("\te) 190,56\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ag[2];
char ag1[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ag);
printf("\n");
if(strcmp(ag,ag1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("¿De cuantas maneras diferentes podran ubicarse Flor, Gloris y Gina en una fila?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡aa27
printf("\ta) 3\n");
printf("\tb) 4\n");
printf("\tc) 5\n");
printf("\td) 6\n");
printf("\te) 7)\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ah[2];
char ah1[]={"d"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ah);
printf("\n");
if(strcmp(ah,ah1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("Luis proyecta un viaje y decide ir en tren o en omnibus. Si hay 4 rutas\n");
printf("de tren y 5 lineas terrestres, ¿De cuantas maneras puede realizar el viaje?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡bb28
printf("\ta) 20\n");
printf("\tb) 9\n");
printf("\tc) 1\n");
printf("\td) 12\n");
printf("\te) 10\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ai[2];
char ai1[]={"b"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ai);
printf("\n");
if(strcmp(ai,ai1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("en el cumpleano de Laura. Por ese motivo, su padre la lleva a una jugeteria\n");
printf("para que escoja un regalo. Ahi, ella observa con mucha ilusion 7 munecas,\n");
printf("5 peluches, 4 Casitas. ¿De cuantas formas podra hacer su eleccion?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡cc29
printf("\ta) 140\n");
printf("\tb) 3\n");
printf("\tc) 16\n");
printf("\td) 28\n");
printf("\te) 46\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char aj[2];
char aj1[]={"c"};
printf("Ingrese su eleccion:   ");
scanf("%s",& aj);
printf("\n");
if(strcmp(aj,aj1)==0)
{
	printf("correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
nu0++;
getch();
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Pregunta N %i/30\n\n",nu0);
printf("La estatura de un basquetbolista es 2,25 m y la altura de un poste 6,25 m.\n");
printf("¿Cual es la razon entre la estatura del basquetbolista y la altura del poste?\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡dd30
printf("\ta) 9/25\n");
printf("\tb) 3/25\n");
printf("\tc) 1/25\n");
printf("\td) 25/3\n");
printf("\te) 25\n\n");
//¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
char ak[2];
char ak1[]={"a"};
printf("Ingrese su eleccion:   ");
scanf("%s",& ak);
printf("\n");
if(strcmp(ak,ah1)==0)
{
	printf("Correcto\n");
	cont0++;
}
else
{
	printf("Incorrecto\n");
}
printf("\n");
int pro9=0;
pro9=cont0/3;
printf("Puntuacion total: %i/10",pro9);
getch();
break;
case 3:
clrscr();
printf("\t\t \t\tPROGRAMA <<<< SET 2.0.0 >>>>\n\n");
printf("Razonamiento Abstracto\n\n");

printf("Esta opcion no esta disponible por el momento\n\n");
printf("Precione un tecla para continuar.....");
getch();

break;


case 4:
printf("\tSALIR\n\n");
printf("Precione un tecla para continuar.....");
break;
}
getch();
clrscr();
}
}