/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBMIndexedMessageSetBuilder : NSObject {

	NSMutableDictionary* _messageIdToMessageMap;
	NSMutableDictionary* _messageOfflineIdToMessageMap;

}
-(id)initWithMessages:(id)arg1 ;
-(void)addMessagesFromSet:(id)arg1 ;
-(id)_normalizeOrderForMessages:(id)arg1 ;
-(id)_existingMessageForMessageId:(id)arg1 ;
-(void)_clearReferencesForMessage:(id)arg1 ;
-(id)_existingMessageForOfflineId:(id)arg1 ;
-(void)removeMessageByDescriptor:(id)arg1 ;
-(id)existingMessageForDescriptor:(id)arg1 ;
-(id)init;
-(id)build;
-(void)addMessage:(id)arg1 ;
-(void)addMessages:(id)arg1 ;
@end
