//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1ResizableHeaderSubheader-Protocol.h>

@class NSString, T1MomentScoreView, TFNTwitterAccount, TFNTwitterLiveEventTopModule, TFNTwitterLiveEventTopModuleScore;

@interface T1LiveEventTopModuleSubheaderViewController : TFNViewController <T1ResizableHeaderSubheader>
{
    CDUnknownBlockType _preferredHeightCheckBlock;
    id _subheaderInfo;
    TFNTwitterAccount *_account;
    TFNTwitterLiveEventTopModule *_topModule;
    T1MomentScoreView *_scoreView;
}

@property(retain, nonatomic) T1MomentScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) TFNTwitterLiveEventTopModule *topModule; // @synthesize topModule=_topModule;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) id subheaderInfo; // @synthesize subheaderInfo=_subheaderInfo;
@property(copy, nonatomic) CDUnknownBlockType preferredHeightCheckBlock; // @synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock;
- (void).cxx_destruct;
- (void)_t1_setupScoreViewIfReady;
- (struct CGRect)_t1_scoreRectFromWrapperRect:(struct CGRect)arg1;
- (double)preferredHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) TFNTwitterLiveEventTopModuleScore *topModuleScore;
- (id)initWithTopModule:(id)arg1 account:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
