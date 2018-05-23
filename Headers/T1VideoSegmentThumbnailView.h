//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1TimeDurationPillView, UIImage, UIImageView;

@interface T1VideoSegmentThumbnailView : UIView
{
    UIView *_maskView;
    UIView *_outlineView;
    T1TimeDurationPillView *_durationView;
    _Bool _leftSideRounded;
    _Bool _rightSideRounded;
    _Bool _designated;
    double _cornerRadius;
    UIImageView *_thumbnailView;
}

@property(readonly, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic, getter=isDesignated) _Bool designated; // @synthesize designated=_designated;
@property(nonatomic) _Bool rightSideRounded; // @synthesize rightSideRounded=_rightSideRounded;
@property(nonatomic) _Bool leftSideRounded; // @synthesize leftSideRounded=_leftSideRounded;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)_updateBorderWidth;
- (void)_updateBorderColors;
- (void)layoutSubviews;
- (void)setDurationHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isDurationHidden) _Bool durationHidden;
@property(nonatomic) double duration;
- (void)setDesignated:(_Bool)arg1 withAnimationDuration:(double)arg2;
- (void)setThumbnail:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *thumbnail;
- (id)initWithFrame:(struct CGRect)arg1;

@end
