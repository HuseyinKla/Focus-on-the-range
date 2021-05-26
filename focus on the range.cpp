#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int chosee,toplam=0,rast[2],betC,sayac=1,lastC;
	int i;
		srand(time(NULL));

		printf("----------FOCUS ON THE RANGE OYUNUMUZA HOSGELDINIZ----------\n\n\nOncelikle oyun size verilen sayiyi aralikta tutma oyunudur\nBelli sayida verilen sayilar dogrultusunda belli sayida hak ile \nBu oyunu oynayabileceksiniz\nHazir oldugunuzda 'enter' basiniz");
		getchar();
		start:
		system("CLS");
		
		printf("Oyun 3 zorluk biciminden olusmaktadir\n1-)Kolay\n2-)Normal\n3-)Zor\n\n\nSeciminizi yapiniz: ");
		scanf("%d",&chosee);
		
		switch(chosee)
		{
			case 1:
				toplam=0;		
				system("CLS");
				printf("Kolay zorluk derecesinde oyunu sectiniz\nVerilen sayilari 10 kere toplama isleminin ardindan 20 ile 30 arasinda tutmaniz gerekmektedir\n\n\n");
				
				do
				{
					printf("%d. deneme hakkiniz kullanicaksiniz",sayac);
					
					for(i=0 ; i<2 ; i++)
					{
						rast[i]=rand()%30-10;
					}
						printf("\n\n1-)%d\n2-)%d",rast[0],rast[1]);
						chose:
							
						printf("\n\nLutfen secimini yapiniz: ");
						scanf("%d",&betC);
						
						if(betC==1)
						{
							toplam+=rast[0];
						}
						else if(betC==2)
						{
							toplam+=rast[1];
						}
						else
						{
							printf("Yanlis giridiniz lutfen dogru rakam seciniz!!");
							goto chose;
						}
						
						printf("\n\nAnlik toplam=%d\n\n",toplam);
						sayac++;
					
				}while(sayac<11);
						
						if(toplam<=30 and toplam>=20)
						{
							ch:
							printf("\n\n\nTEBRIKLER OYUNU BASARIYLA BITIRDINIZ\n\n\nTekrar oynamak icin 1'e\nOyundan cikmak isterseniz 2'e basiniz: ");
							scanf("%d",&lastC);
							if(lastC==1)
							{
								sayac=1;
								goto start;
							}
							else if(lastC==2)
								break;
							else
								printf("Lutfen dogru sayi seciniz!!");	goto ch;
						}
						else
						{
							chE:
							printf("\n\n\nMAALESEF OYUNU BASARIYLA BITIREMEDINIZ\n\n\nTekrar oynamak icin 1'e\nOyundan cikmak isterseniz 2'e basiniz\nSeciminiz: ");
							scanf("%d",&lastC);
							if(lastC==1)
							{							
								sayac=1;
								goto start;
							}
							else if(lastC==2)
								break;
							else
								printf("Lutfen dogru sayi seciniz!!");	goto chE;
						}
			case 2:
			toplam=0;		
			system("CLS");
				printf("Normal zorluk derecesinde oyunu sectiniz\nVerilen sayilari 10 kere toplama isleminin ardindan 20 ile 25 arasinda tutmaniz gerekmektedir\n\n\n");
				
				do
				{
					printf("%d. deneme hakkiniz kullanicaksiniz",sayac);
					
					for(i=0 ; i<2 ; i++)
					{
						rast[i]=rand()%30-10;
					}
						printf("\n\n1-)%d\n2-)%d",rast[0],rast[1]);
						choseq:
							
						printf("\n\nLutfen secimini yapiniz: ");
						scanf("%d",&betC);
						
						if(betC==1)
						{
							toplam+=rast[0];
						}
						else if(betC==2)
						{
							toplam+=rast[1];
						}
						else
						{
							printf("Yanlis giridiniz lutfen dogru rakam seciniz!!");
							goto choseq;
						}
						
						printf("\n\nAnlik toplam=%d\n\n",toplam);
						sayac++;
					
				}while(sayac<11);
						
						if(toplam<=25 and toplam>=20)
						{
							chw:
							printf("\n\n\nTEBRIKLER OYUNU BASARIYLA BITIRDINIZ\n\n\nTekrar oynamak icin 1'e\nOyundan cikmak isterseniz 2'e basiniz: ");
							scanf("%d",&lastC);
							if(lastC==1)
							{
								sayac=1;
								goto start;
							}
							else if(lastC==2)
								break;
							else
								printf("Lutfen dogru sayi seciniz!!");	goto chw;
						}
						else
						{
							qqchE:
							printf("\n\n\nMAALESEF OYUNU BASARIYLA BITIREMEDINIZ\n\n\nTekrar oynamak icin 1'e\nOyundan cikmak isterseniz 2'e basiniz\nSeciminiz: ");
							scanf("%d",&lastC);
							if(lastC==1)
							{
								sayac=1;
								goto start;
							}
							else if(lastC==2)
								break;
							else
								printf("Lutfen dogru sayi seciniz!!");	goto qqchE;
						}
			case 3:	
				toplam=0;		
				system("CLS");
					printf("Zor zorluk derecesinde oyunu sectiniz\nVerilen sayilari 10 kere toplama isleminin ardindan 20 ile 23 arasinda tutmaniz gerekmektedir\n\n\n");
					
					do
					{
						printf("%d. deneme hakkiniz kullanicaksiniz",sayac);
						
						for(i=0 ; i<2 ; i++)
						{
							rast[i]=rand()%30-10;
						}
							printf("\n\n1-)%d\n2-)%d",rast[0],rast[1]);
							qchose:
								
							printf("\n\nLutfen secimini yapiniz: ");
							scanf("%d",&betC);
							
							if(betC==1)
							{
								toplam+=rast[0];
							}
							else if(betC==2)
							{
								toplam+=rast[1];
							}
							else
							{
								printf("Yanlis giridiniz lutfen dogru rakam seciniz!!");
								goto qchose;
							}
							
							printf("\n\nAnlik toplam=%d\n\n",toplam);
							sayac++;
						
					}while(sayac<11);
							
							if(toplam<=23 and toplam>=20)
							{
								rch:
								printf("\n\n\nTEBRIKLER OYUNU BASARIYLA BITIRDINIZ\n\n\nTekrar oynamak icin 1'e\nOyundan cikmak isterseniz 2'e basiniz: ");
								scanf("%d",&lastC);
								if(lastC==1)
								{
									sayac=1;
									goto start;
								}
								else if(lastC==2)
									break;
								else
									printf("Lutfen dogru sayi seciniz!!");	goto rch;
							}
							else
							{
								gchE:
								printf("\n\n\nMAALESEF OYUNU BASARIYLA BITIREMEDINIZ\n\n\nTekrar oynamak icin 1'e\nOyundan cikmak isterseniz 2'e basiniz\nSeciminiz: ");
								scanf("%d",&lastC);
								if(lastC==1)
								{
									sayac=1;
									goto start;
								}
								else if(lastC==2)
									break;
								else
									printf("Lutfen dogru sayi seciniz!!");	goto gchE;
							}
			default:
				printf("Yanlis sayi girdiniz!!Lutfen dogru sayi giriniz!!");
				goto start;	
		}
		
	return 0;
}
