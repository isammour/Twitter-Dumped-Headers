//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1StatusViewInlineActions-Protocol.h>

@class NSString;

@interface T1StatusViewEmptyInlineActions : NSObject <T1StatusViewInlineActions>
{
}

+ (id)sharedInstance;
- (void)enumerateInlineActionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)viewForInlineActionWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
