/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface NBPhoneNumber : NSObject <NSCopying> {

	BOOL italianLeadingZero;
	unsigned countryCode;
	unsigned long long nationalNumber;
	NSString* extension;
	NSString* rawInput;
	NSNumber* countryCodeSource;
	NSString* preferredDomesticCarrierCode;
	NSString* pauseComponent;

}

@property (assign,nonatomic) unsigned countryCode; 
@property (assign,nonatomic) unsigned long long nationalNumber; 
@property (nonatomic,retain) NSString * extension; 
@property (assign,nonatomic) BOOL italianLeadingZero; 
@property (nonatomic,retain) NSString * rawInput; 
@property (nonatomic,retain) NSNumber * countryCodeSource; 
@property (nonatomic,retain) NSString * preferredDomesticCarrierCode; 
@property (nonatomic,retain) NSString * pauseComponent; 
-(unsigned long long)nationalNumber;
-(NSString *)rawInput;
-(void)setNationalNumber:(unsigned long long)arg1 ;
-(void)setCountryCodeSource:(NSNumber *)arg1 ;
-(void)setItalianLeadingZero:(BOOL)arg1 ;
-(void)setPauseComponent:(NSString *)arg1 ;
-(NSNumber *)countryCodeSource;
-(NSString *)preferredDomesticCarrierCode;
-(NSString *)pauseComponent;
-(BOOL)italianLeadingZero;
-(void)setRawInput:(NSString *)arg1 ;
-(void)setPreferredDomesticCarrierCode:(NSString *)arg1 ;
-(void)clearCountryCodeSource;
-(int)getCountryCodeSourceOrDefault;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)extension;
-(void)setExtension:(NSString *)arg1 ;
-(unsigned)countryCode;
-(void)setCountryCode:(unsigned)arg1 ;
-(BOOL)isEqualToObject:(id)arg1 ;
@end
