/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/GPBMessage.h>

@class WAPBClientPayload_UserAgent_AppVersion, NSString;

@interface WAPBClientPayload_UserAgent : GPBMessage

@property (assign,nonatomic) int platform; 
@property (assign,nonatomic) BOOL hasPlatform; 
@property (nonatomic,retain) WAPBClientPayload_UserAgent_AppVersion * appVersion; 
@property (assign,nonatomic) BOOL hasAppVersion; 
@property (nonatomic,copy) NSString * mcc; 
@property (assign,nonatomic) BOOL hasMcc; 
@property (nonatomic,copy) NSString * mnc; 
@property (assign,nonatomic) BOOL hasMnc; 
@property (nonatomic,copy) NSString * osVersion; 
@property (assign,nonatomic) BOOL hasOsVersion; 
@property (nonatomic,copy) NSString * manufacturer; 
@property (assign,nonatomic) BOOL hasManufacturer; 
@property (nonatomic,copy) NSString * device; 
@property (assign,nonatomic) BOOL hasDevice; 
@property (nonatomic,copy) NSString * osBuildNumber; 
@property (assign,nonatomic) BOOL hasOsBuildNumber; 
@property (nonatomic,copy) NSString * phoneId; 
@property (assign,nonatomic) BOOL hasPhoneId; 
@property (assign,nonatomic) int releaseChannel; 
@property (assign,nonatomic) BOOL hasReleaseChannel; 
@property (nonatomic,copy) NSString * localeLanguageIso6391; 
@property (assign,nonatomic) BOOL hasLocaleLanguageIso6391; 
@property (nonatomic,copy) NSString * localeCountryIso31661Alpha2; 
@property (assign,nonatomic) BOOL hasLocaleCountryIso31661Alpha2; 
+(id)descriptor;
-(void)setReleaseChannel:(int)arg1 ;
-(void)setLocaleLanguageIso6391:(NSString *)arg1 ;
-(void)setLocaleCountryIso31661Alpha2:(NSString *)arg1 ;
-(void)setPhoneId:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setDevice:(NSString *)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setMnc:(NSString *)arg1 ;
-(void)setMcc:(NSString *)arg1 ;
-(WAPBClientPayload_UserAgent_AppVersion *)appVersion;
-(void)setPlatform:(int)arg1 ;
@end
