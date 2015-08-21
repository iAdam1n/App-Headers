/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class FBAuthUserInfo;

@interface FBAuthStoredUser : FBValueObject <NSCopying> {

	unsigned long long _userType;
	FBAuthUserInfo* _userInfo;

}

@property (nonatomic,readonly) unsigned long long userType;                 //@synthesize userType=_userType - In the implementation block
@property (nonatomic,copy,readonly) FBAuthUserInfo * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(id)initWithUserType:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(unsigned long long)userType;
-(FBAuthUserInfo *)userInfo;
@end

