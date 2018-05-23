//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNAutocompleteResultItem-Protocol.h>

@class NSString, TFNTwitterTypeaheadTopic, TFNTwitterTypeaheadUser;

@interface TFNTwitterAutocompleteResultItem : NSObject <TFNAutocompleteResultItem>
{
    _Bool _isPrefetchUser;
    _Bool _isNotSelectable;
    NSString *_autocompleteDisplayText;
    NSString *_autocompleteDisplaySubtext;
    NSString *_autocompleteReplacementText;
    NSString *_autocompleteMediaURL;
    id _userInfo;
    NSString *_itemID;
    long long _autocompleteType;
    long long _priority;
    TFNTwitterTypeaheadUser *_typeaheadUser;
    TFNTwitterTypeaheadTopic *_typeaheadTopic;
    NSString *_notSelectableText;
    NSString *_derivedSearchableText;
    struct CGSize _autocompleteMediaDimensions;
}

@property(copy, nonatomic) NSString *derivedSearchableText; // @synthesize derivedSearchableText=_derivedSearchableText;
@property(copy, nonatomic) NSString *notSelectableText; // @synthesize notSelectableText=_notSelectableText;
@property(nonatomic) _Bool isNotSelectable; // @synthesize isNotSelectable=_isNotSelectable;
@property(retain, nonatomic) TFNTwitterTypeaheadTopic *typeaheadTopic; // @synthesize typeaheadTopic=_typeaheadTopic;
@property(retain, nonatomic) TFNTwitterTypeaheadUser *typeaheadUser; // @synthesize typeaheadUser=_typeaheadUser;
@property(nonatomic) _Bool isPrefetchUser; // @synthesize isPrefetchUser=_isPrefetchUser;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long autocompleteType; // @synthesize autocompleteType=_autocompleteType;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) struct CGSize autocompleteMediaDimensions; // @synthesize autocompleteMediaDimensions=_autocompleteMediaDimensions;
@property(copy, nonatomic) NSString *autocompleteMediaURL; // @synthesize autocompleteMediaURL=_autocompleteMediaURL;
@property(copy, nonatomic) NSString *autocompleteReplacementText; // @synthesize autocompleteReplacementText=_autocompleteReplacementText;
@property(copy, nonatomic) NSString *autocompleteDisplaySubtext; // @synthesize autocompleteDisplaySubtext=_autocompleteDisplaySubtext;
@property(copy, nonatomic) NSString *autocompleteDisplayText; // @synthesize autocompleteDisplayText=_autocompleteDisplayText;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)verified;
- (id)searchableSortableText;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

