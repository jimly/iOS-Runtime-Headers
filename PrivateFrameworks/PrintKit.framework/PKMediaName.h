/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString;

@interface PKMediaName : NSObject {
    NSString *_baseName;
    double _conversionFactor;
    double _heightInUnits;
    NSString *_mediaClass;
    NSString *_mediaName;
    int _units;
    double _widthInUnits;
    NSString *_widthStr;
}

@property(retain) NSString * baseName;
@property double conversionFactor;
@property(readonly) double height;
@property double heightInUnits;
@property(readonly) BOOL isRoll;
@property(retain) NSString * mediaClass;
@property(retain) NSString * mediaName;
@property(readonly) NSString * unitStr;
@property int units;
@property(readonly) double width;
@property double widthInUnits;
@property(retain) NSString * widthStr;

+ (id)pkMediaNameWithString:(id)arg1;

- (id)baseName;
- (double)conversionFactor;
- (void)dealloc;
- (double)height;
- (double)heightInUnits;
- (id)initWithString:(id)arg1;
- (BOOL)isRoll;
- (id)mediaClass;
- (id)mediaName;
- (void)parseMediaName:(id)arg1;
- (void)setBaseName:(id)arg1;
- (void)setConversionFactor:(double)arg1;
- (void)setHeightInUnits:(double)arg1;
- (void)setMediaClass:(id)arg1;
- (void)setMediaName:(id)arg1;
- (void)setUnits:(int)arg1;
- (void)setWidthInUnits:(double)arg1;
- (void)setWidthStr:(id)arg1;
- (id)unitStr;
- (int)units;
- (double)width;
- (double)widthInUnits;
- (id)widthStr;

@end
