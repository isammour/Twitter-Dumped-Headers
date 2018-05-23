//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterUnifiedCardBaseComponentModel.h>

@class NSString;

@interface TFNTwitterUnifiedCardDetailsComponentModel : TFNTwitterUnifiedCardBaseComponentModel
{
    _Bool _isTitleRTL;
    _Bool _isSubtitleRTL;
    NSString *_title;
    NSString *_subtitle;
}

+ (id)componentWithJSON:(id)arg1 destinationDict:(id)arg2 mediaEntitiesDict:(id)arg3;
@property(readonly, nonatomic) _Bool isSubtitleRTL; // @synthesize isSubtitleRTL=_isSubtitleRTL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) _Bool isTitleRTL; // @synthesize isTitleRTL=_isTitleRTL;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithComponentJSON:(id)arg1 destinationDict:(id)arg2;
- (unsigned long long)type;

@end
