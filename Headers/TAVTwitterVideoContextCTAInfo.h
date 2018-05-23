//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface TAVTwitterVideoContextCTAInfo : NSObject
{
    unsigned long long _type;
    NSString *_urlString;
    NSNumber *_appId;
    NSString *_appName;
}

+ (id)withAmplifyVMAPPlaylistCTA:(id)arg1;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWatchURLCTAWithURLString:(id)arg1;
- (id)initOpenURLCTAWithURLString:(id)arg1;
- (id)initAppStoreCTAWithAppId:(id)arg1 appName:(id)arg2;

@end
