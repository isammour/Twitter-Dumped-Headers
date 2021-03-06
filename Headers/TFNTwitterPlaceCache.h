//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface TFNTwitterPlaceCache : NSObject
{
    NSCache *_locationToSnapshotImageCache;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSCache *locationToSnapshotImageCache; // @synthesize locationToSnapshotImageCache=_locationToSnapshotImageCache;
- (void).cxx_destruct;
- (id)_cacheKeyForLocation:(id)arg1;
- (void)resetMapSnapshotCache;
- (id)mapSnapshotImageForLocation:(id)arg1;
- (void)setMapSnapshotImage:(id)arg1 forLocation:(id)arg2;
- (id)init;

@end

