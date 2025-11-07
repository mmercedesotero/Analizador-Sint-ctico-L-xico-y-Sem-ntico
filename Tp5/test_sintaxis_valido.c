int x = 42;
int octal = 0447;
int hexadecimal = 0x5;
float real = 3.14;
double enteraDecimal = 999999999109999;
char c = 'a';
float temperatura = 36.5;
int comparacion,j = 10;
int y= 1;
y++;
x += 5;
temperatura = temperatura - 1.0;
x++;
--temperatura;

if (x > 5){
  return x;
}

if (y < 5){
  return 0;
}else {
  return 1;
}

int tam = sizeof(int);
float tamReal = sizeof(float);

while (x < 50) {
    x = x + 1;
}

for (int h=0; h < 5; h++) {
    temperatura += 0.1;
}

if (real > 0){
  break;
}
switch (x){
  case 1:{
    x = x + 1;
    break;
  }
  case 2: {
    x = x + 2;
    break;
  }
  default:{
    return x;
  }
}
