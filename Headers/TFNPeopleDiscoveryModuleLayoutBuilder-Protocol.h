//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, TFNPeopleDiscoveryModuleLayout;

@protocol TFNPeopleDiscoveryModuleLayoutBuilder <NSObject>
+ (NSArray *)moduleLayoutIdentifiers;
- (TFNPeopleDiscoveryModuleLayout *)buildModuleLayoutWithJSONDictionary:(NSDictionary *)arg1 layoutIdentifier:(NSString *)arg2 error:(out id *)arg3;
@end

