//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ResizableHeaderSubheader-Protocol.h>

@class NSString, TFNTwitterCallToAction;

@interface T1ProfileCallToActionViewController : TFNItemsDataViewController <T1ResizableHeaderSubheader>
{
    CDUnknownBlockType _preferredHeightCheckBlock;
    id _subheaderInfo;
    TFNTwitterCallToAction *_callToAction;
}

@property(readonly, nonatomic) TFNTwitterCallToAction *callToAction; // @synthesize callToAction=_callToAction;
@property(retain, nonatomic) id subheaderInfo; // @synthesize subheaderInfo=_subheaderInfo;
@property(copy, nonatomic) CDUnknownBlockType preferredHeightCheckBlock; // @synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock;
- (void).cxx_destruct;
- (double)preferredHeight;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 activeSubtitleRange:(struct _NSRange)arg3 activeTextActionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

