//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1LiveBannerScribe : NSObject
{
}

- (id)init;
- (void)scribeImpressionOfItem:(id)arg1 containedByEntry:(id)arg2 atIndex:(unsigned long long)arg3 dueToCause:(long long)arg4 from:(id)arg5;
- (void)scribeUndoingFeedbackForItem:(id)arg1 containedByEntry:(id)arg2 atIndex:(unsigned long long)arg3 from:(id)arg4;
- (void)scribeGivingFeedbackForItem:(id)arg1 containedByEntry:(id)arg2 atIndex:(unsigned long long)arg3 from:(id)arg4;
- (void)scribeOpeningItem:(id)arg1 containedByEntry:(id)arg2 atIndex:(unsigned long long)arg3 from:(id)arg4;
- (void)scribeOpeningFeedbackForItem:(id)arg1 containedByEntry:(id)arg2 atIndex:(unsigned long long)arg3 from:(id)arg4;
- (void)scribeImpressionOf:(id)arg1 from:(id)arg2;

@end
