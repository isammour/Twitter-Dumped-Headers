//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTwitterAPIRequestSourceInfo;
@protocol TFSTwitterAPIConfiguration;

@interface TFSTwitterAPIRequestContext : NSObject
{
    id <TFSTwitterAPIConfiguration> _configuration;
    TFSTwitterAPIRequestSourceInfo *_sourceInfo;
}

@property(readonly, nonatomic) TFSTwitterAPIRequestSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(readonly, nonatomic) id <TFSTwitterAPIConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 sourceInfo:(id)arg2;

@end
