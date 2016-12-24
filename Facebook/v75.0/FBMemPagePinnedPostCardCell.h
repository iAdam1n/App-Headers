/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMemPageCardCell.h>
#import <Facebook/FBPageCardProtocol.h>
#import <Facebook/FBDeprecatedFeedUnitComponentViewDelegate.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class UIImageView, FBFeedToolbox, FBDeprecatedFeedUnitComponentView, FBUserSession, FBMemModelObject, NSString;

@interface FBMemPagePinnedPostCardCell : FBMemPageCardCell <FBPageCardProtocol, FBDeprecatedFeedUnitComponentViewDelegate> {

	UIImageView* _pinnedPostIndicator;
	FBFeedToolbox* _toolbox;
	FBDeprecatedFeedUnitComponentView* _feedUnitComponentView;
	FBUserSession* _session;
	id _viewModel;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;

}

@property (nonatomic,readonly) FBDeprecatedFeedUnitComponentView * feedUnitComponentView;              //@synthesize feedUnitComponentView=_feedUnitComponentView - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> feedUnit;              //@synthesize feedUnit=_feedUnit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)feedUnit;
-(void)setFeedUnit:(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)arg1 ;
-(void)feedUnitComponentViewDidInvalidateSize:(id)arg1 ;
-(id)initWithSession:(id)arg1 feedUnit:(id)arg2 toolbox:(id)arg3 contentTopMargin:(double)arg4 contentBottomMargin:(double)arg5 backgroundColor:(id)arg6 ;
-(FBDeprecatedFeedUnitComponentView *)feedUnitComponentView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
@end
