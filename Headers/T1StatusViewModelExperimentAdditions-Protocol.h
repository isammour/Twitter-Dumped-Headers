//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSDictionary, TFNTwitterAccount, TFNTwitterCardData, TFNTwitterMediaInfo;

@protocol T1StatusViewModelExperimentAdditions <NSObject>
- (NSDictionary *)updatedScribeParameters:(NSDictionary *)arg1 withAccount:(TFNTwitterAccount *)arg2;
- (_Bool)hasMediaForAccount:(TFNTwitterAccount *)arg1;
- (NSDictionary *)scribeParametersForAccount:(TFNTwitterAccount *)arg1;
- (NSArray *)inlineMediaInfosForAccount:(TFNTwitterAccount *)arg1;
- (TFNTwitterMediaInfo *)primaryMediaInfoForAccount:(TFNTwitterAccount *)arg1;
- (unsigned long long)primaryMediaTypeForAccount:(TFNTwitterAccount *)arg1;
- (long long)primaryCardTypeForAccount:(TFNTwitterAccount *)arg1;
- (TFNTwitterCardData *)cardDataForAccount:(TFNTwitterAccount *)arg1;
- (NSDictionary *)scribeItemForAccount:(TFNTwitterAccount *)arg1;
- (_Bool)shouldOmitCardLinkForAccount:(TFNTwitterAccount *)arg1;
- (_Bool)hasTwitterMediaIncludingPartners:(unsigned long long)arg1 forAccount:(TFNTwitterAccount *)arg2;
- (_Bool)shouldOmitCollectionLinkForAccount:(TFNTwitterAccount *)arg1;
- (_Bool)shouldShowVideoViewCountForAccount:(TFNTwitterAccount *)arg1;
- (_Bool)shouldShowCollectionCarouselForAccount:(TFNTwitterAccount *)arg1;
- (_Bool)shouldShowQuotedTweetForAccount:(TFNTwitterAccount *)arg1;
@end
