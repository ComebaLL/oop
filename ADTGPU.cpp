/// Класс видеокарта как товарный продукт
/// @author Кувыкин Н.Д

#include "ADTGPU.h"

GraphicPU :: GraphicPU(){
    price = 0; // цена
    GPU = "";  // графический процессор
    producer = ""; // производитель
    memorySize = 0; // объем памяти
    memoryType = ""; // тип памяти
    connectionType = ""; // тип подключения
}

/// Задать цену
void GraphicPU :: set_price(unsigned pr){
                        if ( pr == 0)
                            throw std :: invalid_argument ("Error: price = 0");
                        else
                            price = pr;
}

/// Прочитать цену
unsigned GraphicPU :: get_price() const {
    return price;
}

/// Задать графичский процессор
void GraphicPU::set_GPU(const std::string &GPU1){
			if (GPU1 == "")
				throw std::invalid_argument("Error: GPU is empty");
            else    
			    GPU = GPU1;
}

/// Прочитать графический процессор
std::string GraphicPU::get_GPU() const {
	 return GPU;
}

/// Задать производителя
void GraphicPU::set_producer(const std::string &producer1){
			if (producer1 == "")
				throw std::invalid_argument("Error: producer is empty");
            else    
			    producer = producer1;
}

/// Прочитать производителя
std::string GraphicPU::get_producer() const {
	 return producer;
}

/// Задать объем памяти
void GraphicPU :: set_memory_size(unsigned memorySZ){
                        if ( memorySZ == 0)
                            throw std :: invalid_argument ("Error: Memory Size = 0");
                        else
                            memorySize = memorySZ;
}

/// Прочитать объем памяти
unsigned GraphicPU :: get_memory_size() const {
    return memorySize;
}

/// Задать тип памяти
void GraphicPU::set_memory_type(const std::string &memoryType1){
			if (memoryType1 == "")
				throw std::invalid_argument("Error: Memory type is empty");
            else    
			    memoryType = memoryType1;
}

/// Прочитать графический процессор
std::string GraphicPU::get_memory_type() const {
	 return memoryType;
}

/// Задать тип подключеия
void GraphicPU ::set_connection_type (const std :: string &connectionType1){
			if (connectionType1 == "")
				throw std::invalid_argument("Error: Connection type is empty");
            else    
                connectionType = connectionType1;
}

/// прочитать тип подключения
std :: string  GraphicPU :: get_connection_type() const {
	return connectionType;
}

/// вывод всех данных из класса
std :: string GraphicPU :: to_string() const {
     return "GPU: " + GPU + "; V memory: " + std::to_string(memorySize) + "; Memory type: " + memoryType +
        "; connection type; " + connectionType +
        "; producer: " + producer + "; price: " + std::to_string(price);
}
