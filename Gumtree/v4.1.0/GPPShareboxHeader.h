/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class UIButton, UIView, UIColor, UIImage;

@interface GPPShareboxHeader : NSObject {

	UIButton* _aclPickerAcceptButton;
	UIButton* _aclPickerCancelButton;
	UIView* _aclPickerTitleView;
	UIColor* _backgroundColor;
	UIButton* _composeCancelButton;
	UIButton* _composeShareButton;
	UIView* _composeTitleView;
	UIImage* _shareCheckboxCheckedImage;
	UIImage* _shareCheckboxUncheckedImage;
	UIEdgeInsets _aclPickerViewInsets;
	UIEdgeInsets _composeViewInsets;

}

@property (nonatomic,retain) UIButton * aclPickerAcceptButton;                   //@synthesize aclPickerAcceptButton=_aclPickerAcceptButton - In the implementation block
@property (nonatomic,retain) UIButton * aclPickerCancelButton;                   //@synthesize aclPickerCancelButton=_aclPickerCancelButton - In the implementation block
@property (nonatomic,retain) UIView * aclPickerTitleView;                        //@synthesize aclPickerTitleView=_aclPickerTitleView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets aclPickerViewInsets;                   //@synthesize aclPickerViewInsets=_aclPickerViewInsets - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIButton * composeCancelButton;                     //@synthesize composeCancelButton=_composeCancelButton - In the implementation block
@property (nonatomic,retain) UIButton * composeShareButton;                      //@synthesize composeShareButton=_composeShareButton - In the implementation block
@property (nonatomic,retain) UIView * composeTitleView;                          //@synthesize composeTitleView=_composeTitleView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets composeViewInsets;                     //@synthesize composeViewInsets=_composeViewInsets - In the implementation block
@property (nonatomic,retain) UIImage * shareCheckboxCheckedImage;                //@synthesize shareCheckboxCheckedImage=_shareCheckboxCheckedImage - In the implementation block
@property (nonatomic,retain) UIImage * shareCheckboxUncheckedImage;              //@synthesize shareCheckboxUncheckedImage=_shareCheckboxUncheckedImage - In the implementation block
-(UIButton *)aclPickerAcceptButton;
-(UIButton *)aclPickerCancelButton;
-(UIView *)aclPickerTitleView;
-(UIEdgeInsets)aclPickerViewInsets;
-(UIButton *)composeCancelButton;
-(UIButton *)composeShareButton;
-(UIView *)composeTitleView;
-(UIEdgeInsets)composeViewInsets;
-(UIImage *)shareCheckboxCheckedImage;
-(UIImage *)shareCheckboxUncheckedImage;
-(void)setComposeCancelButton:(UIButton *)arg1 ;
-(void)setAclPickerAcceptButton:(UIButton *)arg1 ;
-(void)setAclPickerCancelButton:(UIButton *)arg1 ;
-(void)setAclPickerTitleView:(UIView *)arg1 ;
-(void)setAclPickerViewInsets:(UIEdgeInsets)arg1 ;
-(void)setComposeShareButton:(UIButton *)arg1 ;
-(void)setComposeTitleView:(UIView *)arg1 ;
-(void)setComposeViewInsets:(UIEdgeInsets)arg1 ;
-(void)setShareCheckboxCheckedImage:(UIImage *)arg1 ;
-(void)setShareCheckboxUncheckedImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
@end

