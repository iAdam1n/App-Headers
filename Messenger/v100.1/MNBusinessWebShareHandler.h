/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNExternalForwardDataFetcherListener.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDelegate.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDataSource.h>

@class MNBusinessWebShareHandlerInjector, MNBusinessWebShareDataValidator, MNBusinessWebShareMutator, MNBusinessWebShareData, MNForwardComposerView, MNExternalForwardData, MNStaticForwardDataFetcher, NSString;

@interface MNBusinessWebShareHandler : NSObject <FBClassInjectable, MNExternalForwardDataFetcherListener, MNMultiPeoplePickerViewControllerDelegate, MNMultiPeoplePickerViewControllerDataSource> {

	MNBusinessWebShareHandlerInjector* _injector;
	MNBusinessWebShareDataValidator* _dataValidator;
	MNBusinessWebShareMutator* _shareMutator;
	MNBusinessWebShareData* _shareData;
	/*^block*/id _successBlock;
	MNForwardComposerView* _forwardComposerView;
	MNExternalForwardData* _externalForwardData;
	MNStaticForwardDataFetcher* _forwardDataFetcher;
	BOOL _currentlySharing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)shareWithShareData:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1 ;
-(id)multiPeoplePickerViewControllerAccessoryViewAboveSearchBar:(id)arg1 ;
-(void)willFetchExternalForwardDataWithMessageOutgoingAttribution:(id)arg1 ;
-(void)didFetchExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2 ;
-(void)didFailToFetchDataWithError:(id)arg1 ;
-(void)_didFinishShare;
-(void)_cleanupShare;
-(void)_performShareWithShareData:(id)arg1 messageText:(id)arg2 threadIDs:(id)arg3 ;
-(id)_previewViewForShareData:(id)arg1 ;
-(id)_previewViewForLinkShareData:(id)arg1 ;
-(id)_previewViewForGenericBubbleShareData:(id)arg1 ;
-(void)_updateShareDataWithFetchedPreviewContent:(id)arg1 ;
-(void)_updatePreviewViewWithContent:(id)arg1 ;
@end
