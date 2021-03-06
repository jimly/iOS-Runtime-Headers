/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class RCSavedRecording;

@interface RCSavedRecordingPreviewController : RCAVPreviewController {
    struct { 
        double beginTime; 
        double endTime; 
    BOOL _postPrepareShouldPlay;
    double _postPrepareStartTime;
    } _postPrepareTimeRange;
    BOOL _preparing;
    BOOL _preparingToPlay;
    RCSavedRecording *_savedRecording;
}

@property(retain) RCSavedRecording * savedRecording;

+ (id)sharedRecordingPreviewController;

- (void).cxx_destruct;
- (void)_updatePreparingToPlay;
- (void)initializeOutputRouteCategory;
- (void)pause;
- (void)playOrRestart;
- (void)playWithTimeRange:(struct { double x1; double x2; })arg1 startTime:(double)arg2;
- (id)savedRecording;
- (void)setCurrentTime:(double)arg1;
- (void)setSavedRecording:(id)arg1;
- (void)stop;
- (void)switchBackToOutputRouteCategory;

@end
