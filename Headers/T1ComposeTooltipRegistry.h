//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface T1ComposeTooltipRegistry : NSObject
{
    NSMutableDictionary *_events;
}

@property(readonly, nonatomic) NSMutableDictionary *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)addConfiguration:(id)arg1 forEvent:(unsigned long long)arg2 fromIdentifier:(id)arg3;
- (id)itemsForEvent:(unsigned long long)arg1;
- (id)init;

@end

