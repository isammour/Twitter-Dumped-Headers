//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol TFNTwitterTimelineScriber
- (void)databaseWasWiped;
- (void)databaseVersionDidChange;
- (void)timelineTopCursorDoesNotExist;
- (void)timelineTopCursorIsNotValid;
- (void)timelineTopCursorTypeDoesNotMatch;
- (void)timelineTopCursorDeserializationSucceeded;
- (void)timelineCacheWasWipedForReason:(long long)arg1;
- (void)timelineItemsHydrationDidFail;
- (void)timelineDeserializationDidFail;
- (void)timelineItemSerializationDidFail;
@end

