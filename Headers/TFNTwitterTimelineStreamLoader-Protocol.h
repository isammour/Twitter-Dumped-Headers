//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNTwitterTimelineCursor;

@protocol TFNTwitterTimelineStreamLoader <NSObject>
- (void)loadWithUpCursor:(TFNTwitterTimelineCursor *)arg1 downCursor:(TFNTwitterTimelineCursor *)arg2 source:(long long)arg3 responseBlock:(void (^)(NSArray *, NSError *))arg4;
@end

