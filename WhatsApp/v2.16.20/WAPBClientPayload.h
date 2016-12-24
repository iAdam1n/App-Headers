/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/GPBMessage.h>

@class NSData, GPBEnumArray, WAPBClientPayload_UserAgent, WAPBClientPayload_WebInfo, NSString;

@interface WAPBClientPayload : GPBMessage

@property (assign,nonatomic) unsigned long long username; 
@property (assign,nonatomic) BOOL hasUsername; 
@property (nonatomic,copy) NSData * legacyPassword; 
@property (assign,nonatomic) BOOL hasLegacyPassword; 
@property (assign,nonatomic) BOOL passive; 
@property (assign,nonatomic) BOOL hasPassive; 
@property (nonatomic,retain) GPBEnumArray * clientFeaturesArray; 
@property (nonatomic,readonly) unsigned long long clientFeaturesArray_Count; 
@property (nonatomic,retain) WAPBClientPayload_UserAgent * userAgent; 
@property (assign,nonatomic) BOOL hasUserAgent; 
@property (nonatomic,retain) WAPBClientPayload_WebInfo * webInfo; 
@property (assign,nonatomic) BOOL hasWebInfo; 
@property (nonatomic,copy) NSString * pushName; 
@property (assign,nonatomic) BOOL hasPushName; 
@property (assign,nonatomic) int iosAppExtension; 
@property (assign,nonatomic) BOOL hasIosAppExtension; 
+(id)descriptor;
-(void)setPushName:(NSString *)arg1 ;
-(WAPBClientPayload_UserAgent *)userAgent;
-(BOOL)passive;
-(void)setPassive:(BOOL)arg1 ;
-(void)setLegacyPassword:(NSData *)arg1 ;
-(void)setUsername:(unsigned long long)arg1 ;
@end
