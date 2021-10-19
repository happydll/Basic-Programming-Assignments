#include <iostream>
int main()
{
	std::cout<<"DERS NOTU HESAPLAMA PROGRAMI"<<std::endl;
	std::cout<<"Bu program bir öğrencinin herhangi bir ders üzerinde sınavlardanaldığı notlarını söyleyerek öğrencinin ham notunu hesaplamak amacı ile kullanılacaktır. \n"<<std::endl;
	//Bu kısma kadar programı tanıttım.

	float vize_1; 		//Burada vize_1 isminde bir değişken belirledim.
	float vize_2; 		//Burada vize_2 isminde bir değişken belirledim.
	float final_notu; 	//Burada final isminde bir değişken belirledim.
	float ham_not; 		//Burada ham_not isminde bir değişken belirledim.


	std::cout<<"Lütfen 1.vize notunuzu giriniz: ";		//Burada öğrenciden vize 1 notunu girmesi istedim. 
	std::cin>>vize_1;					//Burada öğrencinin girdiği vize 1 notunu vize_1 değişkenine yazdırdım. 
	
	std::cout<<"Lütfen 2.vize notunuzu giriniz: ";		//Burada öğrenciden vize 2 notunu girmesi istedim. 
	std::cin>>vize_2;					//Burada öğrencinin girdiği vize 2 notunu vize_2 değişkenine yazdırdım.
	
	std::cout<<"final notunuzu giriniz: ";			//Burada öğrenciden final notunu girmesi istedim.
	std::cin>>final_notu;					//Burada öğrencinin girdiği final notunu final değişkenine yazdırdım.


	ham_not=(vize_1*0.20)+(vize_2*0.20)+(final_notu*0.60);	//Burada öğrencindeden alınan notlar belirli hesaplamaara tabi tutarak ham notunu hesapladım.
		std::cout<<"Ham notunuz: "<<ham_not<<std::endl;	//Burada hesaplanan notu çıktı olarak yazdırıyorum ve programı sonlandırıyorum.
	
}
