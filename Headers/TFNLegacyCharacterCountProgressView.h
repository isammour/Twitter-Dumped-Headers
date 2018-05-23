//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TFNUI/TFNHapticFeedback-Protocol.h>

@class CAShapeLayer, NSString, UIColor, UIFont, UIImpactFeedbackGenerator, UILabel, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@interface TFNLegacyCharacterCountProgressView : UIView <TFNHapticFeedback>
{
    long long _warnAtCount;
    long long _maxCount;
    long long _count;
    UIFont *_countLabelDefaultFont;
    UIColor *_countLabelDefaultColor;
    UIColor *_countLabelWarningColor;
    UIColor *_countLabelErrorColor;
    UIColor *_progressArcDefaultColor;
    UIColor *_progressArcWarningColor;
    UIColor *_progressArcErrorColor;
    UIColor *_backgroundArcDefaultColor;
    double _progress;
    UIColor *_progressColor;
    CAShapeLayer *_progressArc;
    CAShapeLayer *_remainderArc;
    UILabel *_countLabel;
    long long _errorAtCount;
    UINotificationFeedbackGenerator *_notificationFeedbackGenerator;
    struct CGSize _arcSize;
}

+ (void)setHapticFeedbackEnabled:(_Bool)arg1;
+ (_Bool)isHapticFeedbackEnabled;
@property(retain, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator; // @synthesize notificationFeedbackGenerator=_notificationFeedbackGenerator;
@property(nonatomic) long long errorAtCount; // @synthesize errorAtCount=_errorAtCount;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) CAShapeLayer *remainderArc; // @synthesize remainderArc=_remainderArc;
@property(retain, nonatomic) CAShapeLayer *progressArc; // @synthesize progressArc=_progressArc;
@property(nonatomic) struct CGSize arcSize; // @synthesize arcSize=_arcSize;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *backgroundArcDefaultColor; // @synthesize backgroundArcDefaultColor=_backgroundArcDefaultColor;
@property(retain, nonatomic) UIColor *progressArcErrorColor; // @synthesize progressArcErrorColor=_progressArcErrorColor;
@property(retain, nonatomic) UIColor *progressArcWarningColor; // @synthesize progressArcWarningColor=_progressArcWarningColor;
@property(retain, nonatomic) UIColor *progressArcDefaultColor; // @synthesize progressArcDefaultColor=_progressArcDefaultColor;
@property(retain, nonatomic) UIColor *countLabelErrorColor; // @synthesize countLabelErrorColor=_countLabelErrorColor;
@property(retain, nonatomic) UIColor *countLabelWarningColor; // @synthesize countLabelWarningColor=_countLabelWarningColor;
@property(retain, nonatomic) UIColor *countLabelDefaultColor; // @synthesize countLabelDefaultColor=_countLabelDefaultColor;
@property(retain, nonatomic) UIFont *countLabelDefaultFont; // @synthesize countLabelDefaultFont=_countLabelDefaultFont;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly, nonatomic) long long warnAtCount; // @synthesize warnAtCount=_warnAtCount;
- (void).cxx_destruct;
- (void)performHapticFeedback:(unsigned long long)arg1;
- (void)prepareHapticFeedback:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGPath *)progressPillPath;
- (struct CGPath *)remainderArcPathWithRadius:(double)arg1;
- (struct CGPath *)progressArcPathWithRadius:(double)arg1;
- (struct CGPoint)progressArcCenterPoint;
- (struct CGSize)containerSizeWithCount:(long long)arg1 minHeight:(double)arg2;
- (struct CGSize)containerSizeWithCount:(long long)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCountLabelWithHidden:(_Bool)arg1 color:(id)arg2 animated:(_Bool)arg3;
- (void)setArcSizeWithOldValue:(long long)arg1 newValue:(long long)arg2 end:(struct CGSize)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (double)progressLineWidth;
@property(readonly, nonatomic) long long displayCount;
@property(readonly, nonatomic) struct CGSize progressSizeWarn;
@property(readonly, nonatomic) double minimumWidth;
- (double)circularProgressViewProgressStrokeWidth;
- (double)circularProgressViewRemainderStrokeWidth;
- (void)_tfn_setCount:(long long)arg1;
- (void)resetProgressCount;
- (void)updateProgressCount:(long long)arg1 maxCount:(long long)arg2 warnAtCount:(long long)arg3 errorAtCount:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 maxCount:(long long)arg2 warnAtCount:(long long)arg3 errorAtCount:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property(readonly) Class superclass;

@end

