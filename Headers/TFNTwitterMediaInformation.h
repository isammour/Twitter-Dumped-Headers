//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSDate, NSString, TFNTwitterMediaImageInformation, TFNTwitterMediaProcessingInformation;

@interface TFNTwitterMediaInformation : NSObject <NSCoding, TFSPlistSerialization>
{
    NSString *_mediaID;
    long long _mediaType;
    unsigned long long _size;
    TFNTwitterMediaImageInformation *_imageInformation;
    NSDate *_expiryDate;
    NSDate *_lastModifiedDate;
    TFNTwitterMediaProcessingInformation *_processingInformation;
}

+ (id)mediaInformationWithJSONData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) TFNTwitterMediaProcessingInformation *processingInformation; // @synthesize processingInformation=_processingInformation;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) TFNTwitterMediaImageInformation *imageInformation; // @synthesize imageInformation=_imageInformation;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
- (void).cxx_destruct;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

