/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MNAPNSMessageUserActionInfo : FBValueObject <NSCopying> {

	BOOL _isLaunchedByUser;
	BOOL _isColdStart;
	NSString* _actionIdentifier;
	NSDictionary* _responseInfo;

}

@property (nonatomic,copy,readonly) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseInfo;              //@synthesize responseInfo=_responseInfo - In the implementation block
@property (nonatomic,readonly) BOOL isLaunchedByUser;                         //@synthesize isLaunchedByUser=_isLaunchedByUser - In the implementation block
@property (nonatomic,readonly) BOOL isColdStart;                              //@synthesize isColdStart=_isColdStart - In the implementation block
-(BOOL)isLaunchedByUser;
-(id)initWithActionIdentifier:(id)arg1 responseInfo:(id)arg2 isLaunchedByUser:(BOOL)arg3 isColdStart:(BOOL)arg4 ;
-(BOOL)isColdStart;
-(NSString *)actionIdentifier;
-(NSDictionary *)responseInfo;
@end
