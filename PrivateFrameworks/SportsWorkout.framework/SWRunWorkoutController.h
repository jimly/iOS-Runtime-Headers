/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class CLLocation, CLLocationManager, NSDictionary, NSMutableArray, NSString, NSTimer, SWDataController, SWDataControllerSnapshotObserver, SWFastestDistanceWindowObserver, SWIntervalSnapshotObserver, SWRemote, SWRunSensor, SWRunWorkout, SWRunWorkoutPreset, SWUserInteractionSnapshotObserver;

@interface SWRunWorkoutController : NSObject <CLLocationManagerDelegate> {
    SWDataController *_dataController;
    SWDataControllerSnapshotObserver *_dataControllerSnapshotObserver;
    SWFastestDistanceWindowObserver *_fastestKilometerObserver;
    SWFastestDistanceWindowObserver *_fastestMileObserver;
    BOOL _hasEverStarted;
    BOOL _hasFiredBeginningWorkoutPrompt;
    BOOL _isWalk;
    SWIntervalSnapshotObserver *_kmSnapshotObserver;
    CLLocationManager *_locationManager;
    SWIntervalSnapshotObserver *_mileSnapshotObserver;
    SWRunWorkoutPreset *_preset;
    float _previousObservedCalories;
    float _previousObservedDistanceInMiles;
    unsigned int _previousObservedElapsedTimeInSeconds;
    CLLocation *_previousObservedLocation;
    float _previousObservedPaceInSecondsPerMile;
    SWRemote *_remote;
    SWRunSensor *_sensor;
    BOOL _sensorBatteryIsLowNotificationSent;
    SWIntervalSnapshotObserver *_tenSecondSnapshotObserver;
    SWUserInteractionSnapshotObserver *_userInteractionSnapshotObserver;
    SWRunWorkout *_workout;
    NSTimer *_workoutObserverTimer;
    NSMutableArray *_workoutObservers;
    NSString *_workoutState;
}

@property(readonly) BOOL canBeUsedForRunCalibration;
@property(readonly) BOOL canBeUsedForWalkCalibration;
@property(readonly) SWDataController * dataController;
@property(readonly) BOOL hasEverStarted;
@property(readonly) BOOL hasPowerSong;
@property(readonly) BOOL isCalibratedForRun;
@property(readonly) BOOL isCalibratedForWalk;
@property BOOL isCalibration;
@property(readonly) float maxCalibrationDistanceMiles;
@property(readonly) float minCalibrationDistanceMiles;
@property(readonly) NSString * powerSongName;
@property(retain) SWRunWorkoutPreset * preset;
@property(readonly) SWRemote * remote;
@property(readonly) SWRunSensor * sensor;
@property(readonly) NSDictionary * workoutData;
@property(readonly) NSString * workoutState;

+ (void)__releaseWorkoutInProgressFileLock;
+ (id)__systemVersion;
+ (BOOL)__takeWorkoutInProgressFileLock;
+ (id)__uniqueIdentifier;
+ (id)defaultController;
+ (void)disableSDA;
+ (id)distanceDisplayUnitsForPreferences;
+ (id)distanceUnitForString:(id)arg1;
+ (void)enableSDA;
+ (id)goalTypeForString:(id)arg1;
+ (BOOL)isWorkoutInProgressOnSystem;
+ (float)kgsToLbs:(float)arg1;
+ (float)kmToMiles:(float)arg1;
+ (float)lbsToKgs:(float)arg1;
+ (float)milesToKm:(float)arg1;
+ (void)resetDefaultController;
+ (float)secondsPerKmToSecondsPerMile:(float)arg1;
+ (float)secondsPerMileToSecondsPerKm:(float)arg1;
+ (BOOL)shouldUseKilometersForDistanceWithWorkoutSummary:(id)arg1;
+ (BOOL)shouldUseKilometersForPaceWithWorkoutSummary:(id)arg1;

- (void)_beginSearchingForSensorAfterLink;
- (void)_cancelWorkoutObserverTimer;
- (void)_linkStateChangedNotification:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postNotificationName:(id)arg1;
- (id)_powerSongPersistentUIDString;
- (void)_remoteCommandIssued:(id)arg1;
- (void)_searchStateChangedNotification:(id)arg1;
- (void)_setWorkoutState:(id)arg1;
- (BOOL)_shouldRecordLocation;
- (void)_startWorkoutObserverTimer;
- (void)_updateWorkoutObserversForOldState:(id)arg1 newState:(id)arg2;
- (void)_updateWorkoutObserversForTimer:(id)arg1;
- (void)_updateWorkoutObserversForUserEvent:(id)arg1;
- (void)activateWorkout;
- (BOOL)canBeUsedForRunCalibration;
- (BOOL)canBeUsedForWalkCalibration;
- (id)dataController;
- (void)dealloc;
- (void)endWorkout;
- (BOOL)hasEverStarted;
- (BOOL)hasPowerSong;
- (id)initWithSensor:(id)arg1 remote:(id)arg2;
- (BOOL)isCalibratedForRun;
- (BOOL)isCalibratedForWalk;
- (BOOL)isCalibration;
- (float)maxCalibrationDistanceMiles;
- (float)minCalibrationDistanceMiles;
- (void)pauseWorkout;
- (void)playOnDemandPrompt;
- (void)playPowerSong;
- (id)powerSongName;
- (void)prepareToActivateWorkout;
- (id)preset;
- (void)refreshSettings;
- (void)registerWorkoutObserver:(id)arg1;
- (id)remote;
- (void)resetCalibration;
- (BOOL)saveCalibrationData;
- (BOOL)saveCalibrationDataWithAdjustedDistanceInMiles:(float)arg1;
- (id)sensor;
- (void)setIsCalibration:(BOOL)arg1;
- (void)setPreset:(id)arg1;
- (void)stopVoicePrompts;
- (void)togglePauseResumeWorkoutFromHeadset;
- (void)unlinkRemote;
- (void)unregisterWorkoutObserver:(id)arg1;
- (id)workoutData;
- (id)workoutState;

@end
