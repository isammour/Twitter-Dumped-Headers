//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TFNTwitterNotificationSettingsSection : NSObject
{
    long long _type;
    NSString *_header;
    NSArray *_entries;
}

@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(out id *)arg2;
- (id)init;

@end
