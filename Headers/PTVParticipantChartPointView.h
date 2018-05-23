//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface PTVParticipantChartPointView : UIView
{
    UIView *_dotView;
    UIImageView *_toolTipView;
    UIImageView *_participantIcon;
    UILabel *_participantLabel;
    UILabel *_peakLabel;
    _Bool _isLive;
    _Bool _isTooltipOnLeft;
    unsigned long long _participantCount;
}

@property(nonatomic) _Bool isTooltipOnLeft; // @synthesize isTooltipOnLeft=_isTooltipOnLeft;
@property(nonatomic) unsigned long long participantCount; // @synthesize participantCount=_participantCount;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
- (void).cxx_destruct;
- (_Bool)isShowingPeak;
- (double)fullCurrentWidth;
- (void)configurePeakLabel;
- (void)configureTooltipView;
- (void)configureDotView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
