/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <WhatsApp/WANavigationBarTitleViewFillsAvailableSpace.h>
#import <WhatsApp/WANavigationBarTitleViewCenterAlignPortrait.h>
#import <WhatsApp/WANavigationBarTitleViewCenterAlignLandscape.h>

@class UILabel, NSString;

@interface WAMediaBrowserTitleView : UIView <WANavigationBarTitleViewFillsAvailableSpace, WANavigationBarTitleViewCenterAlignPortrait, WANavigationBarTitleViewCenterAlignLandscape> {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _combinedLabel;
	BOOL _shouldCenterAlignInLandscape;

}

@property (assign,nonatomic) BOOL shouldCenterAlignInLandscape;              //@synthesize shouldCenterAlignInLandscape=_shouldCenterAlignInLandscape - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldCenterAlignInPortrait;
-(BOOL)shouldCenterAlignInLandscape;
-(void)setPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2 combinedTitle:(id)arg3 ;
-(void)setShouldCenterAlignInLandscape:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityValue;
@end

