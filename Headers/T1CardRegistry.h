//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNCardRegistry-Protocol.h>

@interface T1CardRegistry : NSObject <TFNCardRegistry>
{
    // Error parsing type: , name: cardRegistration
    // Error parsing type: , name: account
    // Error parsing type: , name: cardMap
    // Error parsing type: , name: cardExperimentMap
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)featureSwitchesDidUpdate;
- (id)layoutDelegateForCardName:(id)arg1 displayMode:(long long)arg2;
- (id)cardViewForCardName:(id)arg1 displayMode:(long long)arg2;
- (_Bool)shouldForceRenderingCardName:(id)arg1 displayMode:(long long)arg2;
- (_Bool)isCardRegisteredForCardName:(id)arg1 displayMode:(long long)arg2;
- (id)initWithAccount:(id)arg1;

@end
