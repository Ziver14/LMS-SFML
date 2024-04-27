#pragma once
#ifndef SLOPESOFZEHHER_HPP
#define SLOPESOFZEHHER_HPP
#include"Deadlift.hpp"

//Наследник класса Deadlift который переопределяет его методы

class SlopesOfZehher : public Deadlift {
public:
	SlopesOfZehher (double weight_, int reps_, int sets_, int complexity_, double oneRP_)
		: Deadlift("Тяга с прямыми ногами", weight_, reps_, sets_, complexity_, oneRP_ * 0.55) {}


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

#endif // SLOPESOFZEHHER_HPP