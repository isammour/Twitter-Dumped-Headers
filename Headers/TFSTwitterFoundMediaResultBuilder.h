//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSModelBuilder-Protocol.h>

@class NSString, TFNFoundMediaGroup;

@interface TFSTwitterFoundMediaResultBuilder : NSObject <TFSModelBuilder>
{
    TFNFoundMediaGroup *_parentGroup;
}

@property(readonly, nonatomic) TFNFoundMediaGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
- (void).cxx_destruct;
- (id)modelObjectWithJSONData:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
- (id)initWithParentGroup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

