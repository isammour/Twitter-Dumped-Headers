//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSNumber, NSString;

@interface TFNTwitterContact : NSObject <NSCoding>
{
    long long _contactID;
    NSNumber *_contactIndex;
}

@property(readonly, nonatomic) NSNumber *contactIndex; // @synthesize contactIndex=_contactIndex;
@property(readonly, nonatomic) long long contactID; // @synthesize contactID=_contactID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithContactIdentifier:(long long)arg1 index:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

