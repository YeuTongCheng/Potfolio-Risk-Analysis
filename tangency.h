#ifndef Assignment7_h
#define Assignment7_h
using namespace std;
class Portfolio
{
public:
    double PercentEquity;
    double PercentBond;
    double Ret;
    double Vol;
    double percentCash;
    Portfolio(double percentEquity,double percentBond,double ret, double vol);
    double getpercentEquity();
    double getpercentBond();
    double getret();
    double getvol();
};

class Market
{
protected:
    double CorrEquityBond;
    double EquityReturn;
    double EquityVol;
    double BondReturn;
    double BondVol;
    double RiskFreeRate;
    int NumSimulations;
    double calculateTangent(double percentEquity);
    vector<double> r_equity;
    vector<double> r_bond;
    
    double tan_PercentEquity=0.02;
    double tan_PercentBond=0.97999999999999998;
    double tan_Return=0.031685056368096876;
    double tan_Volatility=0.020278669411740571;
    // obtained from findTangencyPortfolio()
    
public:
    Market(double corrEquityBond,double equityReturn,double equityVol,double bondReturn,double bondVol,double riskFreeRate,int numSimulations);
    Portfolio analyzePortfolio(double percentEquity,double percentBond);
    Portfolio findTangencyPortfolio();
    Portfolio findPortfolioForVol(double vol);
    double f(double percentEquity,double vol);
    
};

#endif 
