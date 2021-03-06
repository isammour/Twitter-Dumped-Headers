//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableData;

@interface TLPEventStream : NSObject
{
    NSData *_newline;
    NSData *_commentPrefix;
    NSData *_dataPrefix;
    NSData *_eventPrefix;
    NSMutableData *_partialBuffer;
    NSData *_eventBuffer;
    NSMutableArray *_events;
}

- (void).cxx_destruct;
- (_Bool)handleLine:(id)arg1 start:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)popEvent;
- (_Bool)appendData:(id)arg1;
@property(readonly, nonatomic) unsigned long long eventCount;
- (id)init;

@end

