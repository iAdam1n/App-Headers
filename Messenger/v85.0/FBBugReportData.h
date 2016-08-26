/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSNotificationCenter;

@interface FBBugReportData : NSObject {

	NSMutableDictionary* _dict;
	NSMutableArray* _attachmentsPath;
	NSMutableSet* _contextsToUploadWithInitialCreationRequest;
	NSMutableDictionary* _parameters;
	NSMutableDictionary* _infoItems;
	NSNotificationCenter* _notificationCenter;

}
+(id)sharedBugReportData;
+(id)initiationSourceAsString:(unsigned long long)arg1 ;
-(void)appendToContext:(id)arg1 withFormat:(id)arg2 ;
-(void)addAttachmentsPath:(id)arg1 ;
-(void)removeAttachmentPath:(id)arg1 ;
-(void)initialCreationRequestShouldContainAttachmentInformationForContext:(id)arg1 ;
-(void)setContentsOfContext:(id)arg1 withFormat:(id)arg2 ;
-(id)stringForContext:(id)arg1 ;
-(id)contextsToUploadWithInitialCreationRequest;
-(id)allInfoItems;
-(id)allAttachmentPaths;
-(id)_bufferForContextWhileSynchronized:(id)arg1 ;
-(id)_takeScreenshot;
-(void)addParameter:(id)arg1 value:(id)arg2 ;
-(void)addInfoItem:(id)arg1 value:(id)arg2 ;
-(void)setCapacity:(unsigned long long)arg1 forContext:(id)arg2 ;
-(void)saveScreenshot;
-(id)initWithNotificationCenter:(id)arg1 ;
-(id)allContexts;
-(id)takeSnapshot;
-(id)allParameters;
@end
