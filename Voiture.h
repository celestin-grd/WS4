#ifndef Voiture_h
#define Voiture_h

class Voiture{
protected:
    int vitesseMax;
    int vitesse;
    int acceleration;
    static int nbVoiture;
    void init_car(int, int);

public:
    Voiture(void);
    Voiture(int, int);
    virtual void accelerer(void);
};

#endif
