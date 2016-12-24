/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMUser, NSArray;

@interface CurrentAndOtherUsers : NSObject {

	FBMUser* _currentUser;
	NSArray* _otherUsers;

}

@property (nonatomic,readonly) FBMUser * currentUser;                  //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherUsers;              //@synthesize otherUsers=_otherUsers - In the implementation block
-(id)initWithCurrentUser:(id)arg1 otherUsers:(id)arg2 ;
-(NSArray *)otherUsers;
-(FBMUser *)currentUser;
@end
