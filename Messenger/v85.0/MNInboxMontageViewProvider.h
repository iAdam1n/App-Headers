/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNInboxUnitViewProviding.h>
#import <Messenger/MNInboxUnitViewConfiguring.h>
#import <Messenger/MNInboxUnitViewComparing.h>

@protocol FBStickerResourceManager;
@class MNMontageThumbnailController, FBUserSession, NSString;

@interface MNInboxMontageViewProvider : NSObject <MNInboxUnitViewProviding, MNInboxUnitViewConfiguring, MNInboxUnitViewComparing> {

	MNMontageThumbnailController* _montageThumbnailController;
	id<FBStickerResourceManager> _stickerResourceManger;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMontageThumbnailController:(id)arg1 stickerResourceManager:(id)arg2 session:(id)arg3 ;
-(Class)viewClassForViewModel:(id)arg1 ;
-(id)viewForViewModel:(id)arg1 ;
-(id)viewModelForView:(id)arg1 ;
-(void)configureView:(id)arg1 withViewModel:(id)arg2 ;
-(CGSize)sizeForViewModel:(id)arg1 collectionViewSize:(CGSize)arg2 ;
-(void)_configureMontageView:(id)arg1 withViewModel:(id)arg2 ;
-(id)keyForViewModel:(id)arg1 ;
@end
