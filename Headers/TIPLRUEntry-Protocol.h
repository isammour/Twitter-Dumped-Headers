//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/NSObject-Protocol.h>

@class NSString;
@protocol TIPLRUEntry;

@protocol TIPLRUEntry <NSObject>
@property(nonatomic) __weak id <TIPLRUEntry> previousLRUEntry;
@property(retain, nonatomic) id <TIPLRUEntry> nextLRUEntry;
- (_Bool)shouldAccessMoveLRUEntryToHead;
- (NSString *)LRUEntryIdentifier;
@end

