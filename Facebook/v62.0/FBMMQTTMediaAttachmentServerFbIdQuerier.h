/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMessageAttachmentServerFbIdQuerier.h>

@protocol MNMQTTSending, MNMQTTListenerManaging;
@class FBMQTTListener, NSMutableDictionary, NSString;

@interface FBMMQTTMediaAttachmentServerFbIdQuerier : NSObject <FBMessageAttachmentServerFbIdQuerier> {

	id<MNMQTTSending> _sender;
	id<MNMQTTListenerManaging> _listenerManager;
	FBMQTTListener* _messageListener;
	NSMutableDictionary* _callbackBlocks;
	mutex _mutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupMQTTListener;
-(void)_processMQTTPayload:(id)arg1 ;
-(void)_addCallback:(/*^block*/id)arg1 forHash:(id)arg2 ;
-(void)_removeCallback:(/*^block*/id)arg1 forHash:(id)arg2 ;
-(void)queryMediaFbIdFromServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMQTTSender:(id)arg1 listenerManager:(id)arg2 ;
@end
