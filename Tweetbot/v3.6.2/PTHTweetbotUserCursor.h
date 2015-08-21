/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class PTHTweetbotUser;

@interface PTHTweetbotUserCursor : PTHTweetbotCursor {

	PTHTweetbotUser* _user;

}

@property (nonatomic,__weak,readonly) PTHTweetbotUser * user;              //@synthesize user=_user - In the implementation block
-(id)initWithTweetbotUser:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(PTHTweetbotUser *)user;
-(id)uniqueID;
@end

