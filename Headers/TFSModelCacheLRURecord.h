//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSModelCacheLRUList;

@interface TFSModelCacheLRURecord : NSObject
{
    TFSModelCacheLRUList *_LRUList;
    TFSModelCacheLRURecord *_olderRecord;
    TFSModelCacheLRURecord *_newerRecord;
}

@property(retain, nonatomic) TFSModelCacheLRURecord *newerRecord; // @synthesize newerRecord=_newerRecord;
@property(retain, nonatomic) TFSModelCacheLRURecord *olderRecord; // @synthesize olderRecord=_olderRecord;
@property(retain, nonatomic) TFSModelCacheLRUList *LRUList; // @synthesize LRUList=_LRUList;
- (void).cxx_destruct;

@end

