//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TFSModelCacheSearchResults : NSObject
{
    NSMutableArray *_objects;
    NSMutableArray *_keys;
}

@property(readonly, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(readonly, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (void)addRecord:(id)arg1;
- (id)init;

@end

