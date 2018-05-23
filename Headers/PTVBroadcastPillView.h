//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIColor, UIFont, UIImageView, UILabel, UIView;

@interface PTVBroadcastPillView : UIControl
{
    unsigned long long _type;
    NSString *_liveParticipantsString;
    NSString *_endedViewersString;
    NSString *_endedLabelString;
    UIFont *_labelFont;
    UIColor *_labelColor;
    UIColor *_defaultBackgroundColor;
    UIColor *_liveBackgroundColor;
    UIView *_badgeView;
    UIView *_detailBadgeView;
    UIImageView *_detailBadgeImageView;
    UILabel *_label;
    UILabel *_detailBadgeViewLabel;
    struct UIEdgeInsets _labelInsets;
}

@property(retain, nonatomic) UILabel *detailBadgeViewLabel; // @synthesize detailBadgeViewLabel=_detailBadgeViewLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *detailBadgeImageView; // @synthesize detailBadgeImageView=_detailBadgeImageView;
@property(retain, nonatomic) UIView *detailBadgeView; // @synthesize detailBadgeView=_detailBadgeView;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) struct UIEdgeInsets labelInsets; // @synthesize labelInsets=_labelInsets;
@property(retain, nonatomic) UIColor *liveBackgroundColor; // @synthesize liveBackgroundColor=_liveBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(retain, nonatomic) NSString *endedLabelString; // @synthesize endedLabelString=_endedLabelString;
@property(retain, nonatomic) NSString *endedViewersString; // @synthesize endedViewersString=_endedViewersString;
@property(retain, nonatomic) NSString *liveParticipantsString; // @synthesize liveParticipantsString=_liveParticipantsString;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_updateBadgeComponentsBackgroundColors;
- (_Bool)_shouldDisplayParticipants;
@property(nonatomic) double cornerRadius;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
