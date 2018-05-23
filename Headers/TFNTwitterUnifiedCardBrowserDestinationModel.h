//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterUnifiedCardBaseDestinationModel.h>

#import <T1Twitter/TFNTwitterUnifiedCardURLDestinationModel-Protocol.h>

@class NSString, NSURL;

@interface TFNTwitterUnifiedCardBrowserDestinationModel : TFNTwitterUnifiedCardBaseDestinationModel <TFNTwitterUnifiedCardURLDestinationModel>
{
    NSURL *_url;
    NSString *_vanityURLString;
}

+ (id)destinationWithJSON:(id)arg1 mediaEntitiesDict:(id)arg2;
@property(readonly, copy, nonatomic) NSString *vanityURLString; // @synthesize vanityURLString=_vanityURLString;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDestinationJSON:(id)arg1;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

