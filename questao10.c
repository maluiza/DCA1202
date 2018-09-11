Para quando x dor declarado como char:
para o tipo char, cada elemento vai pular 1 byte do endereco da memória após ser incrementado

	x+1 = 4093
	x+2 = 4094
	x+3 = 4095

Para quando x for declarado como int:
para o tipo int, cada elemento vai pular 2 bytes do endereco da memória após ser incrementado

	x+1 = 4094
	x+2 = 4096
	x+3 = 4098
	
Para quando x for declarado como float:
para o tipo float, cada elemento vai pular 4 bytes do endereco da memória após ser incrementado

	x+1 = 4096
	x+2 = 4100
	x+3 = 4104
	
Para quando x for declarado como double:
para o tipo double, cada elemento vai pular 8 bytes do endereco da memória após ser incrementado

	x+1 = 4100
	x+2 = 4108
	x+3 = 4116
