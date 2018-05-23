//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface TFNBarButtonItemButton : UIButton
{
    _Bool _imageNeedsUpdate;
    UIColor *_lastAppliedTintColor;
    _Bool _delaysTinting;
    _Bool _updatingImage;
    _Bool _delayTinting;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) _Bool delayTinting; // @synthesize delayTinting=_delayTinting;
- (void).cxx_destruct;
- (_Bool)tfn_navigationControllerBackGestureEnabled;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (id)_useTintColor;
- (void)_updateImage;
- (void)_shouldUpdateImage;
- (void)updateImageInsetsTo:(struct UIEdgeInsets)arg1;
- (void)setImageEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 delayTinting:(_Bool)arg2;

@end

