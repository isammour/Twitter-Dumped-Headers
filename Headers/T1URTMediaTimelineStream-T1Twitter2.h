//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1URTMediaTimelineStream.h>

#import <T1Twitter/TFNTwitterBasicStreamSupport-Protocol.h>

@interface T1URTMediaTimelineStream (T1Twitter2) <TFNTwitterBasicStreamSupport>
- (id)streamObjects;
- (_Bool)loadGap:(id)arg1 withSource:(long long)arg2;
- (_Bool)loadBottomWithSource:(long long)arg1;
- (_Bool)loadTopWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isLoadingGap;
- (_Bool)isLoadingBottom;
- (_Bool)isLoadingTop;
- (id)displayName;
- (void)setAccount:(id)arg1;
- (id)account;
@end

