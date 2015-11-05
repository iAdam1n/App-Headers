/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotMediaService.h>

@class NSRegularExpression, PTHURLRequest;

@interface PTHTweetbotDroplrMediaService : PTHTweetbotMediaService {

	NSRegularExpression* _expression;
	PTHURLRequest* _request;

}
+(BOOL)canUploadImages;
+(BOOL)canUploadMovies;
+(void)authenticate:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)keychainAccountName;
+(id)title;
+(BOOL)needsAuthentication;
-(void)uploadMedium:(id)arg1 withMessage:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancel;
@end

