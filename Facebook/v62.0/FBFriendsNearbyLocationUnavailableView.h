/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBDrawnShapeView, UILabel, UIButton, FBFNFacepileView;

@interface FBFriendsNearbyLocationUnavailableView : UIView {

	FBDrawnShapeView* _arrowView;
	UILabel* _explanationTextLabel;
	UIButton* _helpButton;
	FBFNFacepileView* _facepileView;
	UIButton* _button;

}

@property (nonatomic,readonly) UIButton * button;              //@synthesize button=_button - In the implementation block
-(void)_didTapHelpButton;
-(id)initWithFacepileDataSource:(id)arg1 facepileDelegate:(id)arg2 ;
-(UIButton *)button;
-(void)layoutSubviews;
@end
