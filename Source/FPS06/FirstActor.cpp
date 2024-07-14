#include "FirstActor.h"
#include <string>

AFirstActor::AFirstActor()
{
 	PrimaryActorTick.bCanEverTick = true;
}

int32 AFirstActor::Test(int32 intTest)
{
	int32 result = intTest * intTest;
	UE_LOG(LogTemp, Log, TEXT("Test Result: %d"), result);
	return intTest * intTest;
}