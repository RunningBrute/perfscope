#include <benchmark/benchmark.h>
#include <vector>

static void BM_VectorPushBack(benchmark::State& state)
{
    for (auto _ : state)
    {
        std::vector<int> v;
        for (int i = 0; i < 1000; ++i)
        {
            v.push_back(i);
        }
    }
}

static void BM_VectorPushBackWithReserve(benchmark::State& state)
{
    for (auto _ : state)
    {
        std::vector<int> v;
        v.reserve(1000);
        for (int i = 0; i < 1000; ++i)
        {
            v.push_back(i);
        }
    }
}

BENCHMARK(BM_VectorPushBack);
BENCHMARK(BM_VectorPushBackWithReserve);

BENCHMARK_MAIN();
