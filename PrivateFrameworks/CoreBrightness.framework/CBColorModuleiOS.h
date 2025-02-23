/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBColorModuleiOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol, NightShiftSupportProtocol> {
    int  _NSamples;
    bool  _aggregatedConfigApplied;
    bool  _allALSEventsArrived;
    NSMutableDictionary * _alsNodes;
    NSMutableArray * _alsServices;
    bool  _ammoliteEnabledStatus;
    unsigned int  _backlightService;
    <CBBrightnessProxy> * _brightnessControl;
    unsigned int  _ceModelID;
    CBCEModule * _ceModule;
    bool  _colorEffectsEnabled;
    CBColorFilter * _colorFilter;
    struct { 
        struct ColorEffects {} *cfx; 
        bool blueReductionEnabled; 
        bool blueReductionFactor; 
        bool nightModeSupported; 
        bool fadeInProgress; 
        bool enforceSlowRamps; 
        float brightnessBoost; 
        bool whitePointEnabled; 
        double enablementTs; 
        bool forceSnapping; 
        float currentChromaticitySensitivity; 
        bool harmonySupported; 
        bool harmonyEnabled; 
        bool harmonyActive; 
        bool harmonyAvailable; 
        float harmonyStrength; 
        float harmonyFixedStrength; 
    }  _colorStruct;
    bool  _continueWithFewerALSs;
    bool  _displayOn;
    bool  _dropALSColorSamples;
    bool  _enableMitigations;
    bool  _endRamp;
    bool  _fadeInProgress;
    NSMutableArray * _filters;
    bool  _firstALSEventArrived;
    float  _firstSampleTimeoutValue;
    bool  _forceColorUpdate;
    unsigned long long  _moduleType;
    NSMutableArray * _modules;
    struct { 
        float XYZ[3]; 
        struct { 
            float x; 
            float y; 
        } xy; 
        float CCT1; 
        struct { 
            int orientation; 
            float rawChannels[6]; 
            int nChannels; 
            float brightness; 
        } extra; 
    }  _overrideColorSample;
    NSMutableDictionary * _pendingALSSamples;
    bool  _potentiallyBustedALS;
    float  _preStrobeDimPeriod;
    NSMutableDictionary * _properties;
    NSObject<OS_dispatch_source> * _rampTimer;
    int  _registeredColorALSCount;
    NSMutableArray * _relevantServices;
    struct { 
        unsigned char firstTimerFire; 
        NSObject<OS_dispatch_source> *logTimer; 
        int periodS; 
    }  _reportContext;
    bool  _sensorOverridden;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long moduleType;
@property (readonly) Class superclass;

- (bool)BLRCCTRangePropertyHandler:(id)arg1;
- (bool)BLRCCTTargetPropertyHandler:(id)arg1;
- (bool)BLRFactorPropertyHandler:(id)arg1;
- (void)BLRFactorUpdate:(float)arg1;
- (void)BLRFactorUpdate:(float)arg1 withPeriod:(float)arg2 shouldForceUpdate:(bool)arg3;
- (bool)CAAABSensorOverridePropertyHandler:(id)arg1;
- (bool)CAEnabledPropertyHandler:(id)arg1;
- (bool)CAFadesEnabledHandler:(id)arg1;
- (bool)CAFixedStrengthPropertyHandler:(id)arg1;
- (bool)CALabShiftPropertyHandler:(id)arg1;
- (bool)CAModeMappingHandler:(id)arg1;
- (bool)CAStrengthPropertyHandler:(id)arg1;
- (bool)CAStrengthRampPeriodTweakPropertyHandler:(id)arg1;
- (void)CAStrengthUpdate:(float)arg1 withPeriod:(float)arg2;
- (bool)CAWeakestColorAdaptationModeAnimatedPropertyHandler:(id)arg1;
- (bool)CAWeakestColorAdaptationModePropertyHandler:(id)arg1;
- (bool)CEEnablePropertyHandler:(id)arg1 key:(id)arg2;
- (bool)CEOverridePropertyHandler:(id)arg1 key:(id)arg2;
- (bool)CoreBrightnessFeaturesDisabledPropertyHandler:(id)arg1;
- (void)activateColorAdaptation;
- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (bool)ammolitePropertyHandler:(id)arg1 key:(id)arg2;
- (void)applyAggregatedConfig:(bool)arg1;
- (bool)applyAggregatedConfigPropertyHandler:(id)arg1;
- (bool)applyPendingSamples;
- (void)armFirstALSSampleTimer;
- (void)cancelFirstSampleTimeout;
- (bool)carryLogCommentHandler:(id)arg1;
- (bool)carryLogCommitHandler:(id)arg1;
- (bool)carryLogEnabledHandler:(id)arg1;
- (bool)colorFilterModeHandler:(id)arg1;
- (bool)colorRampPeriodOverrideHandler:(id)arg1;
- (void)colorRampRoutine:(const struct { float x1; float x2[9]; unsigned int x3; float x4; struct { float x_5_1_1; float x_5_1_2; } x5; int x6; double x7; }*)arg1;
- (void)commitPowerLogReport:(struct { struct { double x_1_1_1[17]; int x_1_1_2[17]; int x_1_1_3; unsigned long long x_1_1_4; } x1; struct { double x_2_1_1[17]; int x_2_1_2[17]; int x_2_1_3; unsigned long long x_2_1_4; } x2; struct { double x_3_1_1[46]; int x_3_1_2; unsigned long long x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; bool x_4_1_4; float x_4_1_5; } x4; struct { double x_5_1_1[10]; int x_5_1_2; double x_5_1_3; } x5; struct { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; float x_6_1_5; float x_6_1_6; } x6; int x7; }*)arg1;
- (bool)convertNSData:(id)arg1 toUint32:(unsigned int*)arg2;
- (id)copyIdentifiers;
- (id)copyLocalAggregatedConfig;
- (id)copyPreferenceForKey:(id)arg1 user:(id)arg2;
- (id)copyPreferencesForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyInternalForKey:(id)arg1;
- (void)dealloc;
- (void)debugPrintColorSampleAsRGB:(id)arg1;
- (bool)displayBrightnessFactorPropertyHandler:(id)arg1;
- (void)displayBrightnessFactorUpdate:(float)arg1;
- (void)enableMitigations:(bool)arg1;
- (void)filterInitialize;
- (void)firstALSSampleTimeout;
- (int)getPid:(struct __IOHIDServiceClient { }*)arg1;
- (id)getRegistryIDForHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (int)getVid:(struct __IOHIDServiceClient { }*)arg1;
- (void)handleALSEvent:(id)arg1;
- (void)handleDisplayBrightnessFactorZero:(id)arg1;
- (void)handleFilterNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (void)handleHIDEventInternal:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)init;
- (void)initColorStruct;
- (id)initWithBacklight:(unsigned int)arg1 andModuleType:(unsigned long long)arg2;
- (id)initWithBacklight:(unsigned int)arg1 andModuleType:(unsigned long long)arg2 andBrightnessControl:(id)arg3;
- (void)inputAmbientColorSample:(struct { float x1[3]; struct { float x_2_1_1; float x_2_1_2; } x2; float x3; struct { int x_4_1_1; float x_4_1_2[6]; int x_4_1_3; float x_4_1_4; } x4; }*)arg1 force:(bool)arg2 trust:(bool)arg3;
- (void)loadBacklightProperties;
- (unsigned long long)moduleType;
- (id)newAdaptationModeMappingArray:(float*)arg1 strengthNum:(int)arg2;
- (id)newAdaptationModeMappingDictionary:(float*)arg1 strengthNum:(int)arg2;
- (id)newAggregatedConfigFromSerializedConfig:(id)arg1;
- (id)newArrayFromDoubles:(double*)arg1 size:(int)arg2;
- (id)newArrayFromIntegers:(int*)arg1 size:(int)arg2;
- (bool)parseAdaptationModeMappingArray:(id)arg1 strengths:(float*)arg2 strengthNum:(int)arg3;
- (bool)parseAdaptationModeMappingDictionary:(id)arg1 strengths:(float*)arg2 strengthNum:(int)arg3;
- (bool)preStrobeDimPeriodPropertyHandler:(id)arg1;
- (bool)preStrobePropertyHandler:(id)arg1;
- (void)processColorSample:(id)arg1 forceUpdate:(bool)arg2;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)reportCommitWithStop:(bool)arg1;
- (void)reportInitialize;
- (void)reportResetTimerWithStop:(bool)arg1;
- (void)reportToAggd:(struct { struct { double x_1_1_1[17]; int x_1_1_2[17]; int x_1_1_3; unsigned long long x_1_1_4; } x1; struct { double x_2_1_1[17]; int x_2_1_2[17]; int x_2_1_3; unsigned long long x_2_1_4; } x2; struct { double x_3_1_1[46]; int x_3_1_2; unsigned long long x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; bool x_4_1_4; float x_4_1_5; } x4; struct { double x_5_1_1[10]; int x_5_1_2; double x_5_1_3; } x5; struct { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; float x_6_1_5; float x_6_1_6; } x6; int x7; }*)arg1;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (bool)serializedAggregatedConfigPropertyHandler:(id)arg1;
- (void)setNightShiftFactorDictionary:(id)arg1;
- (void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3;
- (void)setPreferences:(id)arg1 forKey:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)setPropertyInternal:(id)arg1 forKey:(id)arg2;
- (bool)start;
- (bool)startNewTimerWithFreq:(float)arg1;
- (void)stop;
- (void)timerRoutine:(id)arg1;
- (bool)ttRestrictionHandler:(id)arg1;
- (bool)ttRestrictionReload;
- (void)updateActivity;
- (void)updateAvailability;

@end
