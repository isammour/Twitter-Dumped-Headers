//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@protocol TFSActiveTextRange;

@protocol TFNActiveRangeGestureHandler <NSObject>
- (id <TFSActiveTextRange>)activeRangeGestureCancelled;
- (id <TFSActiveTextRange>)activeRangeGestureEnded;
- (id <TFSActiveTextRange>)activeRangeGestureBeganAtLocation:(struct CGPoint)arg1;
@end

