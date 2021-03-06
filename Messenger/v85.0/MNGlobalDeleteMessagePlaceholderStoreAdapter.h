/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBMSPDeleteMessageListener.h>
#import <Messenger/MNMessageCellElementAppearanceListener.h>
#import <Messenger/MNMessagesModelMessageDeleteListener.h>

@protocol MNAuthenticationManager, MNGlobalDeleteMessagePlaceholderStoreReading, MNGlobalDeleteMessagePlaceholderStoreWriting, MNGlobalDeleteMessagePlaceholderAdapterDelegate;
@class NSMutableSet, FBMobileConfigContextManager, NSString;

@interface MNGlobalDeleteMessagePlaceholderStoreAdapter : NSObject <FBViewerContextClassProvidable, FBMSPDeleteMessageListener, MNMessageCellElementAppearanceListener, MNMessagesModelMessageDeleteListener> {

	id<MNAuthenticationManager> _authenticationManager;
	id<MNGlobalDeleteMessagePlaceholderStoreReading> _placeholderStoreReader;
	id<MNGlobalDeleteMessagePlaceholderStoreWriting> _placeholderStoreWriter;
	NSMutableSet* _batchedMessageIds;
	FBMobileConfigContextManager* _configManager;
	id<MNGlobalDeleteMessagePlaceholderAdapterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGlobalDeleteMessagePlaceholderAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messageCellWillAppear:(id)arg1 withMessageRow:(id)arg2 ;
-(id)initWithAuthManager:(id)arg1 placeholderStoreReader:(id)arg2 placeholderStoreWriter:(id)arg3 configManager:(id)arg4 ;
-(void)_scheduleDeletingPlaceholerForMessageId:(id)arg1 ;
-(void)_reloadThreadViewModelUponRemovingPlaceholderIfNeeded:(id)arg1 ;
-(void)syncProtocolWillApplyMessageDeleteDeltaOnMessage:(id)arg1 ;
-(void)modelController:(id)arg1 willDeleteMessage:(id)arg2 ;
-(void)modelController:(id)arg1 didFailToDeleteMessageWithMessageId:(id)arg2 withError:(id)arg3 ;
-(void)setDelegate:(id<MNGlobalDeleteMessagePlaceholderAdapterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGlobalDeleteMessagePlaceholderAdapterDelegate>)delegate;
-(void)_didBecomeActive:(id)arg1 ;
@end

