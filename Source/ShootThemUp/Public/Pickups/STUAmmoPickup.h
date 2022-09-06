// Shoot Them Up Game

#pragma once

#include "CoreMinimal.h"
#include "Pickups/STUBasePickup.h"
#include "STUAmmoPickup.generated.h"

class ASTUBaseWeapon;

UCLASS()
class SHOOTTHEMUP_API ASTUAmmoPickup : public ASTUBasePickup
{
    GENERATED_BODY()

        protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups", meta = (ClampMin = "1.0", ClampMax = "10.0"));
            int32 ClipsAmount = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups", meta = (ClampMin = "1.0", ClampMax = "10.0"));
            TSubclassOf<ASTUBaseWeapon> WeaponType;

private:
    virtual bool GivePickupTool(APawn* PlayerPawn) override;
};
