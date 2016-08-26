/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBComposerExpressionPickerTabViewProtocol.h>

@protocol FBComposerExpressionPickerTabViewDelegate;
@class UIView, NSArray, UISegmentedControl, NSString;

@interface FBComposerExpressionPickerSegmentedTabView : UIView <FBComposerExpressionPickerTabViewProtocol> {

	UIView* _bottomBorder;
	NSArray* _currentItems;
	UISegmentedControl* _segmentedControl;
	unsigned long long _selectedIndex;
	BOOL _showStickersAsFirstTab;
	BOOL _splitEnabled;
	BOOL _allowStickers;
	id<FBComposerExpressionPickerTabViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBComposerExpressionPickerTabViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowStickers;                                                         //@synthesize allowStickers=_allowStickers - In the implementation block
-(void)_createSegmentedControl;
-(id)_segmentControlItems;
-(void)_segmentedControlSectionChanged;
-(void)_updateSegmentedControlItems;
-(unsigned long long)_sectionForTitle:(id)arg1 ;
-(unsigned long long)_segmentControlIndexForSection:(unsigned long long)arg1 ;
-(id)activitySectionViewForNuxForSection:(unsigned long long)arg1 ;
-(void)setExpressionSectionAsSelected:(unsigned long long)arg1 ;
-(BOOL)allowStickers;
-(void)setAllowStickers:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 initialSection:(unsigned long long)arg2 allowStickers:(BOOL)arg3 splitEnabled:(BOOL)arg4 showStickersAsFirstTab:(BOOL)arg5 ;
-(void)setDelegate:(id<FBComposerExpressionPickerTabViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBComposerExpressionPickerTabViewDelegate>)delegate;
@end
