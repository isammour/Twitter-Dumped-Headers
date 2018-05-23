//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/T1MomentCapsuleCTAViewDelegate-Protocol.h>
#import <T1Twitter/T1MomentCapsuleInfoViewDelegate-Protocol.h>
#import <T1Twitter/T1MomentPresentationSource-Protocol.h>
#import <T1Twitter/TFNSizeThatFitsHelperDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterMomentSportEventUpdateListener-Protocol.h>

@class NSString, T1MomentCapsuleCTAView, T1MomentCapsuleInfoView, T1MomentScoreView, TFNSizeThatFitsHelper, TFNTwitterAccount, TFNTwitterMomentEvent, UIView;
@protocol T1MomentCapsuleAdapterDelegate, T1MomentCapsuleInfoViewLayoutDelegate;

@interface T1MomentCapsuleTableViewCell : TFNTableViewCell <T1MomentCapsuleInfoViewDelegate, TFNSizeThatFitsHelperDelegate, TFNTwitterMomentSportEventUpdateListener, T1MomentCapsuleCTAViewDelegate, T1MomentPresentationSource>
{
    _Bool _showsSportScore;
    id <T1MomentCapsuleAdapterDelegate> _cellHost;
    T1MomentCapsuleInfoView *_capsuleView;
    TFNTwitterAccount *_account;
    T1MomentScoreView *_scoreView;
    T1MomentCapsuleCTAView *_ctaView;
    id <T1MomentCapsuleInfoViewLayoutDelegate> _layoutDelegate;
    TFNSizeThatFitsHelper *_layoutHelper;
    TFNTwitterMomentEvent *_momentEvent;
}

+ (_Bool)allowedToShowCTA;
+ (_Bool)allowedToShowScores;
+ (id)layoutDelegate;
+ (id)cellTheme;
+ (double)estimatedHeightWithMomentViewModel:(id)arg1 account:(id)arg2 eventUpdate:(id)arg3 layoutMetrics:(id)arg4;
+ (double)heightWithMomentViewModel:(id)arg1 account:(id)arg2 eventUpdate:(id)arg3 layoutMetrics:(id)arg4;
@property(retain, nonatomic) TFNTwitterMomentEvent *momentEvent; // @synthesize momentEvent=_momentEvent;
@property(retain, nonatomic) TFNSizeThatFitsHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
@property(retain, nonatomic) id <T1MomentCapsuleInfoViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(readonly, nonatomic) T1MomentCapsuleCTAView *ctaView; // @synthesize ctaView=_ctaView;
@property(readonly, nonatomic) T1MomentScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(nonatomic) _Bool showsSportScore; // @synthesize showsSportScore=_showsSportScore;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1MomentCapsuleInfoView *capsuleView; // @synthesize capsuleView=_capsuleView;
@property(nonatomic) __weak id <T1MomentCapsuleAdapterDelegate> cellHost; // @synthesize cellHost=_cellHost;
- (void).cxx_destruct;
- (void)sportEventsDataManager:(id)arg1 didUpdateEvent:(id)arg2;
- (void)invalidateCurrentLayout;
- (void)setMomentViewModel:(id)arg1 account:(id)arg2;
- (void)_disableButtonSelection:(id)arg1;
- (void)_cleanupCTAView;
- (void)_cleanupScoreView;
- (void)sizeThatFitsHelper:(id)arg1 layoutSubviewsForView:(id)arg2 atWidth:(double)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *presentationSourceView;
- (void)capsuleCTAView:(id)arg1 didTapCTA:(id)arg2;
- (void)momentCapsuleInfoViewDidTapFollow:(id)arg1;
- (void)cleanup;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
