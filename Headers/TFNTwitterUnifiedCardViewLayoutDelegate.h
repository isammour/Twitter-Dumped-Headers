//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNLayoutableViewLayoutDelegate-Protocol.h>

@class NSString;

@interface TFNTwitterUnifiedCardViewLayoutDelegate : NSObject <TFNLayoutableViewLayoutDelegate>
{
}

+ (_Bool)isLayoutState:(id)arg1 validForUnifiedCard:(id)arg2 componentViewRegistry:(id)arg3 layoutMetrics:(id)arg4;
+ (id)layoutStateForUnifiedCard:(id)arg1 componentViewRegistry:(id)arg2 layoutMetrics:(id)arg3 previousLayoutState:(id)arg4;
+ (id)sharedLayoutDelegate;
- (void)layoutSubviewsForLayoutableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
