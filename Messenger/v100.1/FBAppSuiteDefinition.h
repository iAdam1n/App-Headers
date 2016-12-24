/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMainApplicationDefinition, FBMessagingApplicationDefinition;

@interface FBAppSuiteDefinition : FBValueObject <NSCopying> {

	FBMainApplicationDefinition* _mainApplication;
	FBMessagingApplicationDefinition* _messagingApplication;

}

@property (nonatomic,copy,readonly) FBMainApplicationDefinition * mainApplication;                        //@synthesize mainApplication=_mainApplication - In the implementation block
@property (nonatomic,copy,readonly) FBMessagingApplicationDefinition * messagingApplication;              //@synthesize messagingApplication=_messagingApplication - In the implementation block
-(FBMessagingApplicationDefinition *)messagingApplication;
-(id)initWithMainApplication:(id)arg1 messagingApplication:(id)arg2 ;
-(FBMainApplicationDefinition *)mainApplication;
@end
