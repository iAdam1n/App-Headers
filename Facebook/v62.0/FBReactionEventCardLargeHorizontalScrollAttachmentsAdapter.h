/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseAttachmentAdapter.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class UIView, FBReactionHorizontalGalleryAttachmentView, NSArray, NSMutableArray, UIImage, FBMemModelObject, FBReactionContext, NSString;

@interface FBReactionEventCardLargeHorizontalScrollAttachmentsAdapter : FBReactionBaseAttachmentAdapter <UIScrollViewDelegate> {

	UIView* _attachmentsView;
	FBReactionHorizontalGalleryAttachmentView* _scrollView;
	NSArray* _itemViews;
	NSMutableArray* _iconImageButtons;
	NSMutableArray* _iconImageButtonsIsGoing;
	NSMutableArray* _events;
	UIImage* _goingImage;
	UIImage* _addImage;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBReactionContext* _reactionContext;

}

@property (nonatomic,copy) NSArray * itemViews;                                                        //@synthesize itemViews=_itemViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconImageButtons;                                        //@synthesize iconImageButtons=_iconImageButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconImageButtonsIsGoing;                                 //@synthesize iconImageButtonsIsGoing=_iconImageButtonsIsGoing - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                                                  //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) UIImage * goingImage;                                                     //@synthesize goingImage=_goingImage - In the implementation block
@property (nonatomic,retain) UIImage * addImage;                                                       //@synthesize addImage=_addImage - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) FBReactionContext * reactionContext;                                      //@synthesize reactionContext=_reactionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBottomBorder;
+(id)reactionFormattedItemContentViewBuilder;
-(BOOL)performMagicTap;
-(void)setReactionContext:(FBReactionContext *)arg1 ;
-(FBReactionContext *)reactionContext;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)willDisplayAttachments;
-(void)didEndDisplayingAttachments;
-(id)impressionEventLoggingExtras;
-(void)updateAttachmentsVisibility:(CGRect)arg1 scrollView:(id)arg2 ;
-(id)attachmentsView;
-(id)_itemViewForAttachment:(id)arg1 session:(id)arg2 ;
-(NSMutableArray *)iconImageButtons;
-(NSMutableArray *)iconImageButtonsIsGoing;
-(UIImage *)goingImage;
-(UIImage *)addImage;
-(void)tapIconImageButton:(id)arg1 ;
-(void)setIconImageButtons:(NSMutableArray *)arg1 ;
-(void)setIconImageButtonsIsGoing:(NSMutableArray *)arg1 ;
-(void)setGoingImage:(UIImage *)arg1 ;
-(void)setAddImage:(UIImage *)arg1 ;
-(void)didTapItemView:(id)arg1 ;
-(NSMutableArray *)events;
-(NSArray *)itemViews;
-(void)setItemViews:(NSArray *)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
-(void)setUnit:(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)arg1 ;
@end
