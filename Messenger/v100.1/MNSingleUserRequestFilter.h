/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNSingleUserRequestFilter : FBValueObject <NSCopying> {

	BOOL _allowEmailUsers;
	NSString* _userId;

}

@property (nonatomic,copy,readonly) NSString * userId;              //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL allowEmailUsers;                //@synthesize allowEmailUsers=_allowEmailUsers - In the implementation block
-(id)initWithUserId:(id)arg1 allowEmailUsers:(BOOL)arg2 ;
-(BOOL)allowEmailUsers;
-(NSString *)userId;
@end
