/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotMediaParser.h>

@interface PTHTweetbotFlickrMediaParser : PTHTweetbotMediaParser
+(long long)mediumTypeForEntity:(id)arg1 ;
+(void)loadURLForMedium:(id)arg1 response:(/*^block*/id)arg2 ;
+(void)loadPreviewURLDictionaryForMedium:(id)arg1 response:(/*^block*/id)arg2 ;
+(id)parsableHosts;
+(BOOL)sourceFromEntity:(id)arg1 size:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)_loadMedium:(id)arg1 response:(/*^block*/id)arg2 ;
+(BOOL)loadMediaURLFromEntity:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

