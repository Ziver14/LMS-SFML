#pragma once

#ifndef STIFFLEGSDEADLIFT_HPP
#define STIFFLEGSDEADLIFT_HPP
#include"Deadlift.hpp"

//Наследник класса Deadlift который переопределяет его методы

class StiffLegsDeadlift : public Deadlift{
public:
	StiffLegsDeadlift(double weight_, int reps_, int sets_, int complexity_, double oneRP_)
		: Deadlift("Тяга с прямыми ногами", weight_, reps_, sets_, complexity_, oneRP_ * 0.8) {}


int	   getReeps()		const override { return reeps_; }
int    getSets()		const override { return sets_; }
int    getComplexity()	const override { return complexity_; }
double getWeight()		const override { return weight_; }
double getOneRP()		const override { return oneRP_; }


void setWeight(double weight)      override { weight_ = weight; }
void setReeps(int reeps)           override { reeps_ = reeps; }
void setSets(int sets)             override { sets_ = sets; }
void setComplexity(int complexity) override { complexity_ = complexity; }
void setOneRP(double oneRP)		   override { oneRP_ = oneRP; }

};

#endif // STIFFLEGSDEADLIFT_HPP