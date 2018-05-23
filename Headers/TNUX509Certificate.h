//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TNUX509Certificate : NSObject
{
    NSString *_fingerprint;
    NSData *_publicKey;
    NSData *_certificateData;
    struct __SecCertificate *_certificate;
}

@property(readonly, nonatomic) struct __SecCertificate *certificate; // @synthesize certificate=_certificate;
@property(readonly, nonatomic) NSData *DERCertificateData; // @synthesize DERCertificateData=_certificateData;
- (void).cxx_destruct;
- (id)publicKey;
- (id)fingerprint;
- (id)subjectSummary;
- (void)dealloc;
- (id)initWithDERCertificateData:(id)arg1;
- (id)initWithCertificate:(struct __SecCertificate *)arg1;

@end

