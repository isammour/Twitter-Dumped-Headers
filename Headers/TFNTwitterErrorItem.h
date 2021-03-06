//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface TFNTwitterErrorItem : NSObject
{
    NSError *_error;
    NSString *_mainErrorText;
    NSString *_errorSubtext;
}

@property(copy, nonatomic) NSString *errorSubtext; // @synthesize errorSubtext=_errorSubtext;
@property(copy, nonatomic) NSString *mainErrorText; // @synthesize mainErrorText=_mainErrorText;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1 mainErrorText:(id)arg2 errorSubtext:(id)arg3;

@end

