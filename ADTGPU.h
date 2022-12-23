/// Класс видеокарта как товарный продукт
/// @author Кувыкин Н.Д

#include <string>
#include <stdexcept>

/// GPU
class GraphicPU{
    private:
            unsigned price; // цена
            std :: string GPU; // графический процессор
            std :: string producer; // производитель
            unsigned memorySize; // объем памяти
            std :: string memoryType; // тип памяти
            std :: string connectionType; // тип подключения
    public:
            // конструктор (иницилизирует поля)
            GraphicPU();

            /// Задать цену
            void set_price (unsigned pr);

            /// Прочитать цену
            unsigned get_price() const;

            /// Задать графический процессор
            void set_GPU (const std :: string &GPU1);

            /// Прочитать графический процессор
            std :: string get_GPU() const;

            /// Задать производителя
            void set_producer (const std :: string &producer1);

            /// Прочитать производителя
            std :: string get_producer() const;

            /// Задать объем памяти
            void set_memory_size (unsigned memorySZ);

            /// Прочитать объем памяти
            unsigned get_memory_size() const;

            /// Задать тип маяти
            void set_memory_type (const std :: string &memoryType1);

            /// Прочитать тип памяти
            std :: string get_memory_type() const;

            /// Задать тип подключеия
            void set_connection_type (const std :: string &connectionType1);

            /// прочитать тип подключения
            std :: string get_connection_type() const;


            /// вывод всех данных из класса
            std :: string to_string() const;
};


//void foo(const GraphicPU& p) {
//    p.to_string();
//}