#include <stdio.h>

                        int main(){
                          double pi = 0.0;
                          long numeroIteraciones  = 1000000000;
                          
                          
                        
                          bool esIndicePar = true;
                          for(long indice = 0; indice <= numeroIteraciones; indice++){
                            if(esIndicePar == true){
                              pi += 4.0 / (2.0 * indice + 1.0);
                            }else{
                              pi -= 4.0 / (2.0 * indice + 1.0);
                            }
                            esIndicePar = !esIndicePar;
                          }
                        
                          printf("Pi es: %f\n", pi);
                          return 0;
                        }
