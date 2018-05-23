//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TFNTwitterAccount;

@interface TFNTwitterCardAPIPeriodicRequest : NSObject
{
    NSString *_capiURL;
    NSDictionary *_requestData;
    TFNTwitterAccount *_account;
    NSString *_identifier;
    double _refreshInterval;
}

@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, copy, nonatomic) NSDictionary *requestData; // @synthesize requestData=_requestData;
@property(readonly, copy, nonatomic) NSString *capiURL; // @synthesize capiURL=_capiURL;
- (void).cxx_destruct;
- (id)initWithCapiURLString:(id)arg1 interval:(double)arg2 requestData:(id)arg3 account:(id)arg4 forCardIdentifier:(id)arg5;
- (id)init;

@end

