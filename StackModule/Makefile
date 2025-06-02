CC = gcc

LinkedDynamicTarget = StackModuleLinkedDynamic
LinkedDynamicSource = StackModuleLinkedDynamic.c

ContiguousStaticTarget = StackModuleContiguousStatic
ContiguousStaticSource = StackModuleContiguousStatic.c

TestHeader = StackModule.h
TestSource = StackModuleTest.c

all: ${LinkedDynamicTarget} ${ContiguousStaticTarget}

${LinkedDynamicTarget}: ${LinkedDynamicSource} ${TestSource} ${TestHeader}
	${CC} -o ${LinkedDynamicTarget} ${LinkedDynamicSource} ${TestSource}

${ContiguousStaticTarget}: ${ContiguousStaticSource} ${TestSource} ${TestHeader}
	${CC} -o ${ContiguousStaticTarget} ${ContiguousStaticSource} ${TestSource}

