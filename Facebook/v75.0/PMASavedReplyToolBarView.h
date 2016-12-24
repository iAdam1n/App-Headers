/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UIImageView, UIButton;

@interface PMASavedReplyToolBarView : UIView {

	CALayer* _horizontalSeparator;
	CALayer* _verticalRightSeparator;
	CALayer* _verticalLeftSeparator;
	CALayer* _verticalExtraSeparator;
	UIImageView* _thumbnail;
	BOOL _isMacroToolbar;
	UIButton* _galleryButton;
	UIButton* _cameraButton;
	UIButton* _macroButton;
	UIButton* _removeThumbnailButton;
	UIButton* _doneButton;
	UIButton* _cancelButton;

}

@property (nonatomic,readonly) UIButton * galleryButton;                      //@synthesize galleryButton=_galleryButton - In the implementation block
@property (nonatomic,readonly) UIButton * cameraButton;                       //@synthesize cameraButton=_cameraButton - In the implementation block
@property (nonatomic,readonly) UIButton * macroButton;                        //@synthesize macroButton=_macroButton - In the implementation block
@property (nonatomic,readonly) UIButton * removeThumbnailButton;              //@synthesize removeThumbnailButton=_removeThumbnailButton - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                         //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                       //@synthesize cancelButton=_cancelButton - In the implementation block
-(UIButton *)cameraButton;
-(void)configureDefaultToolbarMacrosOnly:(BOOL)arg1 ;
-(void)configureMacrosToolbar;
-(UIButton *)galleryButton;
-(UIButton *)macroButton;
-(UIButton *)removeThumbnailButton;
-(void)addThumbnail:(id)arg1 ;
-(void)removeThumbnail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)cancelButton;
-(UIButton *)doneButton;
@end
