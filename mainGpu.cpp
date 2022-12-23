/// Класс видеокарта как товарный продукт
/// @author Кувыкин Н.Д

#include "ADTGPU.h"
#include <iostream>
using namespace std;

int main(){

	const int n = 2; // константа для размерности массива

	GraphicPU* GPUuu[n];
	//GraphicPU  GPUu[n];
	GraphicPU* GPUu = new GraphicPU[n];

		GPUu[0].set_price(1900); /// задать цену 
		GPUu[0].set_GPU("RTX 3080"); /// задать гпу
		GPUu[0].set_producer("Nvidia"); /// задать производителя
		GPUu[0].set_memory_size(12); /// задать объем памяти
		GPUu[0].set_memory_type("GDDR6"); /// задать тип памяти
		GPUu[0].set_connection_type("DisplayPort"); /// задать тип подключения

		/// вывод всех данных
		cout << GPUu[0].to_string() << endl;

		GPUuu[1]->set_price(1900); /// задать цену 
		GPUuu[1]->set_GPU("RTX 3080"); /// задать гпу
		GPUuu[1]->set_producer("Nvidia"); /// задать производителя
		GPUuu[1]->set_memory_size(12); /// задать объем памяти
		GPUuu[1]->set_memory_type("GDDR6"); /// задать тип памяти
		GPUuu[1]->set_connection_type("DisplayPort"); /// задать тип подключения

		/// вывод всех данных
		cout << GPUuu[1]->to_string() << endl;
}