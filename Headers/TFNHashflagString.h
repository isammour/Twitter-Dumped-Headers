//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString;

@interface TFNHashflagString : NSObject
{
    NSString *_originalText;
    NSAttributedString *_attributedString;
    NSArray *_hashflagsDownloading;
}

@property(readonly, copy, nonatomic) NSArray *hashflagsDownloading; // @synthesize hashflagsDownloading=_hashflagsDownloading;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1 font:(id)arg2;

@end

