/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPickUpAttachmentNode.h>
#import <Messenger/FBPageableItem.h>

@class NSString;

@interface FBPageablePickUpAttachmentNode : FBPickUpAttachmentNode <FBPageableItem> {

	BOOL _snappedOpenForPaging;
	BOOL _activePageInPagingNode;
	BOOL _wasActivePageInPagingNodeBeforeClosing;
	long long _initialPagingOrientation;

}

@property (assign,nonatomic) long long initialPagingOrientation;                       //@synthesize initialPagingOrientation=_initialPagingOrientation - In the implementation block
@property (assign,nonatomic) BOOL snappedOpenForPaging;                                //@synthesize snappedOpenForPaging=_snappedOpenForPaging - In the implementation block
@property (assign,nonatomic) BOOL activePageInPagingNode;                              //@synthesize activePageInPagingNode=_activePageInPagingNode - In the implementation block
@property (assign,nonatomic) BOOL wasActivePageInPagingNodeBeforeClosing;              //@synthesize wasActivePageInPagingNodeBeforeClosing=_wasActivePageInPagingNodeBeforeClosing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL supportsOrientationRotation; 
-(BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(long long)arg2 ;
-(void)mayClose;
-(long long)initialOpenedOrientation;
-(long long)initialPagingOrientation;
-(void)setInitialPagingOrientation:(long long)arg1 ;
-(BOOL)snappedOpenForPaging;
-(void)setSnappedOpenForPaging:(BOOL)arg1 ;
-(BOOL)activePageInPagingNode;
-(void)setActivePageInPagingNode:(BOOL)arg1 ;
-(BOOL)wasActivePageInPagingNodeBeforeClosing;
-(void)setWasActivePageInPagingNodeBeforeClosing:(BOOL)arg1 ;
-(void)cleanUpAfterPaging;
-(void)maySettleAsActivePage;
-(void)didBeginMoving;
-(void)didSettleAsActivePage;
-(void)didSettleAsInactivePage;
-(void)didExitPagingRange;
-(void)prepareForPagingInContext:(unsigned long long)arg1 inOrientation:(long long)arg2 withPagingGestureRecognizer:(id)arg3 ;
-(void)didEnterPagingRange;
-(id)init;
@end

