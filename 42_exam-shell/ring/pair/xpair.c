int anagram(char*a,char*b){
  char *p,*q;
  while(*a&&*b){
    p=a;q=b;
    while(*q&&*q!=*p)
      q++;
    if(!*q) return 0;
    while(*q){
      *q=*q[1];q++;
    }
    a++;
  }
  return!*a&&!*b;
}
