//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TMGDirectoryCache : NSObject
{
    NSMutableDictionary *_directoryCache;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)directoryCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *directoryCache; // @synthesize directoryCache=_directoryCache;
- (void).cxx_destruct;
- (id)mgxFileURLsInDirectoryAtURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

