#include "escaner.h"


  
struct token get_token(){
  
  

  token.nombre = 0;
  token.buffer[0] = '\0';

  char caracter;
  caracter = getchar();

 
  while(caracter != EOF){

  if(caracter == ','){

      token.nombre = SEP;    
      token.buffer[0] = ',';
      token.buffer[1] = '\0';

      return token;
     
    }else{

      if(!isspace(caracter)){
        int i = 0;
        do{  
          token.buffer[i] = caracter;
          i++;

          caracter = getchar();
        }while( caracter != EOF && caracter != ',' && !isspace(caracter)  );

      token.buffer[i] = '\0';

      ungetc(caracter, stdin);

      token.nombre = CAD;

      return token;
    }
  }
  caracter=getchar();
  }

  token.nombre = FDT;
  token.buffer[0] = '\0';

  return token;

}