#include "lib.h"
bool numero_primo(int i, int n){
    return n%i==0 ? n==i : numero_primo(i+1,n);
}
