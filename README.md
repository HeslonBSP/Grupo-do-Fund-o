#include <stdio.h>
#include <string.h>
#include <time.h>

typedef  struct {
    char nome[50];
    char data[10];
    char hora[5];


void  agendarconsulta(consulta) {
     printf("Insira o nome do paciente:");
     scanf("%s", consulta->nome);
     printf("Insira a data da consulta (dd/mm/aaaa):");
     scanf("%s",consulta->tada);
     printf("Insira a hora da consulta (hh:mm):");
     scanf("%s", consulta->);
 }

 voide mostrarconsulta(consulta *consulta){
      printf("consulta agendada para o paciente %s na data %s as%s.\n", consulta->nome, consulta->data,
      consulta->hora:);
      }

      int main(){
          consulta consulta; 
          agendarconsulta(&consulta);
          mostrarconsulta(&consulta);
 
