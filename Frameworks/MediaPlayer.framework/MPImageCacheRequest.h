/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MPImageRequestDelegate>, <NSObject><NSCopying>, MPImageCache, MPImageModifier, UIColor, UIImage;

@interface MPImageCacheRequest : NSOperation {
    struct CGSize { 
        float width; 
        float height; 
    MPImageCache *_cache;
    id _completionHandler;
    int _contentMode;
    BOOL _decodeOnFetch;
    <MPImageRequestDelegate> *_delegate;
    UIColor *_fillColor;
    } _finalSize;
    BOOL _finalSizeMayDifferWhenApsectRatioMatches;
    int _interpolationQuality;
    MPImageModifier *_modifier;
    long long _tag;
    <NSObject><NSCopying> *_uniqueKey;
}

@property MPImageCache * cache;
@property(readonly) BOOL canRequestSynchronously;
@property(copy) id completionHandler;
@property int contentMode;
@property BOOL decodeOnFetch;
@property <MPImageRequestDelegate> * delegate;
@property(retain) UIColor * fillColor;
@property(readonly) UIImage * finalPlaceholderImage;
@property struct CGSize { float x1; float x2; } finalSize;
@property BOOL finalSizeMayDifferWhenApsectRatioMatches;
@property int interpolationQuality;
@property(retain) MPImageModifier * modifier;
@property(readonly) UIImage * placeholderImage;
@property long long tag;
@property(retain) <NSObject><NSCopying> * uniqueKey;

- (void).cxx_destruct;
- (BOOL)_canUseInputImageAsFinalOutput:(id)arg1;
- (void)_finishWithBlock:(id)arg1;
- (void)_finishWithDelegate:(id)arg1;
- (void)_finishWithImage:(id)arg1;
- (void)_getGeometryForCreatingNewImage:(id)arg1 finalSize:(struct CGSize { float x1; float x2; })arg2 contentSize:(struct CGSize { float x1; float x2; }*)arg3 contentSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (id)_newBitmapImageFromImage:(id)arg1 finalSize:(struct CGSize { float x1; float x2; })arg2;
- (id)cache;
- (BOOL)canRequestSynchronously;
- (void)cancel;
- (void)completeImageLoadOperationWithImage:(id)arg1;
- (id)completionHandler;
- (int)contentMode;
- (id)copyImageFromImage:(id)arg1;
- (id)copyRawImageReturningError:(id*)arg1;
- (BOOL)decodeOnFetch;
- (id)delegate;
- (id)description;
- (id)fillColor;
- (id)finalPlaceholderImage;
- (struct CGSize { float x1; float x2; })finalSize;
- (BOOL)finalSizeMayDifferWhenApsectRatioMatches;
- (unsigned int)hash;
- (id)init;
- (int)interpolationQuality;
- (BOOL)isEqual:(id)arg1;
- (void)main;
- (id)modifier;
- (id)placeholderImage;
- (void)setCache:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setContentMode:(int)arg1;
- (void)setDecodeOnFetch:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFinalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFinalSizeMayDifferWhenApsectRatioMatches:(BOOL)arg1;
- (void)setInterpolationQuality:(int)arg1;
- (void)setModifier:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setUniqueKey:(id)arg1;
- (long long)tag;
- (id)uniqueKey;

@end
