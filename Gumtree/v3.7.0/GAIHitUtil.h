/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
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

