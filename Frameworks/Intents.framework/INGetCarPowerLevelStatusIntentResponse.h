/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse <INGetCarPowerLevelStatusIntentResponseExport>

@property (nonatomic, copy) NSString *activeConnector;
@property (nonatomic, copy) NSString *carIdentifier;
@property (nonatomic, copy) NSNumber *chargePercentRemaining;
@property (nonatomic, copy) NSNumber *charging;
@property (nonatomic, copy) NSDictionary *chargingFormulaArguments;
@property (nonatomic, readonly) long long code;
@property (nonatomic, copy) NSDictionary *consumptionFormulaArguments;
@property (nonatomic, copy) NSMeasurement *currentBatteryCapacity;
@property (nonatomic, copy) NSDateComponents *dateOfLastStateUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSMeasurement *distanceRemaining;
@property (nonatomic, copy) NSMeasurement *distanceRemainingElectric;
@property (nonatomic, copy) NSMeasurement *distanceRemainingFuel;
@property (nonatomic, copy) NSNumber *fuelPercentRemaining;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSMeasurement *maximumBatteryCapacity;
@property (nonatomic, copy) NSMeasurement *maximumDistance;
@property (nonatomic, copy) NSMeasurement *maximumDistanceElectric;
@property (nonatomic, copy) NSMeasurement *maximumDistanceFuel;
@property (nonatomic, copy) NSMeasurement *minimumBatteryCapacity;
@property (nonatomic, copy) NSNumber *minutesToFull;
@property (readonly) Class superclass;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)_codeWithName:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (long long)_intentResponseCode;
- (id)activeConnector;
- (id)carIdentifier;
- (id)chargePercentRemaining;
- (id)charging;
- (id)chargingFormulaArguments;
- (long long)code;
- (id)consumptionFormulaArguments;
- (id)currentBatteryCapacity;
- (id)dateOfLastStateUpdate;
- (id)distanceRemaining;
- (id)distanceRemainingElectric;
- (id)distanceRemainingFuel;
- (void)encodeWithCoder:(id)arg1;
- (id)fuelPercentRemaining;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)maximumBatteryCapacity;
- (id)maximumDistance;
- (id)maximumDistanceElectric;
- (id)maximumDistanceFuel;
- (id)minimumBatteryCapacity;
- (id)minutesToFull;
- (id)propertiesByName;
- (void)setActiveConnector:(id)arg1;
- (void)setCarIdentifier:(id)arg1;
- (void)setChargePercentRemaining:(id)arg1;
- (void)setCharging:(id)arg1;
- (void)setChargingFormulaArguments:(id)arg1;
- (void)setConsumptionFormulaArguments:(id)arg1;
- (void)setCurrentBatteryCapacity:(id)arg1;
- (void)setDateOfLastStateUpdate:(id)arg1;
- (void)setDistanceRemaining:(id)arg1;
- (void)setDistanceRemainingElectric:(id)arg1;
- (void)setDistanceRemainingFuel:(id)arg1;
- (void)setFuelPercentRemaining:(id)arg1;
- (void)setMaximumBatteryCapacity:(id)arg1;
- (void)setMaximumDistance:(id)arg1;
- (void)setMaximumDistanceElectric:(id)arg1;
- (void)setMaximumDistanceFuel:(id)arg1;
- (void)setMinimumBatteryCapacity:(id)arg1;
- (void)setMinutesToFull:(id)arg1;
- (void)setPropertiesByName:(id)arg1;

@end
