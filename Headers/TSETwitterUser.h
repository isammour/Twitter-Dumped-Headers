//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSETwitterUser : NSObject
{
    _Bool _verified;
    _Bool _protected;
    NSString *_screenName;
    NSString *_fullName;
    long long _identifier;
    NSString *_avatarURLString;
}

@property(readonly, nonatomic) _Bool protected; // @synthesize protected=_protected;
@property(readonly, nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(readonly, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
- (void).cxx_destruct;
- (id)initWithScreenName:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

