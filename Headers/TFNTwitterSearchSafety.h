//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterSearchSafety : NSObject
{
    _Bool _safeSearchEnabled;
    _Bool _hideContentFromBlockedUsers;
}

+ (id)searchSafetyWithJSONData:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) _Bool hideContentFromBlockedUsers; // @synthesize hideContentFromBlockedUsers=_hideContentFromBlockedUsers;
@property(readonly, nonatomic) _Bool safeSearchEnabled; // @synthesize safeSearchEnabled=_safeSearchEnabled;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

