//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterLiveBannerItem;

@interface TFNTwitterLiveBannerItemAndIndexTuple : NSObject
{
    TFNTwitterLiveBannerItem *_item;
    long long _originalIndexWithinEntry;
}

@property(readonly, nonatomic) long long originalIndexWithinEntry; // @synthesize originalIndexWithinEntry=_originalIndexWithinEntry;
@property(readonly, nonatomic) TFNTwitterLiveBannerItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 atIndex:(long long)arg2;

@end
