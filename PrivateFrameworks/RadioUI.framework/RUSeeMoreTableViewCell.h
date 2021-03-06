/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class SKUICircleProgressIndicator, UILabel;

@interface RUSeeMoreTableViewCell : UITableViewCell {
    SKUICircleProgressIndicator *_activityIndicator;
    UILabel *_detailLabel;
    int _seeMoreState;
}

@property int seeMoreState;

- (void).cxx_destruct;
- (void)_updateForChangedState;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (int)seeMoreState;
- (void)setSeeMoreState:(int)arg1;
- (void)tintColorDidChange;

@end
