//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNTwitterAccount;

@interface T1HighlightsViewController : TFNItemsDataViewController
{
    // Error parsing type: , name: highlightsStartingExperienceShown
    // Error parsing type: , name: account
    // Error parsing type: , name: aggregatedViewModels
    // Error parsing type: , name: scribedStoryIDs
    // Error parsing type: , name: rawSections
    // Error parsing type: , name: stream
    // Error parsing type: , name: itemsSectionTransformer
    // Error parsing type: , name: markAsViewedHelper
    // Error parsing type: , name: magicRecsStoryID
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (_Bool)allowsJumpBackToHomeTimeline;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)markAsViewedHelper:(id)arg1 didViewCells:(id)arg2;
- (void)streamDidUpdate:(id)arg1;
- (void)didTapDismissStartExperienceButton:(id)arg1;
- (_Bool)isLoadingTop;
- (void)update:(_Bool)arg1;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 magicRecsStoryID:(id)arg2 pushTriggered:(_Bool)arg3;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end

