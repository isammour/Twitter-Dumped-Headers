//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, T1TweetComposeSingleTweetViewController, TFNTwitterAutocompleteResultsController, TFNTwitterSearchTypeaheadStore;
@protocol TFNAutocompleteControllerDelegate;

@interface TFNTwitterAutocompleteController : NSObject
{
    _Bool _autocompleting;
    unsigned long long _numberOfNonDirectionControlsBeforeInsertLocation;
    _Bool _forcedNameAutocomplete;
    _Bool _forcedHashtagAutocomplete;
    TFNTwitterAutocompleteResultsController *_resultsController;
    id <TFNAutocompleteControllerDelegate> _delegate;
    long long _autocompleteType;
    TFNTwitterSearchTypeaheadStore *_typeaheadStore;
    NSString *_autocompletePrefix;
}

@property(readonly, nonatomic, getter=isAutocompleting) _Bool autocompleting; // @synthesize autocompleting=_autocompleting;
@property(readonly, nonatomic) NSString *autocompletePrefix; // @synthesize autocompletePrefix=_autocompletePrefix;
@property(readonly, nonatomic) TFNTwitterSearchTypeaheadStore *typeaheadStore; // @synthesize typeaheadStore=_typeaheadStore;
@property(readonly, nonatomic) long long autocompleteType; // @synthesize autocompleteType=_autocompleteType;
@property(nonatomic) __weak id <TFNAutocompleteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)endAutocomplete;
- (long long)private_autocompleteTypeForRange:(struct _NSRange)arg1 text:(id)arg2;
- (void)insertAutocompleteItem:(id)arg1;
- (struct _NSRange)insertAutocompleteItem:(id)arg1 atRange:(struct _NSRange)arg2;
- (void)updateResultsWithWord:(id)arg1;
- (void)private_updateAutocompleter;
- (void)forceEnableHashtagAutocomplete;
- (void)forceEnableNameAutocomplete;
- (void)_forceAutoComplete;
- (void)private_startOrUpdate;
- (void)private_didBeginAutocompleting;
- (void)private_updateResults:(id)arg1;
- (void)private_endAutocomplete;
- (void)private_receiveAutocompleteResults:(id)arg1;
- (void)protected_updateTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (_Bool)protected_shouldAutocomplete;
- (struct _NSRange)selectedRange;
- (id)text;
@property(nonatomic) long long typeaheadSourceType;
@property(nonatomic) unsigned long long autocompleteStartIndex;
- (id)initWithTypeaheadStore:(id)arg1 typeaheadSourceType:(long long)arg2;
@property(nonatomic) __weak T1TweetComposeSingleTweetViewController *tweetComposeSingleTweetViewController; // @dynamic tweetComposeSingleTweetViewController;

@end

