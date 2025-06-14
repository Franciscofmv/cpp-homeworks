
#ifndef INTENATIONAL_UNITS_H_
#define INTENATIONAL_UNITS_H_

class InternationalUnits{
    private:
        int kilometers;
        double meters;

    public:
        // Constructors:
    InternationalUnits();
    InternationalUnits(int& km, double& m);

        // Get data members values:
    int get_km(){return kilometers;}
    double get_m(){return meters;}
};
#endif