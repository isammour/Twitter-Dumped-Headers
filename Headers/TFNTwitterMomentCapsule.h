//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterMomentContainer-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSArray, NSDate, NSString, TFNTwitterMoment, TFNTwitterMomentAccess, TFNTwitterMomentAuthor, TFNTwitterMomentCapsuleCTA, TFNTwitterMomentCurationMetadata, TFNTwitterMomentEvent, TFNTwitterMomentPage, TFNTwitterMomentPremadeMomentData, TFNTwitterPromotedContent, TFNTwitterSuggestsInfo, TFNTwitterUser;

@interface TFNTwitterMomentCapsule : NSObject <TFNTwitterMomentContainer, TFSPlistSerialization>
{
    _Bool _deleted;
    TFNTwitterMoment *_moment;
    NSArray *_pages;
    TFNTwitterMomentPage *_coverPage;
    TFNTwitterMomentCapsuleCTA *_CTA;
    TFNTwitterSuggestsInfo *_suggestsInfo;
}

+ (id)hydrateMomentCapsule:(id)arg1 withStatuses:(id)arg2;
+ (id)momentCapsuleWithMakerJSONData:(id)arg1 error:(out id *)arg2;
+ (id)momentCapsuleWithJSONData:(id)arg1 error:(out id *)arg2;
@property(retain, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo; // @synthesize suggestsInfo=_suggestsInfo;
@property(readonly, nonatomic) TFNTwitterMomentCapsuleCTA *CTA; // @synthesize CTA=_CTA;
@property(readonly, nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, nonatomic) TFNTwitterMomentPage *coverPage; // @synthesize coverPage=_coverPage;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(readonly, nonatomic) TFNTwitterMoment *moment; // @synthesize moment=_moment;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
@property(readonly, nonatomic) TFNTwitterMomentAccess *momentAccess;
@property(readonly, nonatomic) long long totalLikes;
@property(readonly, nonatomic) _Bool isLiked;
@property(readonly, nonatomic) TFNTwitterPromotedContent *promotedContent;
@property(readonly, nonatomic) TFNTwitterMomentPremadeMomentData *premadeMomentData;
@property(readonly, nonatomic) TFNTwitterMomentCurationMetadata *curationMetadata;
@property(readonly, nonatomic) TFNTwitterMomentEvent *event;
@property(readonly, nonatomic) TFNTwitterUser *authorUser;
@property(readonly, nonatomic) TFNTwitterMomentAuthor *author;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic, getter=isSubscribed) _Bool subscribed;
@property(readonly, nonatomic, getter=canSubscribe) _Bool subscribable;
@property(readonly, nonatomic) NSString *categoryString;
@property(readonly, nonatomic) NSString *durationString;
@property(readonly, nonatomic) NSDate *lastPublishTime;
@property(readonly, nonatomic) NSString *timeString;
@property(readonly, nonatomic, getter=isSensitive) _Bool sensitive;
@property(readonly, nonatomic, getter=isLive) _Bool live;
@property(readonly, nonatomic) NSString *momentDescription;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *momentID;
- (void)updateMoment:(id)arg1;
- (id)allStatuses;
- (id)capsuleByReplacingStatuses:(id)arg1;
- (_Bool)isVisibleByAccount:(id)arg1;
- (id)pagesForAccount:(id)arg1;
@property(readonly, nonatomic) NSArray *allCarouselPages;
@property(readonly, nonatomic) _Bool needsPageHydration;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithMoment:(id)arg1 pages:(id)arg2 coverPage:(id)arg3 deleted:(_Bool)arg4 CTA:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

