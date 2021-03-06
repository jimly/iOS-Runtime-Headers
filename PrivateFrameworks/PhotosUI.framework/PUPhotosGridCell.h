/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUPhotoView, PUPhotoViewContentHelper, UIImageView, UIView;

@interface PUPhotosGridCell : UICollectionViewCell {
    UIView *_highlightOverlayView;
    PUPhotoViewContentHelper *_photoContentHelper;
    UIImageView *_selectionBadgeImageView;
    BOOL _selectionBadgeVisible;
    UIView *_selectionOverlayView;
    PUPhotoView *_temporaryPhotoContentView;
    BOOL _transitionIsAppearing;
}

@property(getter=isHighlighted) BOOL highlighted;
@property(retain) PUPhotoViewContentHelper * photoContentHelper;
@property(getter=isSelectionBadgeVisible) BOOL selectionBadgeVisible;
@property(retain) PUPhotoView * temporaryPhotoContentView;
@property BOOL transitionIsAppearing;

- (void).cxx_destruct;
- (void)_updateHighlight;
- (void)_updateSelectionBadge;
- (void)_updateSubviewOrdering;
- (void)addTemporaryPhotoContentView;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSelectionBadgeVisible;
- (void)layoutSubviews;
- (id)photoContentHelper;
- (void)prepareForReuse;
- (void)removeTemporaryPhotoContentView;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPhotoContentHelper:(id)arg1;
- (void)setSelectionBadgeVisible:(BOOL)arg1;
- (void)setTemporaryPhotoContentView:(id)arg1;
- (void)setTemporaryPhotoImage:(id)arg1 with:(int)arg2;
- (void)setTransitionIsAppearing:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)temporaryPhotoContentView;
- (BOOL)transitionIsAppearing;

@end
