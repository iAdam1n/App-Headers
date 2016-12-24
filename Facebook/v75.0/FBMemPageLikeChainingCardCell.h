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

@protocol FBMemPageLikeChainingCardCellDelegate, FBQueriedFeedUnitFieldsProtocol;
@class FBDeprecatedFeedUnitComponentView, FBFeedToolbox, FBMemModelObject, NSString;

@interface FBMemPageLikeChainingCardCell : FBMemPageCardCell <FBPageCardProtocol> {

	FBDeprecatedFeedUnitComponentView* _feedUnitComponentView;
	FBFeedToolbox* _toolbox;
	id _viewModel;
	id<FBMemPageLikeChainingCardCellDelegate> _delegate;
	BOOL _pagePresenceNewVCEnabled;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> feedUnit;              //@synthesize feedUnit=_feedUnit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)feedUnit;
-(BOOL)_shouldAddFeedContentInsets;
-(void)setFeedUnit:(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)arg1 ;
-(id)initWithDelegate:(id)arg1 backgroundColor:(id)arg2 showBorder:(BOOL)arg3 toolbox:(id)arg4 pagePresenceNewVCEnabled:(BOOL)arg5 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
@end
