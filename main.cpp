//non vi aspettate grandi cose e' solo un esercizio sugli array dinamici 

#include <iostream>
#include <ctime>

using namespace std;

//Pulisce la console chiedendo l'input all'utente
void clean(){
	system("pause");
	system("cls");
}

//Riempe l'array e mette in output numero contenuto e indicatore
void Arr(const int size, int *arr)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 99 + 1;

	for (int i = 0; i < size; i++)
		cout << "il contenuto della casella n." << i << " e':\t" << arr[i] << endl;
	cout << "============================================================================================================" << endl;

	for (int i = 0; i < size; i++){
		cout << "il pointer del numero " << arr[i] << " nella casella " << i << " e':\t" << &arr[i] << endl;
		&arr[i];
	}
}

//Riempe il nuovo array e mette in output numero contenuto e indicatore
void AddNewArr(int size, const int newsize, int *arr){
	int *newarr = new int[newsize];

	for (int i = 0; i < size; i++)
		newarr[i] = arr[i];
	
	delete[] arr;
	for (; size < newsize; ){
		newarr[size] = rand() % 99 + 1;
		size++;
	}

	for (int i = 0; i < newsize; i++)
		cout << "il contenuto nell'array della casella n. " << i << " e':\t" << newarr[i] << endl;
	
	cout << "============================================================================================================" << endl;

	for (int i = 0; i < newsize; i++)
		cout << "il pointer del numero " << newarr[i] << " nella casella " << i << " e':\t" << &newarr[i] << endl;

	delete[] newarr;
}


int main()
{
	//Scritta RedSmile :D
	cout << "######                    #####                                  ##   \n#     # ###### #####     #     # #    # # #      ######            #  \n#     # #      #    #    #       ##  ## # #      #         #####    # \n######  #####  #    #     #####  # ## # # #      #####              # \n#   #   #      #    #          # #    # # #      #         #####    # \n#    #  #      #    #    #     # #    # # #      #                 #  \n#     # ###### #####      #####  #    # # ###### ######          ##   " << endl;
	clean();

	srand(time(NULL)); //rendomizzatore

	char risposta;
	int size, newsize, add, remove;

	cout << "inserisci la grandezza dell'array" << endl;
	cin >> size;
	int *arr = new int[size];
	clean();
	cout << "============================================================================================================" << endl;
	//Richiamo alla funzione che riempe l'array e mette in output numero contenuto e pointer
	Arr(size, arr);
	cout << "============================================================================================================" << endl;
	clean();
	cout << "vuoi aggiungere un numero all'array?\ny/n" << endl;
	cin >> risposta;
	system("cls");
	if (risposta == 'y' || risposta == 'Y'){
		cout << "di quanto vuoi aumentare l'array?" << endl;
		cin >> add;
		newsize = size + add;
		cout << "============================================================================================================" << endl;
		//Richiamo alla funzione che riempe il nuovo array e mette in output numero contenuto e pointer
		AddNewArr(size, newsize, arr);
		cout << "============================================================================================================" << endl;
		clean();
	}
	cout << "Programma creato da RedSmile :D" << endl;

	system("pause");
	return 0;
}
