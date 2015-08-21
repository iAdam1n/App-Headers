/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class NSString;

@interface PTHTweetbotCachedUser : PTHTweetbotObject {

	NSString* _name;
	NSString* _screenName;
	NSString* _profileImageURLString;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * screenName;                          //@synthesize screenName=_screenName - In the implementation block
@property (nonatomic,__weak,readonly) NSString * displayName; 
@property (nonatomic,copy) NSString * profileImageURLString;               //@synthesize profileImageURLString=_profileImageURLString - In the implementation block
-(id)profileImageURLForSize:(unsigned long long)arg1 ;
-(NSString *)profileImageURLString;
-(void)setProfileImageURLString:(NSString *)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isLoaded;
-(NSString *)displayName;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
@end

