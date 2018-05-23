//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVTableViewController.h>

@class NSMutableArray, NSObject, NSString, NSTimer;
@protocol PTVLoggedInUserProtocol, PTVTypeAheadSuggestionsTableViewControllerDelegate;

@interface PTVTypeAheadSuggestionsTableViewController : PTVTableViewController
{
    PTVTypeAheadSuggestionsTableViewController *_weakSelf;
    id <PTVTypeAheadSuggestionsTableViewControllerDelegate> _delegate;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    NSString *_inputText;
    struct _NSRange _selectedHashtagRange;
    unsigned long long _nHashtagsSuggested;
    NSMutableArray *_hashtagsSelected;
    NSTimer *_inputDelayTimer;
}

@property(retain, nonatomic) NSTimer *inputDelayTimer; // @synthesize inputDelayTimer=_inputDelayTimer;
- (void).cxx_destruct;
- (_Bool)doesSelectedRange:(struct _NSRange)arg1 intersectHashtag:(struct _NSRange)arg2;
- (_Bool)doesSelectedRange:(struct _NSRange)arg1 representValidCursorPositionForInputText:(id)arg2;
- (void)trackNewHashtagSuggestions:(unsigned long long)arg1;
- (void)trackSuggestedHashtag:(id)arg1;
- (id)typeAheadAnalytics;
- (void)clearInputTextAndSuggestions;
- (void)setInputText:(id)arg1;
- (void)setInputText:(id)arg1 withSelectedRange:(struct _NSRange)arg2;
- (id)initWithLoggedInUser:(id)arg1 delegate:(id)arg2;
- (void)didSelectDataRowAtIndexPath:(id)arg1;
- (id)dataCellForRowAtIndexPath:(id)arg1;
- (double)heightForDataRowAtIndexPath:(id)arg1;
- (long long)numberOfDataRowsInSection:(long long)arg1;
- (void)stateChanged;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (_Bool)shouldLoad;
- (id)context;
- (void)load:(long long)arg1;

@end

