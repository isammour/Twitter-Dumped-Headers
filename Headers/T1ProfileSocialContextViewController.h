//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ResizableHeaderSubheader-Protocol.h>

@class NSString;
@protocol TFNTwitterStatusSocialContext;

@interface T1ProfileSocialContextViewController : TFNItemsDataViewController <T1ResizableHeaderSubheader>
{
    id _subheaderInfo;
    CDUnknownBlockType _preferredHeightCheckBlock;
    id <TFNTwitterStatusSocialContext> _socialContext;
    CDUnknownBlockType _selectionBlock;
    double _lastTableWidth;
    NSString *_dividerTitle;
}

@property(retain, nonatomic) NSString *dividerTitle; // @synthesize dividerTitle=_dividerTitle;
@property(nonatomic) double lastTableWidth; // @synthesize lastTableWidth=_lastTableWidth;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(retain, nonatomic) id <TFNTwitterStatusSocialContext> socialContext; // @synthesize socialContext=_socialContext;
@property(copy, nonatomic) CDUnknownBlockType preferredHeightCheckBlock; // @synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock;
@property(retain, nonatomic) id subheaderInfo; // @synthesize subheaderInfo=_subheaderInfo;
- (void).cxx_destruct;
- (void)_loadSections;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)preferredHeight;
- (void)update:(_Bool)arg1;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)setSocialContext:(id)arg1 text:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

