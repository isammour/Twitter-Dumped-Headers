//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/AVPlayerItemOutputPushDelegate-Protocol.h>

@class AVPlayerItemMetadataOutput, AVPlayerItemTrack, NSArray;

@protocol AVPlayerItemMetadataOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@optional
- (void)metadataOutput:(AVPlayerItemMetadataOutput *)arg1 didOutputTimedMetadataGroups:(NSArray *)arg2 fromPlayerItemTrack:(AVPlayerItemTrack *)arg3;
@end

