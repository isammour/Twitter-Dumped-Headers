//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1PushLandingMessageView, UIButton, UILabel;

@interface T1MomentCapsulePushLandingMessageView : UIView
{
    T1PushLandingMessageView *_landingMessageView;
    UIView *_backgroundOverlay;
}

@property(readonly, nonatomic) UIView *backgroundOverlay; // @synthesize backgroundOverlay=_backgroundOverlay;
@property(readonly, nonatomic) T1PushLandingMessageView *landingMessageView; // @synthesize landingMessageView=_landingMessageView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIButton *disclosureButton;
@property(readonly, nonatomic) UILabel *textLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

