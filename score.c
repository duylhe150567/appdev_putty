#include "score.h"
void main()
{		int scores[MAX], marks[MAX];
		int statistics[6] = { 0,0,0,0,0,0 };
		printf("Welcome to score evaluation \n");
		input_scores(scores);
		evaluation(scores, marks);
		classification(marks, statistics);
		output_results(scores, marks, statistics);
}
