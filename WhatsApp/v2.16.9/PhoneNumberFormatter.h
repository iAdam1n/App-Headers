/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PhoneNumberFormatter : NSObject
+(void)loadAsync;
+(id)countryInfoByMCC:(id)arg1 ;
+(id)countryInfoByIsoCode:(id)arg1 ;
+(id)countryInfoByCountryCode:(id)arg1 ;
+(id)preferredCountries;
+(id)clearNumber:(id)arg1 ;
+(id)formatNumber:(id)arg1 ;
+(id)formatLocalPhoneNumber:(id)arg1 usingCountryCode:(id)arg2 ;
+(id)formatNumberForVoiceOver:(id)arg1 ;
+(id)countryInfoFromRawNumber:(id)arg1 ;
+(id)numberStringFromPhoneNumberString:(id)arg1 ;
+(BOOL)nationalNumber:(id)arg1 containsLeadingDigits:(id)arg2 ;
+(id)internalLoadAllCountries;
+(id)formatLocalPhoneNumber:(id)arg1 usingCountryInfo:(id)arg2 ;
+(id)formatNationalNumber:(id)arg1 withCountryInfo:(id)arg2 ;
+(BOOL)phoneNumber:(id)arg1 meetsMinimumLengthRequirementOfCountry:(id)arg2 ;
+(id)removeDigits:(long long)arg1 atEndOfString:(id)arg2 ;
+(id)countryInfoFromNumber:(id)arg1 ;
+(id)allCountries;
@end

