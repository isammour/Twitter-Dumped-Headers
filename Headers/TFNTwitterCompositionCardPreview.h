//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSDictionary, NSString, TFNTwitterCardData;

@interface TFNTwitterCompositionCardPreview : NSObject <TFSTwitterScribableItem, NSCoding>
{
    long long _state;
    unsigned long long _removeReason;
    TFNTwitterCardData *_cardData;
    NSString *_URI;
}

+ (id)_previewTypeScribeParameterValueFromState:(long long)arg1 removeReason:(unsigned long long)arg2;
@property(copy, nonatomic) NSString *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) TFNTwitterCardData *cardData; // @synthesize cardData=_cardData;
@property(nonatomic) unsigned long long removeReason; // @synthesize removeReason=_removeReason;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, nonatomic, getter=isTombstoned) _Bool tombstoned;
- (void)setTombstoned;
- (void)setRemovedForReason:(unsigned long long)arg1 withCardData:(id)arg2;
- (void)setFetching;
- (void)setClientAttachedWithCardData:(id)arg1;
- (void)setDisplayedWithCardData:(id)arg1 originalDisplayURI:(id)arg2;
- (void)setDisplayedWithCardData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(readonly, nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly) Class superclass;

@end

