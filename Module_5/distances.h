

#ifndef DISTANCES_H_
#define DISTANCES_H_
constexpr int one_fur = 1;
constexpr int one_yd = 1;
constexpr double m_in_one_fur = 201.168;
constexpr int yd_in_one_fur= 220;
constexpr int ft_in_one_fur = 660;
constexpr int ft_in_one_yd = 3;
class ImperialUnits{
    private:
        int furlong;
        int yards;
        double feet;
    
    public:
            // Define constructors:
        ImperialUnits();
        ImperialUnits(int& flong, int& yds, double& ft);

            // Define inner conversions:
        ImperialUnits(InternationalUnits& iu);
            // Get private data members:
        int get_furlong(){return furlong;}
        int get_yards(){return yards;}
        double get_ft(){return feet;}


};

class InternationalUnits{
    private:
        int kilometers;
        double meters;

    public:
    int get_km(){return kilometers;}
    double get_m(){return meters;}
};
#endif