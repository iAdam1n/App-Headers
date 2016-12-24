/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, MNMessageReactionsActionDataSourceInjector, NSString;

@interface MNMessageReactionsActionDataSource : NSObject <FBClassInjectable> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _defaultMessageReactionActions;
	MNMessageReactionsActionDataSourceInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)defaultMessageReactionActions;
-(void)loadDefaultMessageReactionAnimations:(/*^block*/id)arg1 ;
@end
