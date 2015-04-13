# include <stdio.h>
int estocolmo(char byte){
  int nbits;
  for(int i = 0; i<8; i++){
    if(byte&(1<<i)){
      nbits++;
    }
  }
  return nbits;
}

int main(){
  int arreglo[10] = {0,1,2,6,20,35,10,49,13,11};
  for(int i = 0; i<(sizeof(arreglo)/sizeof(*arreglo)); i++ ){
    int n = estocolmo(arreglo[i]);
    if(n%2==0){
      printf("El numero %d es estocolmo\n",arreglo[i] );
    }else{
      printf("El numero %d no es estocolmo\n",arreglo[i]);
	}
  }
  return 0;
}
