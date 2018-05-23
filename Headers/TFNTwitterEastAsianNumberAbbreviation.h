//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterNumberAbbreviation-Protocol.h>

@class NSNumberFormatter, NSString;

@interface TFNTwitterEastAsianNumberAbbreviation : NSObject <TFNTwitterNumberAbbreviation>
{
    long long _maximumLength;
    NSNumberFormatter *_formatter;
}

@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) long long maximumLength; // @synthesize maximumLength=_maximumLength;
- (void).cxx_destruct;
- (id)shortUnitForHundredsOfMillions;
- (id)shortUnitForTensOfThousands;
- (id)_unitForOrder:(unsigned long long)arg1;
- (id)abbreviatedStringForNumber:(id)arg1;
- (id)initWithMaximumLength:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

