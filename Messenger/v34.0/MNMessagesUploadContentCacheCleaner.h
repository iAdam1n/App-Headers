/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMessagesModelMessageDeleteListener.h>
#import <Messenger/FBSessionClassProvidable.h>

@class MNPhotoImageUploadResultCacher, NSString;

@interface MNMessagesUploadContentCacheCleaner : NSObject <MNMessagesModelMessageDeleteListener, FBSessionClassProvidable> {

	MNPhotoImageUploadResultCacher* _uploadResultCacher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)modelController:(id)arg1 willDeleteMessage:(id)arg2 ;
-(void)modelController:(id)arg1 didFailToDeleteMessageWithMessageId:(id)arg2 withError:(id)arg3 ;
@end

