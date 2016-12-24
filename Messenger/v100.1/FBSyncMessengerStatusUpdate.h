/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSyncMessengerStatusUpdate : FBValueObject <NSCopying> {

	BOOL _isMessengerUser;
	NSString* _fbId;

}

@property (nonatomic,copy,readonly) NSString * fbId;              //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,readonly) BOOL isMessengerUser;              //@synthesize isMessengerUser=_isMessengerUser - In the implementation block
-(NSString *)fbId;
-(id)initWithFbId:(id)arg1 isMessengerUser:(BOOL)arg2 ;
-(BOOL)isMessengerUser;
@end
