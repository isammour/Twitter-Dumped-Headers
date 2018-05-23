//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSModelBuilder-Protocol.h>

@class NSString;

@interface T1TwitterCS2URTTimelineResponseBuilder : NSObject <TFSModelBuilder>
{
    NSString *_accountID;
}

@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)_t1_buildModelWithResponseBridgeBuildingBlock:(CDUnknownBlockType)arg1;
- (id)modelObjectWithJSONObject:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
- (id)modelObjectWithJSONData:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
- (id)initWithAccountID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
