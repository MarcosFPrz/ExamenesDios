#include "Observador.h"
#include "DivObserver.h"
#include "ModObserver.h"
#include "Sujeto.h"

int main() 
{
	Sujeto subj;
	DivObserver divObs1(&subj, 4); 
	DivObserver divObs2(&subj, 3);
	ModObserver modObs3(&subj, 3);
	subj.setVal(14);

	system("Pause");
	
	return 0;

}