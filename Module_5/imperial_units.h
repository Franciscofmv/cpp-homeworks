
#ifndef IMPERIAL_UNITS_H_
#define IMPERIAL_UNITS_H_
#define  one_fur 1
#define  one_yd 1
#define one_ft
#define  m_in_one_fur 201.168
#define  yd_in_one_fur 220
#define  ft_in_one_fur 660
#define  ft_in_one_yd 3
#define  m_in_one_yd 0.9144
#define m_in_one_ft 0.3048

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

            // Print data:
        void print();
            
            // Operator to go from ImperialUnits to InternationalUnits:
        operator InternationalUnits();


};
#endif