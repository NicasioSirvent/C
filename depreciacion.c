#include <stdio.h>

void main(){
  double coste, depreciacion_anual, valor_recuperacion, valor_actual, acumulado, valor_anual;
  int ano, vida_util, ano_fin;

  puts("Introduzca coste, valor recuperacion y vida util");
  scanf("%lf %lf %d", &coste, &valor_recuperacion, &vida_util);
  puts("Intruduzca año actual");
  scanf("%d", &ano);
  
  valor_actual = coste;
  depreciacion_anual = (coste - valor_recuperacion)/vida_util;
  acumulado = 0;
  ano_fin = ano + vida_util;
  puts("Año  Depreciación Dep.Acumulada");
  while (ano < ano_fin){
    acumulado += depreciacion_anual;
    valor_actual -= depreciacion_anual;
    
    printf("Año: %d, Depreciacion:%.2lf, %.2lf Acumulado \n", ano, depreciacion_anual, acumulado);
    ano+=1;
  }
}
