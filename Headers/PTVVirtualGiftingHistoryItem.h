//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PTVVirtualGiftingHistoryItem : NSObject
{
    NSDate *_date;
    long long _reason;
    long long _unit;
    long long _amount;
    NSString *_broadcast_id;
    NSString *_package_id;
}

@property(readonly, nonatomic) NSString *package_id; // @synthesize package_id=_package_id;
@property(readonly, nonatomic) NSString *broadcast_id; // @synthesize broadcast_id=_broadcast_id;
@property(readonly, nonatomic) long long amount; // @synthesize amount=_amount;
@property(readonly, nonatomic) long long unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

