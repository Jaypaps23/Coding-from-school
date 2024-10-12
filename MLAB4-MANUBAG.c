#include <stdio.h>

int main(){
int month, day, year;


printf(" [1]January\n [2]Febuary \n [3]March \n [4]April\n [5]May \n [6]June\n [7]july\n [8]August\n [9]September\n [10]October\n [11]November\n [12]December");
printf("\n\nEnter month: ");
scanf("%d", &month);
printf("Enter day: ");
scanf("%d", &day);
printf("Enter year: ");
scanf("%d", &year);


if ( month == 3 && day >= 21 && day <= 31 || month == 4 && day <= 19 && day > 0){
    printf("You are Aries!");
}
else if (month == 4 && day >= 20 && day <= 30 || month == 5 && day <= 20 && day > 0){
    printf("You are Taurus!");
}
else if ( month == 5 && day >= 21 && day <= 31 || month == 6 && day <= 20 && day > 0){
    printf("You are Gemini!");
}
else if ( month == 6 && day >= 21 && day <= 30 || month == 7 && day <= 22 && day > 0){
    printf("You are Cancer!");
}
else if ( month == 7 && day >= 23 && day < 31){
    printf("You are Leo!");
}
else if (month == 8 && day <= 22 && day > 0){
    printf("You are Leo!");
}
else if ( month == 8 && day >= 23 && day < 31){
    printf("You are Virgo!");
}
else if (month == 9 && day <= 22 && day > 0){
    printf("You are Virgo!");
}
else if ( month == 9 && day >= 23 && day < 30){
    printf("You are Libra!");
}
else if (month == 10 && day <= 22 && day > 0){
    printf("You are Libra!");
}
else if ( month == 10 && day >= 23 && day < 31){
    printf("You are Scorpio!");
}
else if (month == 11 && day <= 21 && day > 0){
    printf("You are Scorpio!");
}
else if ( month == 11 && day >= 22 && day < 30){
    printf("You are Sagittarius!");
}
else if (month == 12 && day <= 21 && day > 0){
    printf("You are Sagittarius!");
}
else if ( month == 12 && day >= 22 && day < 31){
    printf("You are Capricorn!");
}
else if (month == 1 && day <= 19 && day > 0){
    printf("You are Capricorn!");
}
else if ( month == 1 && day >= 20 && day < 31){
    printf("You are Aquarius!");
}
else if (month == 2 && day <= 18 && day > 0){
    printf("You are Aquarius!");
}
else if ( month == 2 && day >= 19 && day < 30){
    printf("You are Libra!");
}
else if (month == 3 && day <= 20 && day > 0){
    printf("You are Libra!");
}
else {
printf("Invalid input/s");
}

  switch (year){
 case 1924: case 1936: case 1948: case 1960: case 1972: case 1984: case 1996: case 2008: case 2020:
     printf("\nYear of the RAT");
    break;
 case 1925: case 1937: case 1949: case 1961: case 1973: case 1985: case 1997: case 2009: case 2021:
    printf("\nYear of the OX");
    break;
 case 1926: case 1938: case 1950: case 1962: case 1974: case 1986: case 1998: case 2010: case 2022:
    printf("\nYear of the TIGER");
    break;
 case 1927: case 1939: case 1951: case 1963: case 1975: case 1987: case 1999: case 2011: case 2023:
    printf("\nYear of the RABBIT");
    break;
 case 1928: case 1940: case 1952: case 1964: case 1976: case 1988: case 2000: case 2012: case 2024:
    printf("\n Year of the DRAGON");
    break;
case 1929: case 1941: case 1953: case 1965: case 1977: case 1989: case 2001: case 2013:
    printf("\n Year of the SNAKE");
    break;
case 1930: case 1942: case 1954: case 1966: case 1978: case 1990: case 2002: case 2014:
    printf("\n Year of the HORSE");
    break;
case 1931: case 1943: case 1955: case 1967: case 1979: case 1991: case 2003: case 2015:
    printf("\n Year of the SHEEP");
    break;
case 1932: case 1944: case 1956: case 1968: case 1980: case 1992: case 2004: case 2016:
    printf("\n Year of the MONKEY");
    break;
case 1933: case 1945: case 1957: case 1969: case 1981: case 1993: case 2005: case 2017:
    printf("\n Year of the ROOSTER");
    break;
case 1934: case 1946: case 1958: case 1970: case 1982: case 1994: case 2006: case 2018:
    printf("\n Year of the DOG");
    break;
case 1935: case 1947: case 1959: case 1971: case 1983: case 1995: case 2007: case 2019:
    printf("\n Year of the PIG");
    break;
 }
}



