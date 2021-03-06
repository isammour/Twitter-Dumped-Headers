//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TwitterShareExtensionUI/TSEThrottledPropertyObserver-Protocol.h>
#import <TwitterShareExtensionUI/UITableViewDataSource-Protocol.h>
#import <TwitterShareExtensionUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, TSEAutoCompletionViewModel, TSEThrottledProperty, UITableView, UIView;
@protocol TSEAutoCompletion, TSEAutoCompletionTableViewControllerDelegate, TSEImageDownloader;

@interface TSEAutoCompletionTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, TSEThrottledPropertyObserver>
{
    id <TSEAutoCompletionTableViewControllerDelegate> _delegate;
    UITableView *_tableView;
    id <TSEAutoCompletion> _autoCompletion;
    id <TSEImageDownloader> _imageDownloader;
    TSEAutoCompletionViewModel *_viewModel;
    TSEThrottledProperty *_wordAroundSelectionProperty;
    NSArray *_latestResults;
    UIView *_separatorLine;
    NSString *_tweetText;
    NSString *_wordAroundSelection;
    NSString *_lastRequestedWord;
    unsigned long long _autoCompletionState;
    struct _NSRange _cursor;
}

@property(nonatomic) unsigned long long autoCompletionState; // @synthesize autoCompletionState=_autoCompletionState;
@property(copy, nonatomic) NSString *lastRequestedWord; // @synthesize lastRequestedWord=_lastRequestedWord;
@property(copy, nonatomic) NSString *wordAroundSelection; // @synthesize wordAroundSelection=_wordAroundSelection;
@property(nonatomic) struct _NSRange cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *tweetText; // @synthesize tweetText=_tweetText;
@property(readonly, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(copy, nonatomic) NSArray *latestResults; // @synthesize latestResults=_latestResults;
@property(readonly, nonatomic) TSEThrottledProperty *wordAroundSelectionProperty; // @synthesize wordAroundSelectionProperty=_wordAroundSelectionProperty;
@property(readonly, nonatomic) TSEAutoCompletionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <TSEImageDownloader> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) id <TSEAutoCompletion> autoCompletion; // @synthesize autoCompletion=_autoCompletion;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <TSEAutoCompletionTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)assertUnknownAutoCompletionResultClass:(Class)arg1;
- (void)reportTweetTextUpdateAndDismissWithEnteredText:(id)arg1;
- (id)autoCompletionResultAtIndexPath:(id)arg1;
- (void)throttledProperty:(id)arg1 didChangeValue:(id)arg2;
- (void)updateVisibilityWithWordAroundSelection:(id)arg1;
- (void)updateResultsWithText:(id)arg1 textSelection:(struct _NSRange)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAutoCompletion:(id)arg1 imageDownloader:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

