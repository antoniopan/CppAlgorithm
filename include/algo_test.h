#ifndef ALGO_TEST
#define ALGO_TEST

namespace CppAlgo{

    class AlgoTest
    {
    public:
        virtual ~AlgoTest() {}

        virtual void ShowDescription() = 0;

        virtual void Run() = 0;
    };
}


#endif
