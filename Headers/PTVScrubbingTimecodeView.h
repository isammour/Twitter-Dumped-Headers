//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImageView;

@interface PTVScrubbingTimecodeView : UIView
{
    NSLayoutConstraint *_shareIconViewLeadingConstraint;
    NSLayoutConstraint *_timecodeButtonLeadingConstraint;
    struct CGSize _referenceSize;
    struct CGSize _largeReferenceSize;
    double _timecode;
    UIButton *_timecodeButton;
    UIImageView *_shareIconView;
}

+ (struct UIEdgeInsets)ContentInsets;
@property(readonly, nonatomic) UIImageView *shareIconView; // @synthesize shareIconView=_shareIconView;
@property(readonly, nonatomic) UIButton *timecodeButton; // @synthesize timecodeButton=_timecodeButton;
@property(nonatomic) double timecode; // @synthesize timecode=_timecode;
- (void).cxx_destruct;
- (void)updateReferenceSizeConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

