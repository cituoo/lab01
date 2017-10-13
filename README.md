[![Build Status](https://www.travis-ci.org/cituoo/lab01.svg?branch=master)](https://www.travis-ci.org/cituoo/lab01)

// Структуры данных

struct Point
{
	float x;
	float y;
}; // эта точка с запятой важна
  // В структуре по умолчанию открытй тип доступа к переменным и мы можем к ним обращаться всегда
Point point = {0, 0} // Вместо второго поинт может быть любое имя переменной
point.x = 1; // Обращение к переменным поинта идет через точку

struct Student 
{ // Лучше имена полей задавать с большой буквы
	std::string Name;
	std::string Rating;
	std::string LastName;
};

Student = student1 = {"Marinf", "3, 4, 4", "Semenova"};

int main()
{
	int z = 0;
	int x = 13;

	z = x;
	x = 123; // x = 123; z = 13;
	z = 4; // z = 4; x = 123;

	int& y = x; // ссылка всегда должна быть инициализирована 
				// y стал псевдонимом х 
	// x = 13;
	y += 10; // x = 23; y = 23;
	x += 10; // x= 33; y = 33;	
	y = z; // z = 4; y = 4; x = 4;
	y ++; // z = 4; y = 5; x = 5;

	Student& ref = student1;
	ref.LastName = "Petrova"; // Lastname = Petrova; student1.Lastname = Petrova

	const Student& constref = student1; /  / Мы не можем менять поля ссылки, только читать
										// Но мы можем менять студент1 и будет меняться констреф
}
