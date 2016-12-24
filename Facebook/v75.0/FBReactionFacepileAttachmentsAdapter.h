/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseAttachmentAdapter.h>
#import <Facebook/_FBReactionAdapterProfileHelperDelegate.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class UIView, FBReactionContext, NSMutableArray, FBUserSession, FBMemModelObject, NSString;

@interface FBReactionFacepileAttachmentsAdapter : FBReactionBaseAttachmentAdapter <_FBReactionAdapterProfileHelperDelegate> {

	UIView* _attachmentsView;
	FBReactionContext* _reactionContext;
	NSMutableArray* _adapterHelpers;
	FBUserSession* _session;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;

}

@property (nonatomic,copy) NSMutableArray * adapterHelpers;                                            //@synthesize adapterHelpers=_adapterHelpers - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBottomBorder;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)willDisplayAttachments;
-(void)didEndDisplayingAttachments;
-(id)impressionEventLoggingExtras;
-(void)updateAttachmentsVisibility:(CGRect)arg1 scrollView:(id)arg2 ;
-(id)attachmentsView;
-(NSMutableArray *)adapterHelpers;
-(id)_pullProfiles;
-(void)openProfile:(id)arg1 forAdapterHelper:(id)arg2 ;
-(void)setAdapterHelpers:(NSMutableArray *)arg1 ;
-(BOOL)shouldDisplayEllipsisViewForConnection:(id)arg1 withCurrentCount:(long long)arg2 ;
-(void)addViewFromEdge:(id)arg1 to:(id)arg2 ;
-(void)addEllipsisImageViewToAttachmentViews:(id)arg1 ;
-(void)ellipsisViewTapped;
-(void)openSeeAll;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
-(void)setUnit:(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)arg1 ;
@end
