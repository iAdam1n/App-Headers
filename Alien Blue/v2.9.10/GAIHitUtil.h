/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AlienBlue/AlienBlue-Structs.h>
@interface GAIHitUtil : NSObject
+(id)systemLanguageFromLanguages:(id)arg1 ;
+(id)systemCountryFromLocale:(id)arg1 ;
+(id)userAgentStringWithProduct:(id)arg1 version:(id)arg2 deviceModel:(id)arg3 systemName:(id)arg4 systemVersion:(id)arg5 systemLanguage:(id)arg6 systemCountry:(id)arg7 ;
+(id)generateClientId;
+(id)systemCountry;
+(CGRect)swapDimensionsOfRect:(CGRect)arg1 ;
+(id)deviceModelVersion;
+(id)systemScreenResolution;
+(id)systemScreenColorDepth;
+(long long)millisecondsElapsedFrom:(id)arg1 To:(id)arg2 ;
+(unsigned)gaHash:(id)arg1 ;
+(id)hashIdfa:(id)arg1 clientId:(id)arg2 ;
+(id)userAgentString;
+(id)systemLanguage;
-(id)init;
@end

