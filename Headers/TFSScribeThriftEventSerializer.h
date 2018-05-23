//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/TFSScribeEventSerializer-Protocol.h>

@class NSData, NSString;

@interface TFSScribeThriftEventSerializer : NSObject <TFSScribeEventSerializer>
{
    NSData *_data;
    NSString *_group;
    NSString *_category;
}

+ (id)dataFromThrift:(id)arg1;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)metadata;
- (id)dictionaryRepresentation;
- (id)initWithThriftEvent:(id)arg1 category:(id)arg2 group:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
