//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSURL, TFNTwitterStatus;

@protocol TFNTwitterTimelineReactiveArticleBlender
- (void)userWillReturnToTimelineNow;
- (void)userWillReturnToTimelineAt:(NSDate *)arg1;
- (void)reactToOpeningURL:(NSURL *)arg1 inStatus:(TFNTwitterStatus *)arg2;
@end

