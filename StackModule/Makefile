CC = gcc

LinkedDynamicTarget = StackModuleLinkedDynamic
LinkedDynamicSource = StackModuleLinkedDynamic.c

ContiguousStaticTarget = StackModuleContiguousStatic
ContiguousStaticSource = StackModuleContiguousStatic.c

BenchmarkStaticTarget = benchmark_static
BenchmarkStaticSource = benchmark_static.c

BenchmarkDynamicTarget = benchmark_dynamic
BenchmarkDynamicSource = benchmark_dynamic.c
# agregamos esto. 

TestHeader = StackModule.h
TestSource = StackModuleTest.c

all: ${LinkedDynamicTarget} ${ContiguousStaticTarget} ${BenchmarkStaticTarget} ${BenchmarkDynamicTarget}


${LinkedDynamicTarget}: ${LinkedDynamicSource} ${TestSource} ${TestHeader}
	${CC} -o ${LinkedDynamicTarget} ${LinkedDynamicSource} ${TestSource}

${ContiguousStaticTarget}: ${ContiguousStaticSource} ${TestSource} ${TestHeader}
	${CC} -o ${ContiguousStaticTarget} ${ContiguousStaticSource} ${TestSource}

${BenchmarkStaticTarget}: ${BenchmarkStaticSource} ${ContiguousStaticSource} ${TestHeader}
    ${CC} -o ${BenchmarkStaticTarget} ${BenchmarkStaticSource} ${ContiguousStaticSource}

${BenchmarkDynamicTarget}: ${BenchmarkDynamicSource} ${LinkedDynamicSource} ${TestHeader}
    ${CC} -o ${BenchmarkDynamicTarget} ${BenchmarkDynamicSource} ${LinkedDynamicSource}
# y esto

