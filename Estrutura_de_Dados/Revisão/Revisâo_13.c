#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Função para calcular a distância entre duas cidades
float calcularDistancia(float latitude1, float longitude1, float latitude2, float longitude2) {

  // Converte as coordenadas para radianos
  latitude1 = latitude1 * PI / 180;
  longitude1 = longitude1 * PI / 180;
  latitude2 = latitude2 * PI / 180;
  longitude2 = longitude2 * PI / 180;

  // Calcula a distância entre os centros das cidades
  float d = acos(sin(latitude1) * sin(latitude2) + cos(latitude1) * cos(latitude2) * cos(longitude2 - longitude1));

  // Retorna a distância em quilômetros
  return d * 6371.0;
}

int main() {

  // Declara as variáveis para armazenar as coordenadas das cidades
  float latitude1, longitude1, latitude2, longitude2;

  // Lê as coordenadas das cidades
  printf("Informe a latitude da primeira cidade: ");
  scanf("%f", &latitude1);
  printf("Informe a longitude da primeira cidade: ");
  scanf("%f", &longitude1);
  printf("Informe a latitude da segunda cidade: ");
  scanf("%f", &latitude2);
  printf("Informe a longitude da segunda cidade: ");
  scanf("%f", &longitude2);

  // Calcula a distância entre as cidades
  float distancia = calcularDistancia(latitude1, longitude1, latitude2, longitude2);

  // Imprime a distância
  printf("A distância entre as duas cidades é de %.2f quilômetros.\n", distancia);

  return 0;
}