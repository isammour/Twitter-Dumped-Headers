//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class NSString, UIBarButtonItem, UIImage, UILabel;

@interface TSETweetComposerToolbar : UIToolbar
{
    id _locationTarget;
    SEL _locationAction;
    UILabel *_remainingCharacterCountLabel;
    double _remainingCharacterCountWidth;
    UIBarButtonItem *_remainingCharacterCountItem;
    UIImage *_noLocationImage;
    UIImage *_hasLocationImage;
    struct CGSize _lastLayoutSize;
    NSString *_locationName;
}

@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (void).cxx_destruct;
- (id)_tseui_locationName:(id)arg1 truncated:(_Bool)arg2 withAttributes:(id)arg3 fittingWidth:(double)arg4;
- (id)_tseui_locationNameFittingAvailableWidth;
- (void)layoutSubviews;
- (void)_tseui_updateDisplayedLocationForce:(_Bool)arg1;
- (void)setRemainingCharacterCount:(long long)arg1 isNearOrOverCharacterLimit:(_Bool)arg2;
- (id)initWithLocationTarget:(id)arg1 action:(SEL)arg2;

@end

