/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassInjectable.h>

@class MNLightweightActionSenderInjector, NSString;

@interface MNLightweightActionSender : NSObject <FBClassInjectable> {

	MNLightweightActionSenderInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)lightweightActionSenderAlertControllerForPerson:(id)arg1 analyticsModule:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)_sendLightweightActionType:(NSString*)arg1 toPerson:(id)arg2 analyticsModule:(id)arg3 ;
-(void)_completeFetchingThreadWithPerson:(id)arg1 lightweightActionType:(NSString*)arg2 outgoingAttachment:(id)arg3 response:(id)arg4 error:(id)arg5 analyticsModule:(id)arg6 ;
-(void)_presentSentNotificationForLightweightActionType:(NSString*)arg1 toPerson:(id)arg2 ;
@end
