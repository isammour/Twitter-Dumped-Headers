//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

@class TFNTwitterComposition, TFNTwitterCompositionUploadContext;

@interface TFNTwitterCompositionAssimilateReplyOperation : TFSDependentConcurrentOperation
{
    TFNTwitterComposition *_composition;
    TFNTwitterCompositionUploadContext *_context;
}

@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithComposition:(id)arg1 context:(id)arg2;
- (id)init;

@end

