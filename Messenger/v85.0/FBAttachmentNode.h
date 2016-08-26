/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/FBAnalyticsInfoSource.h>

@protocol FBAttachmentNodeDelegate;
@class ASDisplayNode, NSString;

@interface FBAttachmentNode : ASDisplayNode <FBAnalyticsInfoSource> {

	BOOL _delegateNodeWillAppear;
	BOOL _delegateNodeDidDissapear;
	BOOL _storyHasFullscreenFocus;
	BOOL _edgeAntialiasingEnabled;
	ASDisplayNode* _owningViewNode;
	id<FBAttachmentNodeDelegate> _delegate;
	ASDisplayNode* _accessoryNode;

}

@property (assign,nonatomic,__weak) ASDisplayNode * owningViewNode;                     //@synthesize owningViewNode=_owningViewNode - In the implementation block
@property (assign,nonatomic,__weak) id<FBAttachmentNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPageable,nonatomic,readonly) BOOL pageable; 
@property (nonatomic,retain) ASDisplayNode * accessoryNode;                             //@synthesize accessoryNode=_accessoryNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(id)analyticsModule;
-(id)analyticsExtras;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)setMinimorphFactor:(FBMinimorphFactor)arg1 ;
-(void)didExitHierarchy;
-(void)willEnterHierarchy;
-(void)setAccessoryNode:(ASDisplayNode *)arg1 ;
-(BOOL)wantsFullscreen;
-(BOOL)isPageable;
-(ASDisplayNode *)owningViewNode;
-(void)setOwningViewNode:(ASDisplayNode *)arg1 ;
-(ASDisplayNode *)accessoryNode;
-(void)setDelegate:(id<FBAttachmentNodeDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBAttachmentNodeDelegate>)delegate;
-(void)layout;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg1 ;
@end
