#pragma once
#ifndef DEADLIFT_HPP
#define DEADLIFT_HPP

#include <string>

//Класс "Deadlift" от которого будут наследоваться другие классы зависимых от него упражнений

class Deadlift {
public:
	//Конструктор который заполняет все поля класса, а поле name сразу инициализирует названием упражнения 
	Deadlift(const std::string& name_, double weight_, int reeps_, int sets_, int complexity_, double oneRP_) :
		name_("Становая тяга"),weight_(weight_),reeps_(reeps_),sets_(sets_),complexity_(complexity_),oneRP_(oneRP_) {}

	//методы для получения доступа к полям класса
	virtual int	   getReeps()		const { return reeps_;		}
	virtual int    getSets()		const { return sets_;		}
	virtual int    getComplexity()	const { return complexity_; }
	virtual double getWeight()		const { return weight_;		}
	virtual double getOneRP()		const { return oneRP_;		}

	// методы для изменения полей класса
	virtual void setWeight		(double weight)	 { weight_ = weight;		 }
	virtual void setReeps		(int reeps)		 { reeps_ = reeps;			 }
	virtual void setSets		(int sets)		 { sets_ = sets;			 }
	virtual void setComplexity  (int complexity) { complexity_ = complexity; }
	virtual void setOneRP		(double oneRP)	 { oneRP_ = oneRP;			 }
	
protected:
	double weight_;				//вес с которым нужно делать упражнение
	int reeps_;					//колличество повторений
	int sets_;					//колличество повторов
	int complexity_;			//сложность
	double oneRP_;				//вес с которым делается одно повторение
	std::string name_;			//Название упражнения
};

#endif // DEADLIFT_HPP 
