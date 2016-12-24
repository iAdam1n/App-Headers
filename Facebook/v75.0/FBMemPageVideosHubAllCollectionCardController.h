/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBMemPageVideosHubCardCellDelegate.h>
#import <Facebook/FBCardViewProvider.h>

@protocol FBPageVideosHubCardControllerDelegate, FBNavigationCoordinator, FBIntentHandler;
@class FBMemPageVideosHubCardCell, FBPagesVideoHubDataModel, NSString;

@interface FBMemPageVideosHubAllCollectionCardController : FBMemPageCardController <FBMemPageVideosHubCardCellDelegate, FBCardViewProvider> {

	FBMemPageVideosHubCardCell* _cardCell;
	id<FBPageVideosHubCardControllerDelegate> _videoHubDelegate;
	unsigned long long _entrySource;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	FBPagesVideoHubDataModel* _dataModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)openCollection;
-(void)openVideoHub;
-(id)initWithPage:(id)arg1 videoHubDelegate:(id)arg2 userSession:(id)arg3 entrySource:(unsigned long long)arg4 navigationCoordinator:(id)arg5 intentHandler:(id)arg6 videoHubDataModel:(id)arg7 ;
-(UIView*<FBPageCardProtocol>)cardView;
@end
