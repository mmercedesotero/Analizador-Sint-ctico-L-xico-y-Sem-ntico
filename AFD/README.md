# Grupo 01 - K2151
## Integrantes 
* Otero Mercedes 
* Toto Leandro
* Vallazza Luca Danilo
* Istepanoglu Tiziana 
* Paye Michael

## Tabla de transiciones del AFD

| Estado actual | Entrada        |Siguiente estado |
|:-------------:|:---------------|:---------------:|
| Q0            | 1-7,8-9        | QDec            |
| Q0            | 0              | QCer            |
| Q0            | otro           | ERROR           |
| QDec+          | 0,1-7,8-9      | QDec            |
| QDec+          | otro           | ERROR           |
| QCer+          | 1-7            | QOct            |
| QCer+          | x/X            | QOx             |
| QCer+          | 8-9,A-F/a-f    | QHex            |
| QCer+          | otro           | ERROR           |
| QOx           | 0-9,A-F/a-f    | QHex            |
| QOx           | otro           | ERROR           |
| QOct+          | 8-9,A-F/a-f    | QHex            |
| QOct+          | 0,1-7          | QOct            |
| QOct+          | otro           | ERROR           |
| QHex+          | 0-9,A-F/a-f    | QHex            |
| QHex+          | otro           | ERROR           |
| ERROR         | otro           | ERROR           |

![AFD](automata.png)
