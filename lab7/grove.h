#include <stdio.h>
#include <stdlib.h>

double soilQuality(int x, int y);
double sunExposure(int x, int y);
double irrigationExposure(int x, int y);
double estimateYield(int x, int y);
double estimateQuality(int x, int y);
double harvestTime(int x, int y);
double fieldScore(int x, int y);
void outputScores(int x, int y);
double plantingCost(int x, int y);
double pricePerUnit(int x, int y);
double revenue(int x, int y);
double fieldProfit(int x, int y);
double roi(int x, int y);
double annualRevenue(int x, int y);
double compareProfits(int x1, int y1, int x2, int y2);
double compareAnnual(int x1, int y1, int x2, int y2);
double betterInvestment(int x1, int y1, int x2, int y2);
