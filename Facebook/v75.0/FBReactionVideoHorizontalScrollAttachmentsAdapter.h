/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseAttachmentAdapter.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/_FBReactionCardAdapterVideoHelperDelegate.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class UIView, FBReactionContext, FBReactionVideoToolbox, NSMutableArray, FBUserSession, FBMemModelObject, NSString;

@interface FBReactionVideoHorizontalScrollAttachmentsAdapter : FBReactionBaseAttachmentAdapter <UIScrollViewDelegate, _FBReactionCardAdapterVideoHelperDelegate> {

	UIView* _attachmentsView;
	FBReactionContext* _reactionContext;
	FBReactionVideoToolbox* _toolbox;
	BOOL _userHasScrolled;
	NSMutableArray* _videoViews;
	FBUserSession* _session;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	NSMutableArray* _adapterHelpers;
	NSString* _attachmentStyle;

}

@property (nonatomic,retain) NSMutableArray * videoViews;                                              //@synthesize videoViews=_videoViews - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,copy) NSMutableArray * adapterHelpers;                                            //@synthesize adapterHelpers=_adapterHelpers - In the implementation block
@property (nonatomic,copy) NSString * attachmentStyle;                                                 //@synthesize attachmentStyle=_attachmentStyle - In the implementation block
@property (assign,nonatomic) BOOL userHasScrolled;                                                     //@synthesize userHasScrolled=_userHasScrolled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(BOOL)supportsBottomBorder;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)willDisplayAttachments;
-(void)didEndDisplayingAttachments;
-(id)impressionEventLoggingExtras;
-(void)updateAttachmentsVisibility:(CGRect)arg1 scrollView:(id)arg2 ;
-(id)attachmentsView;
-(NSMutableArray *)adapterHelpers;
-(void)setUserHasScrolled:(BOOL)arg1 ;
-(void)setAdapterHelpers:(NSMutableArray *)arg1 ;
-(NSString *)attachmentStyle;
-(void)setAttachmentStyle:(NSString *)arg1 ;
-(BOOL)userHasScrolled;
-(id)_setUpItemViewForAttachment:(id)arg1 session:(id)arg2 style:(id)arg3 ;
-(void)videoTappedInHelper:(id)arg1 ;
-(NSMutableArray *)videoViews;
-(void)setVideoViews:(NSMutableArray *)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
-(void)setUnit:(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)arg1 ;
@end
