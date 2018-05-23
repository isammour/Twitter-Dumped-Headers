//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSString;
@protocol TFNTwitterAudioPartnerDataProvider;

@interface TFNTwitterAudioPlayerConfiguration : NSObject <NSCopying>
{
    _Bool _externalAudioSessionControl;
    _Bool _isAudioClientPageReferrerEnabled;
    _Bool _isAudioClientUserIdHashingEnabled;
    _Bool _isAudioCustomPromotedLoggingEnabled;
    _Bool _isAudioMacawnymizerBeaconingEnabled;
    _Bool _isAudioPlayerEnabled;
    _Bool _isAudioPlayerTFXAnimationEnabled;
    id <TFNTwitterAudioPartnerDataProvider> _partnerDataProvider;
    NSString *_audioClientPageReferrerTemplate;
    NSString *_audioClientUserIdHashingTemplate;
}

+ (id)t1_configurationWithAccount:(id)arg1;
@property(readonly, nonatomic) _Bool isAudioPlayerTFXAnimationEnabled; // @synthesize isAudioPlayerTFXAnimationEnabled=_isAudioPlayerTFXAnimationEnabled;
@property(readonly, nonatomic) _Bool isAudioPlayerEnabled; // @synthesize isAudioPlayerEnabled=_isAudioPlayerEnabled;
@property(readonly, nonatomic) _Bool isAudioMacawnymizerBeaconingEnabled; // @synthesize isAudioMacawnymizerBeaconingEnabled=_isAudioMacawnymizerBeaconingEnabled;
@property(readonly, nonatomic) _Bool isAudioCustomPromotedLoggingEnabled; // @synthesize isAudioCustomPromotedLoggingEnabled=_isAudioCustomPromotedLoggingEnabled;
@property(readonly, nonatomic) _Bool isAudioClientUserIdHashingEnabled; // @synthesize isAudioClientUserIdHashingEnabled=_isAudioClientUserIdHashingEnabled;
@property(readonly, nonatomic) _Bool isAudioClientPageReferrerEnabled; // @synthesize isAudioClientPageReferrerEnabled=_isAudioClientPageReferrerEnabled;
@property(readonly, nonatomic) _Bool externalAudioSessionControl; // @synthesize externalAudioSessionControl=_externalAudioSessionControl;
@property(readonly, copy, nonatomic) NSString *audioClientUserIdHashingTemplate; // @synthesize audioClientUserIdHashingTemplate=_audioClientUserIdHashingTemplate;
@property(readonly, copy, nonatomic) NSString *audioClientPageReferrerTemplate; // @synthesize audioClientPageReferrerTemplate=_audioClientPageReferrerTemplate;
@property(readonly, nonatomic) id <TFNTwitterAudioPartnerDataProvider> partnerDataProvider; // @synthesize partnerDataProvider=_partnerDataProvider;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

