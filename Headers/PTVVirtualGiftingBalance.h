//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVVirtualGiftingBalance : NSObject
{
    long long _total_coins;
    long long _total_stars;
}

@property(readonly, nonatomic) long long total_stars; // @synthesize total_stars=_total_stars;
@property(readonly, nonatomic) long long total_coins; // @synthesize total_coins=_total_coins;
- (id)initWithTotalCoins:(long long)arg1 totalStars:(long long)arg2;

@end
