/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBShareSheetTargetCell.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/CKComponentHostingViewDelegate.h>

@protocol FBShareSheetFeedDestinationCellDelegate;
@class UILabel, CKComponentHostingView, NSString;

@interface FBShareSheetFeedDestinationCell : FBShareSheetTargetCell <CKComponentProvider, CKComponentHostingViewDelegate> {

	UILabel* _privacyLabel;
	CKComponentHostingView* _pillComponent;
	CKTypedComponentAction<> _privacyPillAction;
	id<FBShareSheetFeedDestinationCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBShareSheetFeedDestinationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)setupCell;
-(void)setChecked:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPrivacy:(id)arg1 toolbox:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBShareSheetFeedDestinationCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBShareSheetFeedDestinationCellDelegate>)delegate;
@end
