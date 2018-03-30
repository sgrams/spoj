#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<complex.h>

/****************************************************************/
// DEFINICJA TYPU LICZB ZESPOLONYCH:

typedef struct {
  double rea, ima;
}  zespol;

/****************************************************************/
// POMOCNICZE:

void  err(char s[]) {  // -- sygnalizacja bledu wejscia
  printf("\n !!! FUNKCJA zesp_get: %s !!!\n\n", s);
  exit(1);
}

/****************************************************************/
// INICJALIZACJE oraz WEJSCIE-WYJSCIE:

zespol  zesp_zestawic (double r, double i) {
    // zestawienie liczby zespolonej z dwoch rzeczywistych
  zespol z;
  z.rea = r;  z.ima = i;
  return z;
}

zespol  zesp_get (void) {
    /* wczytanie liczby zespolonej; powinna skladac sie z dwoch
       rzeczywistych, oraz plusa lub minusa miedzy nimi, zaczynac sie od
       nawiasu otwierajacego, konczyc sie litera ,,i'' oraz nawiasem
       zamykajacym;
       np.  (123.45 + 67.89i)
    */
  char ch;  zespol z;  int znak_im;
  do { ch = getchar(); } while (isspace(ch));
  if (ch == '(') {
    if (scanf("%lf", &(z.rea)) == 1) {
      do { ch = getchar(); } while (isspace(ch));
      if (ch == '+' || ch == '-') {
	if (ch == '+')  znak_im = 1;
	else  znak_im = -1;
	if (scanf("%lf", &(z.ima)) == 1) {
	  do { ch = getchar(); } while (isspace(ch));
	  if (ch == 'i') {
	    do { ch = getchar(); } while (isspace(ch));
	    if (ch == ')') {
	      if (znak_im == -1)  z.ima = -z.ima;
	    } else err("brak koncowego nawiasu");
	  } else err("brak 'i' na koncu czesci urojonej");
	} else err("niepoprawna czesc urojona");
      } else err("po czesci rzeczywistej brak znaku '+' lub '-'");
    } else err("niepoprawna czesc rzeczywista");
  } else err("brak rozpoczynajacego nawiasu");
  return z;
}

void  zesp_print (zespol z) { // drukowanie liczby zespolonej
  if (z.ima >= 0)
    printf("(%.2lf+%.2lfi)", z.rea, z.ima);
  else
    printf("(%.2lf-%.2lfi)", z.rea, -z.ima);
}

/****************************************************************/
// DZIALANIA:

zespol  zesp_dodac (zespol z1, zespol z2)
{
	zespol tmp;
	tmp.rea = z1.rea + z2.rea;
	tmp.ima = z1.ima + z2.ima;
	return tmp;
}

zespol  zesp_odjac (zespol z1, zespol z2)
{
	zespol tmp;
	tmp.rea = z1.rea - z2.rea;
	tmp.ima = z1.ima - z2.ima;
	return tmp;
}

zespol  zesp_razy (zespol z1, zespol z2)
{
	zespol tmp;
	tmp.rea = (z1.rea * z2.rea) - (z1.ima * z2.ima);
	tmp.ima = (z1.rea * z2.ima) + (z1.ima * z2.rea);
	return tmp;
}

zespol  zesp_dziel (zespol z1, zespol z2)
{
	zespol tmp;
	tmp.rea = (((z1.rea * z2.rea) + (z1.ima * z2.ima)) /
			  ((z2.rea * z2.rea) + (z2.ima * z2.ima)));
	tmp.ima = (((z1.ima * z2.rea) - (z1.rea * z2.ima)) /
			  ((z2.rea * z2.rea) + (z2.ima * z2.ima)));
	return tmp;
}

double	zesp_mod (zespol z)
{
	return hypot(z.rea, z.ima);
}

double zesp_arg	(zespol z)
{
	return atan2(z.ima, z.rea);
}

zespol	zesp_poteguj (zespol z, int potega)
{
	zespol tmp;
	tmp.rea = pow(zesp_mod(z), potega) * (cos(zesp_arg(z)*potega));
	tmp.ima = pow(zesp_mod(z), potega) * (sin(zesp_arg(z)*potega));
	return tmp;
}

zespol  zesp_sprzez (zespol z)
{
	zespol tmp;
	tmp.rea = z.rea;
	tmp.ima = -1* z.ima;
	return tmp;
}
int silniaRek (int n)
{
	if (n == 0)
		return 1;
	else
		return n * silniaRek(n-1);
}
void tozsamosc (zespol z)
{
	if (cos(zesp_arg(z)) + I*(sin(zesp_arg(z))) + 1 == 0)
		printf("Tozsamosc Eulera zachodzi.\n");
	else
		printf("Tozsamosc Eulera nie zachodzi.\n");
}

/****************************************************************/


int main () {
  zespol  z1, z2;
	int potega;

  printf("\n z1 == "); z1 = zesp_get();
  printf(" z2 == "); z2 = zesp_get();
	printf(" potega == "); scanf("%d", &potega);
  printf("\n z1+z2 == "); zesp_print(zesp_dodac(z1, z2));
  printf("\n z1-z2 == "); zesp_print(zesp_odjac(z1, z2));
  printf("\n z1*z2 == "); zesp_print(zesp_razy(z1, z2));
  printf("\n z1/z2 == "); zesp_print(zesp_dziel(z1, z2));
  printf("\n |z1+z2| == %.4lf\n\n", zesp_mod(zesp_dodac(z1, z2)));
  printf("\n z1^%d == ", potega); zesp_print(zesp_poteguj(z1, potega));
  printf("\n z2^%d == ", potega); zesp_print(zesp_poteguj(z2, potega));
  printf("\n sprz. z1 == "); zesp_print(zesp_sprzez(z1));
  printf("\n sprz. z2 == "); zesp_print(zesp_sprzez(z2));
	printf("\n");
	tozsamosc(z1);
	tozsamosc(z2);
  return 0;
}
