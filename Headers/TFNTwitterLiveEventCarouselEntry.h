//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterLiveEventCarouselEntry : NSObject
{
    _Bool _selected;
    NSString *_entryID;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) NSString *entryID; // @synthesize entryID=_entryID;
- (void).cxx_destruct;
- (_Bool)isEqualToCarouselEntry:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 broadcastsDictionary:(id)arg2 slatesDictionary:(id)arg3;

@end
