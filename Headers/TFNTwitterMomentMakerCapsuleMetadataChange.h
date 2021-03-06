//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterMomentMakerCapsuleChange-Protocol.h>

@class NSNumber, NSString, TFNTwitterMomentPage, TFNTwitterMomentRender;

@interface TFNTwitterMomentMakerCapsuleMetadataChange : NSObject <TFNTwitterMomentMakerCapsuleChange>
{
    NSString *_momentID;
    TFNTwitterMomentPage *_momentPage;
    TFNTwitterMomentRender *_render;
    NSNumber *_maxCount;
    struct CGSize _mediaDimensions;
}

@property(retain, nonatomic) NSNumber *maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) struct CGSize mediaDimensions; // @synthesize mediaDimensions=_mediaDimensions;
@property(retain, nonatomic) TFNTwitterMomentRender *render; // @synthesize render=_render;
@property(retain, nonatomic) TFNTwitterMomentPage *momentPage; // @synthesize momentPage=_momentPage;
@property(copy, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
- (void).cxx_destruct;
- (id)apiCommandWithAccountID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)requestParameters;
- (id)modifiedCapsuleWithCapsule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

