//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLocale.h>

@class NSCharacterSet, NSString;

@interface NSLocale (TFSAdditions)
- (id)tfs_localizedStringForCurrencyCode:(id)arg1;
- (id)tfs_localizedStringForCollatorIdentifier:(id)arg1;
- (id)tfs_localizedStringForCollationIdentifier:(id)arg1;
- (id)tfs_localizedStringForVariantCode:(id)arg1;
- (id)tfs_localizedStringForScriptCode:(id)arg1;
- (id)tfs_localizedStringForLanguageCode:(id)arg1;
- (id)tfs_localizedStringForCountryCode:(id)arg1;
- (id)tfs_localizedStringForLocaleIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *tfs_alternateQuotationEndDelimiter;
@property(readonly, copy, nonatomic) NSString *tfs_alternateQuotationBeginDelimiter;
@property(readonly, copy, nonatomic) NSString *tfs_quotationEndDelimiter;
@property(readonly, copy, nonatomic) NSString *tfs_quotationBeginDelimiter;
@property(readonly, copy, nonatomic) NSString *tfs_currencySymbol;
@property(readonly, copy, nonatomic) NSString *tfs_currencyCode;
@property(readonly, copy, nonatomic) NSString *tfs_groupingSeparator;
@property(readonly, copy, nonatomic) NSString *tfs_decimalSeparator;
@property(readonly, nonatomic) _Bool tfs_usesMetricSystem;
@property(readonly, copy, nonatomic) NSString *tfs_collatorIdentifier;
@property(readonly, copy, nonatomic) NSString *tfs_collationIdentifier;
@property(readonly, nonatomic) NSCharacterSet *tfs_exemplarCharacterSet;
@property(readonly, copy, nonatomic) NSString *tfs_variantCode;
@property(readonly, copy, nonatomic) NSString *tfs_scriptCode;
@property(readonly, copy, nonatomic) NSString *tfs_languageCode;
@property(readonly, copy, nonatomic) NSString *tfs_countryCode;
@end

