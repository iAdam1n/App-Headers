/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMSPFolderCountDeltaHandlerListener.h>
#import <Facebook/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNThreadListMetadataFetcher, FBMSPFolderCountDeltaHandlerListenerAnnouncer, MNPendingRequestsSPUpdateHandlerListenerAnnouncer, NSString;

@interface MNPendingRequestsSPUpdateHandler : NSObject <FBMSPFolderCountDeltaHandlerListener, FBViewerContextClassProvidable> {

	id<FBProvider> _pendingRequestsMetaDataFetcherProvider;
	MNThreadListMetadataFetcher* _pendingRequestsMetaDataFetcher;
	FBMSPFolderCountDeltaHandlerListenerAnnouncer* _folderCountDeltaHandlerAnnouncer;
	MNPendingRequestsSPUpdateHandlerListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_didFetchUnreadRequestNumber:(unsigned long long)arg1 totalNumber:(unsigned long long)arg2 mailboxSnippet:(id)arg3 ;
-(void)_couldNotFetchThreadListMetaDataWithError:(id)arg1 ;
-(void)syncProtocolFolderCountDeltaDidUpdateFolderCountForFolder:(long long)arg1 withUnreadThreadsNumber:(unsigned long long)arg2 ;
-(id)initWithFolderCountDeltaHandlerAnnouncer:(id)arg1 pendingRequestsMetaDataFetcherProvider:(id)arg2 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
