/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription, MNProfileImageInfo, MNBadgedProfileImageSpec;

@interface MNBadgedProfileImageViewModel : FBValueObject <NSCopying> {

	NSString* _userId;
	FBStringWithRedactedDescription* _name;
	MNProfileImageInfo* _profileImageInfo;
	long long _badgeType;
	MNBadgedProfileImageSpec* _profileImageSpec;

}

@property (nonatomic,copy,readonly) NSString * userId;                                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageInfo * profileImageInfo;                    //@synthesize profileImageInfo=_profileImageInfo - In the implementation block
@property (nonatomic,readonly) long long badgeType;                                           //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,copy,readonly) MNBadgedProfileImageSpec * profileImageSpec;              //@synthesize profileImageSpec=_profileImageSpec - In the implementation block
-(MNProfileImageInfo *)profileImageInfo;
-(id)initWithUserId:(id)arg1 name:(id)arg2 profileImageInfo:(id)arg3 badgeType:(long long)arg4 profileImageSpec:(id)arg5 ;
-(MNBadgedProfileImageSpec *)profileImageSpec;
-(FBStringWithRedactedDescription *)name;
-(NSString *)userId;
-(long long)badgeType;
@end
