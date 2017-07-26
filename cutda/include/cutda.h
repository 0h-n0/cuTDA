#ifndef CUTDA_H
#define CUTDA_H

namespace CUTDA {

    class Data{
    public:
        Data(void);
        virtual ~Data(void);
        void read(void);
        void check();
        void set();
    private:
        int dim;
    };
}


#endif

