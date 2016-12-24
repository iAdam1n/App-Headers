/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNInboxUnitViewProviding.h>
#import <Messenger/MNInboxUnitViewConfiguring.h>
#import <Messenger/MNInboxUnitViewComparing.h>

@protocol FBStickerResourceManager, MNInboxMontageViewDelegate;
@class MNMontageThumbnailController, MNMessageSendProgressSubscriptionCenter, MNMontageArtPickerDominantColorPicker, FBUserSession, NSMapTable, FBMobileConfigContextManager, NSString;

@interface MNInboxMontageViewProvider : NSObject <MNInboxUnitViewProviding, MNInboxUnitViewConfiguring, MNInboxUnitViewComparing> {

	MNMontageThumbnailController* _montageThumbnailController;
	MNMessageSendProgressSubscriptionCenter* _sendProgressSubscriptionCenter;
	id<FBStickerResourceManager> _stickerResourceManger;
	MNMontageArtPickerDominantColorPicker* _artPickerDominantColorPicker;
	FBUserSession* _session;
	NSMapTable* _inboxMontageViewToProgressSubscriptionCancelableMap;
	FBMobileConfigContextManager* _configManager;
	id<MNInboxMontageViewDelegate> _inboxMontageViewDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMontageThumbnailController:(id)arg1 sendProgressSubscriptionCenter:(id)arg2 stickerResourceManager:(id)arg3 artPickerDominantColorPicker:(id)arg4 session:(id)arg5 configManager:(id)arg6 inboxMontageViewDelegate:(id)arg7 ;
-(Class)viewClassForViewModel:(id)arg1 ;
-(id)viewForViewModel:(id)arg1 ;
-(id)viewModelForView:(id)arg1 ;
-(id)keyForViewModel:(id)arg1 ;
-(void)configureView:(id)arg1 withViewModel:(id)arg2 ;
-(CGSize)sizeForViewModel:(id)arg1 collectionViewSize:(CGSize)arg2 ;
-(double)layerZPositionForViewModel:(id)arg1 ;
-(void)_configureMontageView:(id)arg1 withViewModel:(id)arg2 ;
-(void)_resetProgressForView:(id)arg1 ;
-(void)_startNewProgressSubscriptionIfNeeded:(id)arg1 ;
-(void)_updateProgress:(double)arg1 forOfflineThreadingId:(id)arg2 inView:(id)arg3 ;
@end
