//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface T1EmptyContentMessageProvider : NSObject
{
    NSMapTable *_customConfigurationsTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)emptyContentMessageForTimeline:(id)arg1 additionalAction:(CDUnknownBlockType)arg2;
- (void)setEmptyContentMessage:(id)arg1 forTimeline:(id)arg2;
- (id)init;

@end

